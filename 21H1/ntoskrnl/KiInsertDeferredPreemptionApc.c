/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x14035707C
 * Callers:
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1403336A0 (KiDeferGroupSchedulingPreemption.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiSignalThreadForApc @ 0x140357158 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1403572DC (KiInsertQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 result; // rax
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+40h] [rbp+18h] BYREF

  if ( (_BYTE)a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x400) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[6];
        SchedulerAssist[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
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
      KeYieldProcessorEx(&v14, a2, a3, a4);
    while ( *(_QWORD *)(a2 + 64) );
  }
  if ( !*(_BYTE *)(a2 + 730) && (*(_DWORD *)(a2 + 116) & 0x4000) != 0 )
  {
    *(_BYTE *)(a2 + 730) = 1;
    KiInsertQueueApc(a2 + 648, a2, a3, a4);
    LOBYTE(v8) = 2;
    KiSignalThreadForApc(a1, v9, v8);
  }
  return KiReleaseThreadLockSafe(a2);
}
