/*
 * XREFs of PopStatsDeletePowerRequest @ 0x14071DE44
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14062C1F0 (PopLogPowerRequestAction.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14071CB48 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopPausePowerRequestStats @ 0x14071CDE0 (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x14071CE30 (PopIsDataAccruedByPowerRequestStats.c)
 */

void __fastcall PopStatsDeletePowerRequest(__int64 a1)
{
  char *v2; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  PopLogPowerRequestAction("Delete PowerRequest", a1);
  v2 = *(char **)(a1 + 144);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      PopPausePowerRequestStats((__int64)v2);
      if ( !PopIsDataAccruedByPowerRequestStats((__int64)v2) )
        PopAvlDeleteStatsForPowerRequest(v2);
    }
  }
  *(_QWORD *)(a1 + 144) = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
