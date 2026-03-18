/*
 * XREFs of ?prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0x846A8
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?bHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x83A14 (-bHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     prfntDeactivateEudcRFONTs @ 0xCDC5E (prfntDeactivateEudcRFONTs.c)
 *     ?bHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FA8B1 (-bHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285 (-bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

struct RFONT *__thiscall PDEVOBJ::prfntActive(PDEVOBJ *this, struct RFONT *a2)
{
  int v2; // edx
  struct RFONT *result; // eax

  v2 = *(_DWORD *)this;
  if ( (*(_DWORD *)(*(_DWORD *)this + 24) & 0x800000) != 0 )
    v2 = *(_DWORD *)(v2 + 2316);
  result = *(struct RFONT **)(v2 + 940);
  *(_DWORD *)(v2 + 940) = a2;
  return result;
}
