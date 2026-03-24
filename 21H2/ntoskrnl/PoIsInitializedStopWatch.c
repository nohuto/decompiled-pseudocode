/*
 * XREFs of PoIsInitializedStopWatch @ 0x140263FA8
 * Callers:
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     PopGetStopWatchByRequestType @ 0x14062BEE8 (PopGetStopWatchByRequestType.c)
 *     CmpGenerateFlushControlData @ 0x140724134 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x140724678 (HvGetHiveLogFileStatus.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EBD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x1408682E0 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
