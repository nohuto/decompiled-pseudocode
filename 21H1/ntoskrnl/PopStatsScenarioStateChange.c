/*
 * XREFs of PopStatsScenarioStateChange @ 0x14075D9D0
 * Callers:
 *     PopWnfAudioCallback @ 0x14075D8A0 (PopWnfAudioCallback.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408DD23C (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PoStartStopWatch @ 0x14033DAD0 (PoStartStopWatch.c)
 *     PoPauseStopWatch @ 0x14033DB9C (PoPauseStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x140700BA4 (PopGetStopWatchByRequestType.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075DA40 (PopAvlFindOrMakeStatsForScenarioType.c)
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
