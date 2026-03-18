/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x14065320C
 * Callers:
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x14070FBA0 (CmpLogTransactionAbortedWithChildName.c)
 */

__int64 __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2)
{
  return CmpLogTransactionAbortedWithChildName(a1, 0LL, a2);
}
