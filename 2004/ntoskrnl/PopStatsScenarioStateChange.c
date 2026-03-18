/*
 * XREFs of PopStatsScenarioStateChange @ 0x14075FCE0
 * Callers:
 *     PopWnfAudioCallback @ 0x14075FBB0 (PopWnfAudioCallback.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408DE54C (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PoStartStopWatch @ 0x14027711C (PoStartStopWatch.c)
 *     PoPauseStopWatch @ 0x1402771E8 (PoPauseStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14064DFF8 (PopGetStopWatchByRequestType.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075FD50 (PopAvlFindOrMakeStatsForScenarioType.c)
 */

__int64 __fastcall PopStatsScenarioStateChange(__int64 a1, char a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  signed __int32 v5; // ecx

  result = PopAvlFindOrMakeStatsForScenarioType();
  v4 = (volatile signed __int32 *)result;
  if ( result )
  {
    result = PopGetStopWatchByRequestType(result, 3);
    if ( result )
    {
      v5 = _InterlockedExchangeAdd(v4, 0);
      if ( a2 )
      {
        if ( !v5 )
        {
          _InterlockedIncrement(v4);
          return PoStartStopWatch(result);
        }
      }
      else if ( v5 == 1 )
      {
        _InterlockedDecrement(v4);
        return PoPauseStopWatch(result);
      }
    }
  }
  return result;
}
