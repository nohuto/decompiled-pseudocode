/*
 * XREFs of _STROBJ_bEnum@12 @ 0x2255A9
 * Callers:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     vStringBitmapTextOut @ 0xF725E (vStringBitmapTextOut.c)
 *     bOutOfBounds @ 0x1F8638 (bOutOfBounds.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z @ 0x21643D (-NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z @ 0x223AE6 (-STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x22438F (-bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?STROBJ_bEnumLinked@@YGHPAVESTROBJ@@PAKPAPAU_GLYPHPOS@@@Z @ 0x2077A3 (-STROBJ_bEnumLinked@@YGHPAVESTROBJ@@PAKPAPAU_GLYPHPOS@@@Z.c)
 *     ?cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x207A92 (-cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z.c)
 *     _vGetPosInfo@12 @ 0x225781 (_vGetPosInfo@12.c)
 */

BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  LONG left; // eax
  ULONG cGlyphs; // ecx
  ULONG v6; // edi
  unsigned int v7; // ecx
  RFONTOBJ *ulCharInc; // eax
  struct _GLYPHPOS *v9; // edi
  ULONG GlyphData; // ebx
  ULONG v11; // ecx
  unsigned int *v12; // [esp+0h] [ebp-Ch]
  struct _GLYPHPOS **v13; // [esp+4h] [ebp-8h]

  left = pstro[5].rclBkGround.left;
  if ( (left & 0x1400) != 0 )
    return STROBJ_bEnumLinked(pc, pstro, (struct ESTROBJ *)ppgpos, v12, v13);
  cGlyphs = pstro->cGlyphs;
  if ( (left & 2) != 0 )
  {
    *pc = cGlyphs;
    *ppgpos = (PGLYPHPOS)pstro[1].rclBkGround.left;
    return 0;
  }
  v6 = pstro[1].cGlyphs;
  v7 = cGlyphs - v6;
  if ( !v7
    || (ulCharInc = (RFONTOBJ *)pstro[1].ulCharInc,
        v9 = (struct _GLYPHPOS *)(pstro[1].rclBkGround.left + 16 * v6),
        !ulCharInc)
    || (GlyphData = RFONTOBJ::cGetGlyphData(ulCharInc, v7, v9)) == 0 )
  {
    *pc = 0;
    return 0;
  }
  v11 = pstro[1].cGlyphs;
  if ( v11 )
  {
    if ( pstro->ulCharInc )
    {
      vGetPosInfo(&v9->ptl);
      v11 = pstro[1].cGlyphs;
    }
  }
  pstro[1].cGlyphs = v11 + GlyphData;
  *pc = GlyphData;
  *ppgpos = v9;
  return pstro[1].cGlyphs < pstro->cGlyphs;
}
