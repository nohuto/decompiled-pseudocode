/*
 * XREFs of PoUnarmStopWatchCollection @ 0x140361210
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x14071D020 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x1403614C8 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 *     PopInternalUpdateStopWatchState @ 0x140361590 (PopInternalUpdateStopWatchState.c)
 */

char __fastcall PoUnarmStopWatchCollection(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // r10
  char v3; // bl
  _QWORD *v4; // r11
  unsigned __int64 v5; // rdx
  _QWORD *v6; // r11

  v1 = a1[2];
  v2 = a1;
  if ( !v1 )
    return 0;
  v3 = 1;
  v4 = (_QWORD *)*a1;
  v5 = MEMORY[0xFFFFF78000000008] + a1[3] - v1;
  if ( v5 < a1[3] )
    v5 = -1LL;
  a1[2] = 0LL;
  a1[3] = v5;
  while ( v4 != v2 )
  {
    PopInternalUpdateStopWatchState(v4 - 1);
    v4 = (_QWORD *)*v6;
  }
  PopInternalUpdateActiveStopWatchesCollectionState(v2);
  return v3;
}
