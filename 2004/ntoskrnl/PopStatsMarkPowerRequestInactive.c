/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x14064E188
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A8670 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PoPauseStopWatch @ 0x1402771E8 (PoPauseStopWatch.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14064D0B0 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x14064DFF8 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestInactive(__int64 a1)
{
  __int64 v2; // rcx
  __int64 StopWatchByRequestType; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3);
    if ( StopWatchByRequestType )
      PoPauseStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Clear", a1);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
