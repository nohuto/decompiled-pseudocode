/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x140871930
 * Callers:
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x140701994 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 32), (_DWORD *)(a1 + 16));
}
