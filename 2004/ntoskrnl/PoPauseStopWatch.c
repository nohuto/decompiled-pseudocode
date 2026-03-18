/*
 * XREFs of PoPauseStopWatch @ 0x1402771E8
 * Callers:
 *     PopPausePowerRequestStats @ 0x14064DF40 (PopPausePowerRequestStats.c)
 *     PopStatsMarkPowerRequestInactive @ 0x14064E188 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsScenarioStateChange @ 0x14075FCE0 (PopStatsScenarioStateChange.c)
 * Callees:
 *     PopInternalUpdateStopWatchState @ 0x140278174 (PopInternalUpdateStopWatchState.c)
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x140278240 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 */

__int64 __fastcall PoPauseStopWatch(__int64 a1)
{
  signed __int32 v1; // eax
  bool v2; // zf
  __int64 result; // rax
  __int64 v4; // r10
  unsigned int v5; // r11d

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF);
  v2 = v1 == 1;
  result = (unsigned int)(v1 - 1);
  if ( v2 )
  {
    PopInternalUpdateStopWatchState();
    result = v5 + _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v4 + 48LL), v5);
    if ( !(_DWORD)result )
      return PopInternalUpdateActiveStopWatchesCollectionState();
  }
  return result;
}
