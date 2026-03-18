/*
 * XREFs of PoIsInitializedStopWatch @ 0x140244CA8
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1405DC3D0 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x1405DC914 (HvGetHiveLogFileStatus.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     PopGetStopWatchByRequestType @ 0x14071CE98 (PopGetStopWatchByRequestType.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407946B4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x14086A6C0 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
