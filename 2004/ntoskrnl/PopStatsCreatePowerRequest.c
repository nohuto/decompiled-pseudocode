/*
 * XREFs of PopStatsCreatePowerRequest @ 0x14064D9C4
 * Callers:
 *     PopCreatePowerRequestObject @ 0x14064DBA8 (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14064D0B0 (PopLogPowerRequestAction.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14064DA1C (PopAvlFindOrMakeStatsForPowerRequest.c)
 */

void __fastcall PopStatsCreatePowerRequest(__int64 a1)
{
  volatile signed __int32 *StatsForPowerRequest; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  StatsForPowerRequest = (volatile signed __int32 *)PopAvlFindOrMakeStatsForPowerRequest(a1);
  if ( StatsForPowerRequest )
    _InterlockedIncrement(StatsForPowerRequest);
  *(_QWORD *)(a1 + 144) = StatsForPowerRequest;
  PopLogPowerRequestAction("Create PowerRequest", a1);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
