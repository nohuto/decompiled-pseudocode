/*
 * XREFs of vGetPosInfo @ 0x1C02BDD90
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C0089C58 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C0089E34 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1C0089EC0 (STROBJ_bEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vGetPosInfo(__int64 a1, int a2, _DWORD *a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = a2 * *(_DWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 232) & 0x100) != 0 )
    v3 *= 16;
  *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 16LL) + v3;
  result = *(_QWORD *)(a1 + 64);
  a3[1] = *(_DWORD *)(result + 20);
  return result;
}
