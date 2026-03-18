/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00DC3D8
 * Callers:
 *     prfntDeactivateEudcRFONTs @ 0x1C0012C88 (prfntDeactivateEudcRFONTs.c)
 *     prfntKillList @ 0x1C0013084 (prfntKillList.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00DBF50 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00DC528 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C00FE1F4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C010E340 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C012A560 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C029E5B0 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A9234 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(struct RFONT **)(*(_QWORD *)(v1 + 3520) + 1528LL);
  else
    return *(struct RFONT **)(v1 + 1528);
}
