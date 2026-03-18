/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x14086BEA8
 * Callers:
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x14064471C (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 32), (_DWORD *)(a1 + 16));
}
