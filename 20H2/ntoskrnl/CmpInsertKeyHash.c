/*
 * XREFs of CmpInsertKeyHash @ 0x140871824
 * Callers:
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x14087187C (CmpRehashKcbSubtree.c)
 * Callees:
 *     CmpAddKeyHashToEntry @ 0x140701BB4 (CmpAddKeyHashToEntry.c)
 */

__int64 __fastcall CmpInsertKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpAddKeyHashToEntry(
           (__int64)a2,
           *(_QWORD *)(a1 + 1640)
         + 24LL
         * ((*(_DWORD *)(a1 + 1648) - 1) & ((101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))),
           0);
}
