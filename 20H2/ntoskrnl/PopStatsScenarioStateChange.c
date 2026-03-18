/*
 * XREFs of PopStatsScenarioStateChange @ 0x14076E350
 * Callers:
 *     PopWnfAudioCallback @ 0x14076E220 (PopWnfAudioCallback.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E438C (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PoPauseStopWatch @ 0x14036196C (PoPauseStopWatch.c)
 *     PoStartStopWatch @ 0x140361A2C (PoStartStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14071CE98 (PopGetStopWatchByRequestType.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14076E3C0 (PopAvlFindOrMakeStatsForScenarioType.c)
 */

char __fastcall PopStatsScenarioStateChange(__int64 a1, char a2)
{
  __int64 StatsForScenarioType; // rax
  volatile signed __int32 *v4; // rbx
  signed __int32 v5; // ecx

  StatsForScenarioType = PopAvlFindOrMakeStatsForScenarioType();
  v4 = (volatile signed __int32 *)StatsForScenarioType;
  if ( StatsForScenarioType )
  {
    StatsForScenarioType = PopGetStopWatchByRequestType(StatsForScenarioType, 3);
    if ( StatsForScenarioType )
    {
      v5 = _InterlockedExchangeAdd(v4, 0);
      if ( a2 )
      {
        if ( !v5 )
        {
          _InterlockedIncrement(v4);
          LOBYTE(StatsForScenarioType) = PoStartStopWatch(StatsForScenarioType);
        }
      }
      else if ( v5 == 1 )
      {
        _InterlockedDecrement(v4);
        LOBYTE(StatsForScenarioType) = PoPauseStopWatch(StatsForScenarioType);
      }
    }
  }
  return StatsForScenarioType;
}
