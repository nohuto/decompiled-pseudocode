/*
 * XREFs of PoIsInitializedStopWatch @ 0x1402713C8
 * Callers:
 *     PopGetStopWatchByRequestType @ 0x140670B10 (PopGetStopWatchByRequestType.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1406FC160 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x1406FC6A4 (HvGetHiveLogFileStatus.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140868440 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
