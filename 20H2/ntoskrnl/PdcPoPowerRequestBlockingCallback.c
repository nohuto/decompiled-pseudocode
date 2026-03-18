/*
 * XREFs of PdcPoPowerRequestBlockingCallback @ 0x14071D020
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PoIsArmedStopWatchCollection @ 0x140361200 (PoIsArmedStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x140361210 (PoUnarmStopWatchCollection.c)
 *     PoArmStopWatchCollection @ 0x140361280 (PoArmStopWatchCollection.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14062C1F0 (PopLogPowerRequestAction.c)
 */

void __fastcall PdcPoPowerRequestBlockingCallback(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  if ( a1 )
  {
    PopLogPowerRequestAction("Power Request Blocking Started", 0LL);
    PoArmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  else if ( PoIsArmedStopWatchCollection((__int64)&ExecutionRequiredStopWatchCollection) )
  {
    PopLogPowerRequestAction("Power Request Blocking Ended", 0LL);
    PoUnarmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
