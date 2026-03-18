/*
 * XREFs of PoArmStopWatchCollection @ 0x140361280
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x14071D020 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x1403614C8 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 *     PopInternalUpdateStopWatchState @ 0x140361590 (PopInternalUpdateStopWatchState.c)
 */

char __fastcall PoArmStopWatchCollection(_QWORD *a1)
{
  char v1; // bl
  _QWORD *v2; // r10
  _QWORD *v3; // r11
  _QWORD *v4; // r11

  v1 = 0;
  v2 = a1;
  if ( !a1[2] )
  {
    v1 = 1;
    v3 = (_QWORD *)*a1;
    a1[2] = MEMORY[0xFFFFF78000000008];
    while ( v3 != v2 )
    {
      PopInternalUpdateStopWatchState(v3 - 1);
      v3 = (_QWORD *)*v4;
    }
    PopInternalUpdateActiveStopWatchesCollectionState(v2);
  }
  return v1;
}
