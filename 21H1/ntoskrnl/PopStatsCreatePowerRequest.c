/*
 * XREFs of PopStatsCreatePowerRequest @ 0x1406FFA94
 * Callers:
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x1407003C8 (PopLogPowerRequestAction.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1407007B8 (PopAvlFindOrMakeStatsForPowerRequest.c)
 */

void __fastcall PopStatsCreatePowerRequest(__int64 a1)
{
  volatile signed __int32 *StatsForPowerRequest; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  StatsForPowerRequest = (volatile signed __int32 *)PopAvlFindOrMakeStatsForPowerRequest(a1);
  if ( StatsForPowerRequest )
    _InterlockedIncrement(StatsForPowerRequest);
  *(_QWORD *)(a1 + 144) = StatsForPowerRequest;
  PopLogPowerRequestAction("Create PowerRequest", a1, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
