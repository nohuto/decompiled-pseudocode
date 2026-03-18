/*
 * XREFs of ?AdvanceGlyphCacheBuffer@RFONTOBJ@@QAEXPAU_GLYPHDATA@@PAU_GLYPHBITS@@K@Z @ 0xF86FE
 * Callers:
 *     _FONTOBJ_AdvanceGlyphCacheBuffer@16 @ 0xF833A (_FONTOBJ_AdvanceGlyphCacheBuffer@16.c)
 * Callees:
 *     <none>
 */

void __thiscall RFONTOBJ::AdvanceGlyphCacheBuffer(
        RFONTOBJ *this,
        struct _GLYPHDATA *a2,
        struct _GLYPHBITS *a3,
        unsigned int a4)
{
  int v4; // ecx
  struct _GLYPHDATA *v5; // eax
  FIX *p_fxInkTop; // eax

  v4 = *(_DWORD *)this;
  if ( (*(_BYTE *)(v4 + 644) & 4) != 0 )
  {
    v5 = *(struct _GLYPHDATA **)(v4 + 552);
    if ( a2 == v5 )
    {
      if ( *(_DWORD *)(v4 + 640) )
        p_fxInkTop = &v5->fxInkTop;
      else
        p_fxInkTop = (FIX *)&v5[1];
      *(_DWORD *)(v4 + 552) = p_fxInkTop;
    }
    if ( a3 )
      *(_DWORD *)(v4 + 600) += a4;
  }
}
