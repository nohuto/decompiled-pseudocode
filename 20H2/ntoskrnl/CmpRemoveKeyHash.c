/*
 * XREFs of CmpRemoveKeyHash @ 0x140701994
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x140672204 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 *     CmpRehashKcbSubtree @ 0x14087187C (CmpRehashKcbSubtree.c)
 *     CmpRemoveKeyControlBlock @ 0x140871930 (CmpRemoveKeyControlBlock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1407019EC (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1640)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
