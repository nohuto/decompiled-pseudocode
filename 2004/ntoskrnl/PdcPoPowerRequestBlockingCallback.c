/*
 * XREFs of PdcPoPowerRequestBlockingCallback @ 0x14064DD30
 * Callers:
 *     <none>
 * Callees:
 *     PoArmStopWatchCollection @ 0x1402782A8 (PoArmStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x1402782F8 (PoUnarmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x140278368 (PoIsArmedStopWatchCollection.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14064D0B0 (PopLogPowerRequestAction.c)
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
