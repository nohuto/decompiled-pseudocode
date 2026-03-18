/*
 * XREFs of ?bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z @ 0x240DE1
 * Callers:
 *     _FONTOBJ_cGetGlyphs@20 @ 0x1F3507 (_FONTOBJ_cGetGlyphs@20.c)
 *     ?cGetGlyphDataLookaside@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x241297 (-cGetGlyphDataLookaside@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF86B2 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHB.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z @ 0x24114B (-bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z.c)
 */

int __thiscall RFONTOBJ::bInsertGlyphbitsLookaside(RFONTOBJ *this, struct _GLYPHPOS *a2, unsigned int a3)
{
  int v5; // ecx
  int v6; // esi
  LONG x; // eax
  size_t v8; // ebx
  int v9; // eax
  struct _GLYPHDATA *v10; // edi
  int v11; // eax
  unsigned int v12; // [esp-Ch] [ebp-2Ch]
  struct _GLYPHDATA *v13; // [esp+10h] [ebp-10h] BYREF
  struct _GLYPHBITS *v14; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v15[2]; // [esp+18h] [ebp-8h] BYREF

  if ( a3 == 2 )
    return RFONTOBJ::bInsertPathLookaside(this, a2);
  v5 = *(_DWORD *)this;
  v6 = 0;
  v15[0] = *(_DWORD *)(*(_DWORD *)this + 84);
  if ( *(_DWORD *)(v15[0] + 60) == dword_2785B8 )
  {
    *(_DWORD *)(v5 + 644) = 0;
    v11 = *(_DWORD *)this;
    v13 = 0;
    v12 = *(_DWORD *)(v5 + 636);
    v14 = 0;
    if ( PFFOBJ::QueryGlyphMetricsPlusBits(
           (PFFOBJ *)v15,
           *(struct DHPDEV__ **)(v11 + 76),
           (struct _FONTOBJ *)v11,
           a2->hg,
           v12,
           &v13,
           &v14) == -1 )
      return v6;
    v13->gdf.pgb = v14;
    a2->pgdf = &v13->gdf;
    return 1;
  }
  v14 = (struct _GLYPHBITS *)(v5 + 632);
  x = *(_DWORD *)(v5 + 632);
  v8 = x + 64;
  if ( (unsigned int)(x + 64) >= 0x50 )
  {
    if ( *(_DWORD *)(v5 + 628) < v8 )
    {
      if ( *(_DWORD *)(v5 + 624) )
        Win32FreePool(*(PATHOBJ **)(v5 + 624));
      *(_DWORD *)(*(_DWORD *)this + 624) = PALLOCMEM2(v8, 1667326791, 1);
      v9 = *(_DWORD *)this;
      if ( !*(_DWORD *)(*(_DWORD *)this + 624) )
      {
        *(_DWORD *)(v9 + 628) = 0;
        return v6;
      }
      *(_DWORD *)(v9 + 628) = v8;
      v5 = *(_DWORD *)this;
      x = v14->ptlOrigin.x;
    }
    v10 = *(struct _GLYPHDATA **)(v5 + 624);
    if ( PFFOBJ::QueryFontData(
           (PFFOBJ *)v15,
           *(struct DHPDEV__ **)(v5 + 76),
           (struct _FONTOBJ *)v5,
           1u,
           a2->hg,
           v10,
           &v10[1],
           x) == -1 )
      return v6;
    a2->pgdf = &v10->gdf;
    v10->gdf.pgb = (GLYPHBITS *)&v10[1];
    return 1;
  }
  return v6;
}
