/*
 * XREFs of PoUnarmStopWatchCollection @ 0x1402725E8
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x140670910 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F67F0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     PopInternalUpdateStopWatchState @ 0x140272464 (PopInternalUpdateStopWatchState.c)
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x140272530 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 */

char __fastcall PoUnarmStopWatchCollection(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  char v3; // bl
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  __int64 *v6; // r11

  v1 = a1[2];
  v2 = (__int64)a1;
  if ( !v1 )
    return 0;
  v3 = 1;
  v4 = *a1;
  v5 = MEMORY[0xFFFFF78000000008] + a1[3] - v1;
  if ( v5 < a1[3] )
    v5 = -1LL;
  a1[2] = 0LL;
  a1[3] = v5;
  while ( v4 != v2 )
  {
    PopInternalUpdateStopWatchState(v4 - 8);
    v4 = *v6;
  }
  PopInternalUpdateActiveStopWatchesCollectionState(v2);
  return v3;
}
