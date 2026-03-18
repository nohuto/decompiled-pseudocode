/*
 * XREFs of ?vFlushCache@RFONTOBJ@@QAEXXZ @ 0x2412BE
 * Callers:
 *     _xInsertGlyphbitsRFONTOBJ@12 @ 0x861E0 (_xInsertGlyphbitsRFONTOBJ@12.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z @ 0xF8744 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x240F0D (-bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall RFONTOBJ::vFlushCache(RFONTOBJ *this)
{
  int v1; // esi
  _DWORD *v2; // edx
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *i; // eax
  _DWORD *v7; // edi
  _DWORD *j; // esi

  v1 = *(_DWORD *)this;
  v2 = (_DWORD *)(*(_DWORD *)this + 552);
  v3 = *(_DWORD *)(*(_DWORD *)this + 592);
  if ( v3 && *(_DWORD *)(*(_DWORD *)this + 584) == *(_DWORD *)(*(_DWORD *)this + 580) )
  {
    *(_DWORD *)(*(_DWORD *)this + 596) = v3;
    v2[12] = v3 + 4;
    v2[13] = v3 + v2[5] - 8;
    v1 = *(_DWORD *)this;
  }
  v4 = *(_DWORD **)(*(_DWORD *)(v1 + 536) + 4);
  v5 = *(_DWORD *)(v1 + 640) != 0 ? 20 : 64;
  if ( v4 )
    *v4 = 0;
  for ( i = (_DWORD *)v2[3]; i; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)v2[3] )
    {
      v7 = (_DWORD *)*v2;
    }
    else if ( *i )
    {
      v7 = i + 380;
    }
    else
    {
      v7 = (_DWORD *)v2[2];
    }
    for ( j = i + 2; j < v7; j = (_DWORD *)((char *)j + v5) )
      *j = 0;
  }
}
