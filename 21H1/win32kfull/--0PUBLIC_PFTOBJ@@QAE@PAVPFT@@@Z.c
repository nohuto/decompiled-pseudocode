/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z @ 0xAB9A0
 * Callers:
 *     _NtGdiAddEmbFontToDC@8 @ 0x1D9099 (_NtGdiAddEmbFontToDC@8.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF (_NtGdiFONTOBJ_cGetGlyphs@20.c)
 *     _NtGdiFONTOBJ_pQueryGlyphAttrs@8 @ 0x21A080 (_NtGdiFONTOBJ_pQueryGlyphAttrs@8.c)
 *     _NtGdiFONTOBJ_pifi@4 @ 0x21A29C (_NtGdiFONTOBJ_pifi@4.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__thiscall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_DWORD *)this = a2;
  return this;
}
