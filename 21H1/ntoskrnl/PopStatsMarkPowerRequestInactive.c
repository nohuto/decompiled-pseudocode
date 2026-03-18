/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x1406FF6C0
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14070099C (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PoPauseStopWatch @ 0x14033DB9C (PoPauseStopWatch.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x1407003C8 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x140700BA4 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestInactive(__int64 a1)
{
  __int64 v2; // rcx
  __int64 StopWatchByRequestType; // rax
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 3;
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3LL, 0LL);
    if ( StopWatchByRequestType )
      PoPauseStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Clear", a1, v4);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
