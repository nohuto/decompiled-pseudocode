/*
 * XREFs of KiRestoreClockTickRate @ 0x14022F864
 * Callers:
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x14038BFAC (KiResumeClockTimer.c)
 * Callees:
 *     KiGetClockIntervalOneShot @ 0x14022F670 (KiGetClockIntervalOneShot.c)
 *     KiSetPendingTick @ 0x14022F96C (KiSetPendingTick.c)
 *     KiLogClockIncrementUpdate @ 0x14022F99C (KiLogClockIncrementUpdate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 */

__int64 __fastcall KiRestoreClockTickRate(unsigned __int64 a1, _QWORD *a2, int *a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v6; // rsi
  int v7; // ebx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  __int64 ClockIntervalOneShot; // rdx
  __int64 (__fastcall *v13)(); // rax
  int v14; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a1 = (unsigned int)CurrentIrql + 1;
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LOBYTE(a1) = 1;
    CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
    *(_QWORD *)a3 = (unsigned int)KiSetNextClockTickDueTime(a1);
    *a2 = CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v7 = KiClockOwnerOneShotRequestState;
    *a2 = (unsigned int)KiLastRequestedTimeIncrement;
    if ( v7 )
    {
      v11 = KiClockOwnerOneShotRequest;
      if ( KiClockOwnerOneShotCorrectiveRequest >= v6
        && KiClockOwnerOneShotCorrectiveRequest < (unsigned __int64)KiClockOwnerOneShotRequest )
      {
        v11 = KiClockOwnerOneShotCorrectiveRequest;
      }
      ClockIntervalOneShot = (unsigned int)KiGetClockIntervalOneShot(v11, v6);
      v13 = off_140C01EE0[0];
      *a2 = ClockIntervalOneShot;
      ((void (__fastcall *)(__int64, __int64, int *))v13)(1LL, ClockIntervalOneShot, a3);
      v8 = *(_DWORD *)a2;
      v14 = *a3;
      KiLastRequestedTimeIncrement = *(_DWORD *)a2;
      KeTimeIncrement = v14;
    }
    else
    {
      ((void (__fastcall *)(_QWORD))off_140C01EE0[0])(0LL);
      v8 = *(_DWORD *)a2;
    }
    CurrentPrcb->ClockTimerState.OneShotState = v7;
    CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = v8;
    CurrentPrcb->ClockTimerState.TimeIncrement = *a3;
    KiLogClockIncrementUpdate((_DWORD)CurrentPrcb, v6, v8, *a3, v7 == 1);
    LOBYTE(v9) = 1;
    return KiSetPendingTick(v9);
  }
  return result;
}
