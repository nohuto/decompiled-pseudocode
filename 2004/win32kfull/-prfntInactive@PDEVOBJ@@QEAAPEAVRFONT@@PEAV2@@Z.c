/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00DB570
 * Callers:
 *     prfntDeactivateEudcRFONTs @ 0x1C0012C88 (prfntDeactivateEudcRFONTs.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00DBF50 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00DC528 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00EBAA8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C00FE1F4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029B7CC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A9234 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntInactive(PDEVOBJ *this, struct RFONT *a2)
{
  __int64 v2; // r8
  struct RFONT *result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 3520);
    result = *(struct RFONT **)(v4 + 1528);
    *(_QWORD *)(v4 + 1528) = a2;
  }
  else
  {
    result = *(struct RFONT **)(v2 + 1528);
    *(_QWORD *)(v2 + 1528) = a2;
  }
  return result;
}
