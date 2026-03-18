/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x1409154C4
 * Callers:
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x14067EAE0 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 32), (_DWORD *)(a1 + 16));
}
