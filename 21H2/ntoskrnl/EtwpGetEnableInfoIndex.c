/*
 * XREFs of EtwpGetEnableInfoIndex @ 0x1402E10FC
 * Callers:
 *     EtwpUpdateGuidEnableInfo @ 0x14078FA54 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140797054 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E448C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409EC340 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5570 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpGetEnableInfoIndex(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9

  *a3 = 0;
  v3 = 0LL;
  while ( *(unsigned __int16 *)(32LL * (unsigned int)v3 + a1 + 134) != a2 || !*(_DWORD *)(32 * (v3 + 4) + a1) )
  {
    v3 = (unsigned int)(v3 + 1);
    *a3 = v3;
    if ( (unsigned int)v3 >= 8 )
      return 0;
  }
  return 1;
}
