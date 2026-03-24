/*
 * XREFs of CmpIsKcbInsideVirtualStore @ 0x14027EF74
 * Callers:
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualStore(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x2000000) != 0;
}
