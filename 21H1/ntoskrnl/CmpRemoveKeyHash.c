/*
 * XREFs of CmpRemoveKeyHash @ 0x140693954
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x14061C14C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 *     CmpRehashKcbSubtree @ 0x14086AAA4 (CmpRehashKcbSubtree.c)
 *     CmpRemoveKeyControlBlock @ 0x14086AB58 (CmpRemoveKeyControlBlock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1406939AC (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1640)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
