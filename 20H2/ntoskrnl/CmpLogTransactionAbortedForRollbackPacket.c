/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x1406A3E1C
 * Callers:
 *     CmpTryToRundownHive @ 0x1402F2E7C (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E23E4 (CmpLogTransactionAbortedWithChildName.c)
 */

__int64 __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2)
{
  return CmpLogTransactionAbortedWithChildName(a1, 0LL, a2);
}
