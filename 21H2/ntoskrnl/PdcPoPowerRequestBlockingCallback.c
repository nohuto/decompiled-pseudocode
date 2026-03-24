/*
 * XREFs of PdcPoPowerRequestBlockingCallback @ 0x14062BD40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PoUnarmStopWatchCollection @ 0x1402D16C4 (PoUnarmStopWatchCollection.c)
 *     PoArmStopWatchCollection @ 0x1402D1D08 (PoArmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x1402D332C (PoIsArmedStopWatchCollection.c)
 *     PopLogPowerRequestAction @ 0x14062B588 (PopLogPowerRequestAction.c)
 */

void __fastcall PdcPoPowerRequestBlockingCallback(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  if ( a1 )
  {
    PopLogPowerRequestAction("Power Request Blocking Started", 0LL);
    PoArmStopWatchCollection((__int64 *)&ExecutionRequiredStopWatchCollection);
  }
  else if ( PoIsArmedStopWatchCollection((__int64)&ExecutionRequiredStopWatchCollection) )
  {
    PopLogPowerRequestAction("Power Request Blocking Ended", 0LL);
    PoUnarmStopWatchCollection((__int64 *)&ExecutionRequiredStopWatchCollection);
  }
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
