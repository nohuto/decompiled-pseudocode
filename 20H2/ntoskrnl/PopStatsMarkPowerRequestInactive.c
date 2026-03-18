/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x14071CBD0
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14072002C (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PoPauseStopWatch @ 0x14036196C (PoPauseStopWatch.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14062C1F0 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x14071CE98 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestInactive(__int64 a1)
{
  __int64 v2; // rcx
  __int64 StopWatchByRequestType; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3LL, 0LL);
    if ( StopWatchByRequestType )
      PoPauseStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Clear", a1);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
