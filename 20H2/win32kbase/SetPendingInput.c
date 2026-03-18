/*
 * XREFs of SetPendingInput @ 0x1C0071CA0
 * Callers:
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetPendingInput(int a1)
{
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( !gbPendingSleepInput )
  {
    gPendingSleepInputReason = a1;
    gbPendingSleepInput = 1;
  }
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
}
