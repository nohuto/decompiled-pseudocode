/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x1406FF820
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14070099C (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PoStartStopWatch @ 0x14033DAD0 (PoStartStopWatch.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x1407003C8 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x140700BA4 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestActive(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 StopWatchByRequestType; // rax
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 3;
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    LOBYTE(v2) = 1;
    StopWatchByRequestType = PopGetStopWatchByRequestType(v3, 3LL, v2);
    if ( StopWatchByRequestType )
      PoStartStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Set", a1, v5);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
