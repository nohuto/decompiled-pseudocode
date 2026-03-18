/*
 * XREFs of PopGetStopWatchByRequestType @ 0x140700BA4
 * Callers:
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406FF4A0 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopStatsMarkPowerRequestInactive @ 0x1406FF6C0 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsMarkPowerRequestActive @ 0x1406FF820 (PopStatsMarkPowerRequestActive.c)
 *     PopPausePowerRequestStats @ 0x140700AEC (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x140700B3C (PopIsDataAccruedByPowerRequestStats.c)
 *     PopStatsScenarioStateChange @ 0x14075D9D0 (PopStatsScenarioStateChange.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F1D3C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x1402D5F84 (PoIsInitializedStopWatch.c)
 *     PoInitializeStopWatch @ 0x14033EB68 (PoInitializeStopWatch.c)
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
