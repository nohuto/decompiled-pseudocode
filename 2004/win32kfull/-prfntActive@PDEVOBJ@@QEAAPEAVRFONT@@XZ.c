/*
 * XREFs of ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00DDD20
 * Callers:
 *     prfntDeactivateEudcRFONTs @ 0x1C0012C88 (prfntDeactivateEudcRFONTs.c)
 *     prfntKillList @ 0x1C0013084 (prfntKillList.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00DD304 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C00FE1F4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C010E340 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C012A560 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C029E5B0 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntActive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(struct RFONT **)(*(_QWORD *)(v1 + 3520) + 1520LL);
  else
    return *(struct RFONT **)(v1 + 1520);
}
