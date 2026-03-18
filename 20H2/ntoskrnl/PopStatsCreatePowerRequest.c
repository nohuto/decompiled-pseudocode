/*
 * XREFs of PopStatsCreatePowerRequest @ 0x14071D224
 * Callers:
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14062C1F0 (PopLogPowerRequestAction.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14071D27C (PopAvlFindOrMakeStatsForPowerRequest.c)
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
