/*
 * XREFs of KeRemoveQueueApc @ 0x14024EC10
 * Callers:
 *     EtwpCancelPendingStackWalkApcs @ 0x14024E07C (EtwpCancelPendingStackWalkApcs.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406330FC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140635C4C (EtwpCovSampCaptureCancelApcs.c)
 *     ExpCancelTimer @ 0x14063DFAC (ExpCancelTimer.c)
 *     CmNotifyRunDown @ 0x14079FD44 (CmNotifyRunDown.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiRemoveQueueApc @ 0x14024ECFC (KiRemoveQueueApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v5; // rcx
  char v6; // bl
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  unsigned __int8 v12; // cl
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  while ( 1 )
  {
    v5 = CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = v5[6];
        v5[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[6] - 1;
        v10[6] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(v1 + 64) );
  }
  v6 = KiRemoveQueueApc(a1);
  KiReleaseThreadLockSafe(v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
