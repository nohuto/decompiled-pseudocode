/*
 * XREFs of PoStartStopWatch @ 0x14027137C
 * Callers:
 *     PopStatsMarkPowerRequestActive @ 0x1406709E8 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsScenarioStateChange @ 0x140772670 (PopStatsScenarioStateChange.c)
 * Callees:
 *     PopInternalUpdateStopWatchState @ 0x140272464 (PopInternalUpdateStopWatchState.c)
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x140272530 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 */

__int64 __fastcall PoStartStopWatch(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10
  unsigned int v3; // r11d

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 1u);
  if ( (_DWORD)result == 1 )
  {
    PopInternalUpdateStopWatchState();
    result = v3 + _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v2 + 48LL), v3);
    if ( (_DWORD)result == v3 )
      return PopInternalUpdateActiveStopWatchesCollectionState();
  }
  return result;
}
