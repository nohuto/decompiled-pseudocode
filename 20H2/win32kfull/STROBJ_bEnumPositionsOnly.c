/*
 * XREFs of STROBJ_bEnumPositionsOnly @ 0x1C02BDC70
 * Callers:
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02B09B8 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 * Callees:
 *     ?STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C02BC368 (-STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 */

BOOL __stdcall STROBJ_bEnumPositionsOnly(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  if ( ((__int64)pstro[4].pwszOrg & 0x1400) != 0 )
    return STROBJ_bEnumPositionsOnlyLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  *pc = pstro->cGlyphs;
  *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.top;
  return 0;
}
