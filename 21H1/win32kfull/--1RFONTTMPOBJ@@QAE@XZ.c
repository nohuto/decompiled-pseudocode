/*
 * XREFs of ??1RFONTTMPOBJ@@QAE@XZ @ 0x869E4
 * Callers:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ @ 0x209E08 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ @ 0x209EA0 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF (_NtGdiFONTOBJ_cGetGlyphs@20.c)
 *     _NtGdiFONTOBJ_pQueryGlyphAttrs@8 @ 0x21A080 (_NtGdiFONTOBJ_pQueryGlyphAttrs@8.c)
 *     _NtGdiFONTOBJ_pifi@4 @ 0x21A29C (_NtGdiFONTOBJ_pifi@4.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x223E25 (-bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall RFONTTMPOBJ::~RFONTTMPOBJ(RFONTTMPOBJ *this)
{
  *(_DWORD *)this = 0;
  RFONTOBJ::~RFONTOBJ(this);
}
