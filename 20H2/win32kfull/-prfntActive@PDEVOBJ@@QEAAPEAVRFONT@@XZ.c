/*
 * XREFs of ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00639F4
 * Callers:
 *     prfntKillList @ 0x1C001DA20 (prfntKillList.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0020748 (prfntDeactivateEudcRFONTs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0021F84 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0025DF8 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0062FD8 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00EA130 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C029D160 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
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
