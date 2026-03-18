/*
 * XREFs of _STROBJ_bEnumPositionsOnly@12 @ 0x225654
 * Callers:
 *     ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z @ 0x21643D (-NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z.c)
 * Callees:
 *     ?STROBJ_bEnumPositionsOnlyLinked@@YGHPAVESTROBJ@@PAKPAPAU_GLYPHPOS@@@Z @ 0x223C26 (-STROBJ_bEnumPositionsOnlyLinked@@YGHPAVESTROBJ@@PAKPAPAU_GLYPHPOS@@@Z.c)
 */

BOOL __stdcall STROBJ_bEnumPositionsOnly(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  unsigned int *v4; // [esp+0h] [ebp-4h]
  struct _GLYPHPOS **savedregs; // [esp+4h] [ebp+0h]

  if ( (pstro[5].rclBkGround.left & 0x1400) != 0 )
    return STROBJ_bEnumPositionsOnlyLinked(pc, pstro, (struct ESTROBJ *)ppgpos, v4, savedregs);
  *pc = pstro->cGlyphs;
  *ppgpos = (PGLYPHPOS)pstro[1].rclBkGround.left;
  return 0;
}
