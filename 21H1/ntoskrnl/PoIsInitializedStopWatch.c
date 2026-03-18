/*
 * XREFs of PoIsInitializedStopWatch @ 0x1402D5F84
 * Callers:
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x140686DF4 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x140687338 (HvGetHiveLogFileStatus.c)
 *     PopGetStopWatchByRequestType @ 0x140700BA4 (PopGetStopWatchByRequestType.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140781318 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140863980 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
