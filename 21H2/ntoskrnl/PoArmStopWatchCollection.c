/*
 * XREFs of PoArmStopWatchCollection @ 0x140272598
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x140670910 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F67F0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     PopInternalUpdateStopWatchState @ 0x140272464 (PopInternalUpdateStopWatchState.c)
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x140272530 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 */

char __fastcall PoArmStopWatchCollection(__int64 *a1)
{
  char v1; // bl
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 *v4; // r11

  v1 = 0;
  v2 = (__int64)a1;
  if ( !a1[2] )
  {
    v1 = 1;
    v3 = *a1;
    a1[2] = MEMORY[0xFFFFF78000000008];
    while ( v3 != v2 )
    {
      PopInternalUpdateStopWatchState(v3 - 8);
      v3 = *v4;
    }
    PopInternalUpdateActiveStopWatchesCollectionState(v2);
  }
  return v1;
}
