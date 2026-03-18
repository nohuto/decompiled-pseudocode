/*
 * XREFs of ?AreMarginsEqual@@YG_NABUFRAME_MARGIN@@0@Z @ 0x259BC
 * Callers:
 *     _SetWindowExtendedBoundsMargin@8 @ 0x258E8 (_SetWindowExtendedBoundsMargin@8.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreMarginsEqual(_WORD *a1, _WORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
