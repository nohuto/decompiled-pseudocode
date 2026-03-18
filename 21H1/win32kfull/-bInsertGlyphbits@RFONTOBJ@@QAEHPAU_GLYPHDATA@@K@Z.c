/*
 * XREFs of ?bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x861B6
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z @ 0x65900 (-vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?cGetGlyphDataCache@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x24123B (-cGetGlyphDataCache@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     _xInsertGlyphbitsRFONTOBJ@12 @ 0x861E0 (_xInsertGlyphbitsRFONTOBJ@12.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 */

int __thiscall RFONTOBJ::bInsertGlyphbits(RFONTOBJ *this, struct _GLYPHDATA *a2, unsigned int a3)
{
  int result; // eax

  if ( *(_DWORD *)(*(_DWORD *)this + 536) )
    return xInsertGlyphbitsRFONTOBJ(this, a2, a3);
  result = RFONTOBJ::bAllocateCache(this, this);
  if ( result )
    return xInsertGlyphbitsRFONTOBJ(this, a2, a3);
  return result;
}
