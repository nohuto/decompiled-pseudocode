/*
 * XREFs of _xInsertGlyphbitsRFONTOBJ@12 @ 0x861E0
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x861B6 (-bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z @ 0xA8B2A (-pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF86B2 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHB.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x240F0D (-bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QAEXXZ @ 0x2412BE (-vFlushCache@RFONTOBJ@@QAEXXZ.c)
 */

int __fastcall xInsertGlyphbitsRFONTOBJ(RFONTOBJ *a1, struct _GLYPHDATA *a2, unsigned int a3)
{
  int v3; // esi
  int v5; // eax
  int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // eax
  struct _GLYPHBITS *v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  struct _GLYPHBITS *v13; // [esp+Ch] [ebp-5Ch] BYREF
  RFONTOBJ *v14; // [esp+10h] [ebp-58h]
  unsigned int v15; // [esp+14h] [ebp-54h]
  _DWORD v16[2]; // [esp+18h] [ebp-50h] BYREF
  struct _GLYPHDATA v17; // [esp+20h] [ebp-48h] BYREF

  v3 = *(_DWORD *)a1;
  v14 = a1;
  if ( (*(_BYTE *)(v3 + 56) & 1) == 0 )
  {
    v5 = *(_DWORD *)(v3 + 60);
    if ( v5 )
    {
      if ( v5 == 2 )
        return RFONTOBJ::bInsertGlyphbitsPath(a1, a2, a3);
      v7 = 0;
      v16[0] = *(_DWORD *)(v3 + 84);
      if ( *(_DWORD *)(v16[0] + 60) == dword_2785B8 )
      {
        v13 = 0;
        *(_DWORD *)(v3 + 644) = a3 & 1 | 4;
        if ( PFFOBJ::QueryGlyphMetricsPlusBits(
               (PFFOBJ *)v16,
               *(struct DHPDEV__ **)(*(_DWORD *)a1 + 76),
               *(struct _FONTOBJ **)a1,
               a2->hg,
               *(_DWORD *)(v3 + 636),
               0,
               &v13) != -1 )
        {
          a2->gdf.pgb = v13;
          return 1;
        }
      }
      else
      {
        memset(&v17, 0, sizeof(v17));
        v8 = *(_DWORD *)(v3 + 632);
        v9 = *(_DWORD *)(v3 + 604) - *(_DWORD *)(v3 + 600);
        v15 = v8;
        if ( v8 <= v9
          || (v8 = PFFOBJ::QueryFontData(
                     (PFFOBJ *)v16,
                     *(struct DHPDEV__ **)(v3 + 76),
                     (struct _FONTOBJ *)v3,
                     1u,
                     a2->hg,
                     &v17,
                     0,
                     0),
              v15 = v8,
              v8 != -1) )
        {
          v10 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(v14, v8);
          v13 = v10;
          if ( !v10 )
          {
            v11 = a3;
            while ( v11 )
            {
              RFONTOBJ::vFlushCache(v14);
              v10 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(v14, v15);
              v13 = v10;
              v11 = 0;
              if ( v10 )
                goto LABEL_12;
            }
            return v7;
          }
LABEL_12:
          v12 = PFFOBJ::QueryFontData(
                  (PFFOBJ *)v16,
                  *(struct DHPDEV__ **)(*(_DWORD *)v14 + 76),
                  *(struct _FONTOBJ **)v14,
                  1u,
                  a2->hg,
                  &v17,
                  v10,
                  v15);
          if ( v12 != -1 )
          {
            a2->gdf.pgb = v13;
            *(_DWORD *)(v3 + 600) += v12;
            return 1;
          }
        }
      }
      return v7;
    }
  }
  return 0;
}
