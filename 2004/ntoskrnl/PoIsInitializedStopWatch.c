/*
 * XREFs of PoIsInitializedStopWatch @ 0x14026C5E4
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x140639278 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x1406397BC (HvGetHiveLogFileStatus.c)
 *     PopGetStopWatchByRequestType @ 0x14064DFF8 (PopGetStopWatchByRequestType.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407869A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140864CA0 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
