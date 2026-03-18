/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x1402EDFE8
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140290B9C (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140291C10 (KiDeferGroupSchedulingPreemption.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402ECA00 (KiBeginThreadAccountingPeriod.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiInsertQueueApc @ 0x1402EE784 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402EE894 (KiSignalThreadForApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x400) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2 + 648;
  v13 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[6];
        SchedulerAssist[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v10[6] - 1;
        v10[6] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a2 + 64) );
  }
  if ( (*(_DWORD *)(a2 + 116) & 0x4000) != 0 && !*(_BYTE *)(v6 + 82) )
  {
    *(_BYTE *)(v6 + 82) = 1;
    KiInsertQueueApc(v6);
    LOBYTE(v8) = 2;
    KiSignalThreadForApc(a1, v6, v8);
  }
  return KiReleaseThreadLockSafe(a2);
}
