/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C01599E8
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C01145F0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     NtGdiEngTextOut @ 0x1C012FA90 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C01308A0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027D7F0 (NtGdiAddEmbFontToDC.c)
 *     vUnlinkEudcRFONTs @ 0x1C02991C4 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02992C0 (vUnlinkEudcRFONTsAndPFEs.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B4830 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B4A80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
