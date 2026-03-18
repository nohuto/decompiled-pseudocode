/*
 * XREFs of PdcPoPowerRequestBlockingCallback @ 0x1406FF890
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PoArmStopWatchCollection @ 0x14033EA98 (PoArmStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x14033EAE8 (PoUnarmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x14033EB58 (PoIsArmedStopWatchCollection.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x1407003C8 (PopLogPowerRequestAction.c)
 */

void __fastcall PdcPoPowerRequestBlockingCallback(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  if ( a1 )
  {
    PopLogPowerRequestAction("Power Request Blocking Started", 0LL, 0LL);
    PoArmStopWatchCollection((__int64 *)&ExecutionRequiredStopWatchCollection);
  }
  else if ( PoIsArmedStopWatchCollection((__int64)&ExecutionRequiredStopWatchCollection) )
  {
    PopLogPowerRequestAction("Power Request Blocking Ended", 0LL, 0LL);
    PoUnarmStopWatchCollection((__int64 *)&ExecutionRequiredStopWatchCollection);
  }
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
