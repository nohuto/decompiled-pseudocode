/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x14071CD70
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14072002C (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PoStartStopWatch @ 0x140361A2C (PoStartStopWatch.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14062C1F0 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x14071CE98 (PopGetStopWatchByRequestType.c)
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
