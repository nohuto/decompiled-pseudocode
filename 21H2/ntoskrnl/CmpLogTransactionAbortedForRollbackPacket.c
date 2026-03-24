/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x1406C3144
 * Callers:
 *     CmpTryToRundownHive @ 0x140361574 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DC78 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E13C (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406C25F4 (CmpLogTransactionAbortedWithChildName.c)
 */

void __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  CmpLogTransactionAbortedWithChildName(a1, 0LL, a2, a4, *a3);
}
