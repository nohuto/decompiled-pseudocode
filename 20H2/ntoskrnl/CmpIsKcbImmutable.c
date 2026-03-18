/*
 * XREFs of CmpIsKcbImmutable @ 0x14066FC50
 * Callers:
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbImmutable(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 160LL) & 0x100000) != 0;
}
