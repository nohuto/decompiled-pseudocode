/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x1403807F8
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPowerActionWatchdog @ 0x14056A150 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140763180 (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  if ( a1 <= 2 )
  {
    if ( a1 == 1 )
      PopUpdatePowerActionWatchdogTimeouts();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F58);
    if ( dword_140C22FE4 != a1 )
    {
      if ( dword_140C22FE4 )
      {
        if ( !KeCancelTimer(&stru_140C22FA0) )
          PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
        qword_140C22FE8 = 0LL;
        dword_140C22FE4 = 0;
      }
      if ( a1 )
      {
        v3 = a1 == 1 ? PopPowerActionTransitioningWatchdogTimeout : PopPowerActionResumingWatchdogTimeout;
        if ( v3 )
        {
          qword_140C22FE8 = MEMORY[0xFFFFF78000000008];
          dword_140C22FE4 = a1;
          KiSetTimerEx((__int64)&stru_140C22FA0, -10000000LL * v3, 0, 0, (__int64)&dword_140C22F60);
        }
      }
    }
    KxReleaseSpinLock(&qword_140C22F58);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
