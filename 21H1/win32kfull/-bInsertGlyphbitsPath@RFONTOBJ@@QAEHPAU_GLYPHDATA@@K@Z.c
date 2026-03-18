/*
 * XREFs of ?bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x240F0D
 * Callers:
 *     _xInsertGlyphbitsRFONTOBJ@12 @ 0x861E0 (_xInsertGlyphbitsRFONTOBJ@12.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z @ 0xA8B2A (-pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QAEXK@Z @ 0x1E57D8 (-vInit@EPATHFONTOBJ@@QAEXK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QAEXXZ @ 0x2412BE (-vFlushCache@RFONTOBJ@@QAEXXZ.c)
 */

int __thiscall RFONTOBJ::bInsertGlyphbitsPath(RFONTOBJ *this, struct _GLYPHDATA *a2, unsigned int a3)
{
  int v4; // esi
  int v5; // ecx
  unsigned int v6; // ebx
  EPATHFONTOBJ *v7; // ecx
  EPATHOBJ *v8; // ecx
  _BYTE v10[8]; // [esp+10h] [ebp-58h] BYREF
  int v11; // [esp+18h] [ebp-50h]
  int v12; // [esp+5Ch] [ebp-Ch]
  int v13; // [esp+60h] [ebp-8h] BYREF
  GLYPHDEF v14; // [esp+64h] [ebp-4h]

  v12 = *(_DWORD *)this;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v10);
  v4 = 0;
  if ( v11 )
  {
    v5 = *(_DWORD *)this;
    v13 = *(_DWORD *)(*(_DWORD *)this + 84);
    if ( PFFOBJ::QueryFontData(
           (PFFOBJ *)&v13,
           *(struct DHPDEV__ **)(v5 + 76),
           (struct _FONTOBJ *)v5,
           2u,
           a2->hg,
           0,
           v10,
           0) != -1 )
    {
      v6 = EPATHOBJ::cjSize((EPATHOBJ *)v10) + 332;
      while ( 1 )
      {
        v7 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v6);
        v14.pgb = (GLYPHBITS *)v7;
        if ( v7 )
          break;
        if ( !a3 )
          goto LABEL_8;
        RFONTOBJ::vFlushCache(this);
        a3 = 0;
      }
      EPATHFONTOBJ::vInit(v7, v6);
      EPATHOBJ::bClone(v8, (struct EPATHOBJ *)v10);
      a2->gdf = v14;
      *(_DWORD *)(v12 + 600) += v6;
      v4 = 1;
    }
  }
LABEL_8:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v10);
  return v4;
}
