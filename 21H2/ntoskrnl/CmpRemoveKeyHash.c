/*
 * XREFs of CmpRemoveKeyHash @ 0x1406616C0
 * Callers:
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRehashKcbSubtree @ 0x14086F1E4 (CmpRehashKcbSubtree.c)
 *     CmpRemoveKeyControlBlock @ 0x14086F298 (CmpRemoveKeyControlBlock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x140661718 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1640)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
