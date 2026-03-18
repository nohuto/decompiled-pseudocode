/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0xD0B62
 * Callers:
 *     ?bHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x83A14 (-bHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z @ 0x8D4E8 (-bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0xCDC5E (prfntDeactivateEudcRFONTs.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ?bHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FA8B1 (-bHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285 (-bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 *     _vRemoveAllInactiveRFONTs@4 @ 0x209F01 (_vRemoveAllInactiveRFONTs@4.c)
 * Callees:
 *     <none>
 */

struct RFONT *__thiscall PDEVOBJ::prfntInactive(PDEVOBJ *this, struct RFONT *a2)
{
  int v2; // edx
  struct RFONT *result; // eax

  v2 = *(_DWORD *)this;
  if ( (*(_DWORD *)(*(_DWORD *)this + 24) & 0x800000) != 0 )
    v2 = *(_DWORD *)(v2 + 2316);
  result = *(struct RFONT **)(v2 + 944);
  *(_DWORD *)(v2 + 944) = a2;
  return result;
}
