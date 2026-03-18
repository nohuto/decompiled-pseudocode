/*
 * XREFs of KeRemoveQueueApc @ 0x1403240DC
 * Callers:
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x14028A550 (ExpCancelTimer.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140360568 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpQueueStackWalkApc @ 0x1405A5210 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A9E7C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1405ACDC4 (EtwpCovSampCaptureCancelApcs.c)
 *     CmNotifyRunDown @ 0x1406836AC (CmNotifyRunDown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveQueueApc @ 0x1403241B4 (KiRemoveQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v8; // rcx
  char v9; // bl
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  int v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  while ( 1 )
  {
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v8[6];
        v8[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
      break;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v11[6] - 1;
        v11[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v19, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(v4 + 64) );
  }
  v9 = KiRemoveQueueApc(a1);
  KiReleaseThreadLockSafe(v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v9;
}
