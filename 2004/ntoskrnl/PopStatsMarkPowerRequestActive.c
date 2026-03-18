/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x14064DED0
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A8670 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PoStartStopWatch @ 0x14027711C (PoStartStopWatch.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14064D0B0 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x14064DFF8 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestActive(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 StopWatchByRequestType; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    LOBYTE(v2) = 1;
    StopWatchByRequestType = PopGetStopWatchByRequestType(v3, 3LL, v2);
    if ( StopWatchByRequestType )
      PoStartStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Set", a1);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
