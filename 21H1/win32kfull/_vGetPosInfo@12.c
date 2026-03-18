/*
 * XREFs of _vGetPosInfo@12 @ 0x225781
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z @ 0x223AE6 (-STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z.c)
 *     ?bGlyphOutOfBounds@@YGHPAVESTROBJ@@PAU_GLYPHPOS@@PAU_RECTL@@K@Z @ 0x22411C (-bGlyphOutOfBounds@@YGHPAVESTROBJ@@PAU_GLYPHPOS@@PAU_RECTL@@K@Z.c)
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
 * Callees:
 *     <none>
 */

int __fastcall vGetPosInfo(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int result; // eax

  v3 = a2 * a1[2];
  if ( (a1[48] & 0x100) != 0 )
    v3 *= 16;
  *a3 = v3 + *(_DWORD *)(a1[12] + 8);
  result = *(_DWORD *)(a1[12] + 12);
  a3[1] = result;
  return result;
}
