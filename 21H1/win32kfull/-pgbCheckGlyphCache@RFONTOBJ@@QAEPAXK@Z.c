/*
 * XREFs of ?pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z @ 0xA8B2A
 * Callers:
 *     _xInsertGlyphbitsRFONTOBJ@12 @ 0x861E0 (_xInsertGlyphbitsRFONTOBJ@12.c)
 *     _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A (_xInsertMetricsPlusRFONTOBJ@12.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z @ 0xF8744 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x240F0D (-bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x240FBD (-bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

unsigned int __thiscall RFONTOBJ::pgbCheckGlyphCache(RFONTOBJ *this, unsigned int a2)
{
  int v2; // esi
  unsigned int v3; // edx
  int *v5; // ecx
  unsigned int v6; // eax
  size_t v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)this + 600);
  if ( v3 + a2 >= v3 )
  {
    if ( v3 + a2 <= *(_DWORD *)(v2 + 604) )
      return v3;
    v5 = *(int **)(v2 + 596);
    if ( v5 && (v11 = *v5) != 0 )
    {
      v3 = v11 + 4;
      v12 = *(_DWORD *)(v2 + 576) - 8;
      *(_DWORD *)(v2 + 596) = v11;
      v13 = v12 + v11;
      *(_DWORD *)(v2 + 600) = v3;
      *(_DWORD *)(v2 + 604) = v13;
      if ( v3 + a2 <= v13 )
        return v3;
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 584);
      if ( v6 )
        v7 = *(_DWORD *)(v2 + 576);
      else
        v7 = *(_DWORD *)(v2 + 572);
      if ( (*(_BYTE *)(v2 + 56) & 1) == 0 && v6 < *(_DWORD *)(v2 + 580) && a2 + 4 <= v7 )
      {
        v8 = PALLOCMEM2(v7, 543319879, 0);
        if ( v8 )
        {
          ++*(_DWORD *)(v2 + 584);
          v9 = *(_DWORD **)(v2 + 596);
          if ( v9 )
            *v9 = v8;
          else
            *(_DWORD *)(v2 + 592) = v8;
          *(_DWORD *)(v2 + 596) = v8;
          *v8 = 0;
          v10 = *(_DWORD *)(v2 + 596);
          v3 = v10 + 4;
          *(_DWORD *)(v2 + 600) = v10 + 4;
          *(_DWORD *)(v2 + 604) = v7 + v10 - 8;
          return v3;
        }
        EngSetLastError(8u);
      }
    }
  }
  return 0;
}
