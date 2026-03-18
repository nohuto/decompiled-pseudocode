/*
 * XREFs of PopStatsDeletePowerRequest @ 0x140700340
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406FF4A0 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopLogPowerRequestAction @ 0x1407003C8 (PopLogPowerRequestAction.c)
 *     PopPausePowerRequestStats @ 0x140700AEC (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x140700B3C (PopIsDataAccruedByPowerRequestStats.c)
 */

void __fastcall PopStatsDeletePowerRequest(__int64 a1)
{
  char *v2; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  PopLogPowerRequestAction("Delete PowerRequest", a1, 0LL);
  v2 = *(char **)(a1 + 144);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      PopPausePowerRequestStats(v2);
      if ( !(unsigned __int8)PopIsDataAccruedByPowerRequestStats(v2) )
        PopAvlDeleteStatsForPowerRequest(v2);
    }
  }
  *(_QWORD *)(a1 + 144) = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
