/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x1403825B8
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPowerActionWatchdog @ 0x14056DB80 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140771790 (PopUpdatePowerActionWatchdogTimeouts.c)
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
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C23418);
    if ( dword_140C234A4 != a1 )
    {
      if ( dword_140C234A4 )
      {
        if ( !KeCancelTimer(&stru_140C23460) )
          PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
        qword_140C234A8 = 0LL;
        dword_140C234A4 = 0;
      }
      if ( a1 )
      {
        v3 = a1 == 1 ? PopPowerActionTransitioningWatchdogTimeout : PopPowerActionResumingWatchdogTimeout;
        if ( v3 )
        {
          qword_140C234A8 = MEMORY[0xFFFFF78000000008];
          dword_140C234A4 = a1;
          KiSetTimerEx((__int64)&stru_140C23460, -10000000LL * v3, 0, 0, (__int64)&dword_140C23420);
        }
      }
    }
    KxReleaseSpinLock(&qword_140C23418);
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
