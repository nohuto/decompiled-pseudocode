/*
 * XREFs of CmpIsKcbInsideVirtualStore @ 0x14026CF14
 * Callers:
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualStore(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x2000000) != 0;
}
