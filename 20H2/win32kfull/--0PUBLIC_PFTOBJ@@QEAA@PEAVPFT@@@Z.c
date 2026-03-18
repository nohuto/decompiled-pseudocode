/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C015D1E8
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0021A28 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     NtGdiEngTextOut @ 0x1C0131D30 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C0132AC0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027C280 (NtGdiAddEmbFontToDC.c)
 *     vUnlinkEudcRFONTs @ 0x1C0297D74 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0297E70 (vUnlinkEudcRFONTsAndPFEs.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B32B0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B3500 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
