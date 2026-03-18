/*
 * XREFs of CmpIsWriteQueueActive @ 0x14020AA74
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1406890A0 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x14068A5A8 (HvGetHiveLogFileStatus.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x14090E5E0 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
