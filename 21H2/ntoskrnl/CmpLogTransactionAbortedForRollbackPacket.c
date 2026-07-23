/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x1405E119C
 * Callers:
 *     CmpTryToRundownHive @ 0x140213B70 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406212B4 (CmpLogTransactionAbortedWithChildName.c)
 */

__int64 __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2)
{
  return CmpLogTransactionAbortedWithChildName(a1, 0LL, a2);
}
