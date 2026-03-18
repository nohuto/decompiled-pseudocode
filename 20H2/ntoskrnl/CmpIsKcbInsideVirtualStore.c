/*
 * XREFs of CmpIsKcbInsideVirtualStore @ 0x140342A9C
 * Callers:
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualStore(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x2000000) != 0;
}
