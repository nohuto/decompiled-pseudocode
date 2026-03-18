/*
 * XREFs of ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00262AC
 * Callers:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C00261F4 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     NtGdiEngTextOut @ 0x1C0131D30 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C0132AC0 (NtGdiFONTOBJ_pifi.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A6BC8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B32B0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B3500 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC580 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTTMPOBJ::~RFONTTMPOBJ(RFONTTMPOBJ *this)
{
  *(_QWORD *)this = 0LL;
  RFONTOBJ::~RFONTOBJ(this);
}
