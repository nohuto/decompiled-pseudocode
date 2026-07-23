/*
 * XREFs of PdcPoPowerRequestBlockingCallback @ 0x140670910
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PoArmStopWatchCollection @ 0x140272598 (PoArmStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x1402725E8 (PoUnarmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x140272658 (PoIsArmedStopWatchCollection.c)
 *     PopLogPowerRequestAction @ 0x14066FB30 (PopLogPowerRequestAction.c)
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
