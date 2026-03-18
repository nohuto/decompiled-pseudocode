/*
 * XREFs of PopGetStopWatchByRequestType @ 0x14071CE98
 * Callers:
 *     PopAvlDeleteStatsForPowerRequest @ 0x14071CB48 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopStatsMarkPowerRequestInactive @ 0x14071CBD0 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsMarkPowerRequestActive @ 0x14071CD70 (PopStatsMarkPowerRequestActive.c)
 *     PopPausePowerRequestStats @ 0x14071CDE0 (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x14071CE30 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopStatsScenarioStateChange @ 0x14076E350 (PopStatsScenarioStateChange.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F8C3C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x140244CA8 (PoIsInitializedStopWatch.c)
 *     PoInitializeStopWatch @ 0x1403311A0 (PoInitializeStopWatch.c)
 */

__int64 __fastcall PopGetStopWatchByRequestType(__int64 a1, int a2)
{
  __int128 *v2; // r10
  __int64 v3; // r9
  _OWORD *v5; // rcx
  char v6; // r8
  __int64 *v7; // r10
  __int64 v8; // r11

  v2 = &ExecutionRequiredStopWatchCollection;
  v3 = 0LL;
  if ( a2 != 3 )
    v2 = 0LL;
  if ( v2 && !PoIsInitializedStopWatch((_QWORD *)(48LL * a2 + a1 + 24)) )
  {
    if ( v6 )
      PoInitializeStopWatch(v5, v7);
    else
      return v8;
  }
  return v3;
}
