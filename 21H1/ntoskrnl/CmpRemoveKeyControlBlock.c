/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x14086AB58
 * Callers:
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x140693954 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 32), (_DWORD *)(a1 + 16));
}
