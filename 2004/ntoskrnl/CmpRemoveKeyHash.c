/*
 * XREFs of CmpRemoveKeyHash @ 0x14064471C
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1405E6B2C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpRehashKcbSubtree @ 0x14086BDF4 (CmpRehashKcbSubtree.c)
 *     CmpRemoveKeyControlBlock @ 0x14086BEA8 (CmpRemoveKeyControlBlock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x140644774 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1640)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
