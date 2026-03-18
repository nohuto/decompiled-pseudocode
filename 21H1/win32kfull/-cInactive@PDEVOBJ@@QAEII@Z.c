/*
 * XREFs of ?cInactive@PDEVOBJ@@QAEII@Z @ 0xD0B3A
 * Callers:
 *     ?bHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x83A14 (-bHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0xCDC5E (prfntDeactivateEudcRFONTs.c)
 *     prfntKillList @ 0xCE282 (prfntKillList.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ?bHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FA8B1 (-bHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285 (-bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 *     _vRemoveAllInactiveRFONTs@4 @ 0x209F01 (_vRemoveAllInactiveRFONTs@4.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall PDEVOBJ::cInactive(PDEVOBJ *this, unsigned int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)this;
  if ( (*(_DWORD *)(*(_DWORD *)this + 24) & 0x800000) != 0 )
    v2 = *(_DWORD *)(v2 + 2316);
  *(_DWORD *)(v2 + 948) = a2;
  return a2;
}
