/*
 * XREFs of KeQueryDpcWatchdogInformation @ 0x1402941D0
 * Callers:
 *     HalpCmcPollProcessor @ 0x1403A0B10 (HalpCmcPollProcessor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeQueryDpcWatchdogInformation(PKDPC_WATCHDOG_INFORMATION WatchdogInformation)
{
  struct _KPRCB *CurrentPrcb; // rax
  ULONG DpcTimeLimit; // ecx
  ULONG DpcWatchdogPeriod; // ecx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( KeGetCurrentIrql() < 2u )
    return -1073741823;
  *(_OWORD *)&WatchdogInformation->DpcTimeLimit = 0LL;
  WatchdogInformation->Reserved = 0;
  DpcTimeLimit = CurrentPrcb->DpcTimeLimit;
  if ( DpcTimeLimit )
  {
    WatchdogInformation->DpcTimeLimit = DpcTimeLimit;
    WatchdogInformation->DpcTimeCount = DpcTimeLimit - CurrentPrcb->DpcTimeCount;
  }
  DpcWatchdogPeriod = CurrentPrcb->DpcWatchdogPeriod;
  if ( DpcWatchdogPeriod )
  {
    WatchdogInformation->DpcWatchdogLimit = DpcWatchdogPeriod;
    WatchdogInformation->DpcWatchdogCount = DpcWatchdogPeriod - CurrentPrcb->DpcWatchdogCount;
  }
  return 0;
}
