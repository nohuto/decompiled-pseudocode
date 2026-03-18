/*
 * XREFs of ?bUseMetaPtoD@DC@@QBEHXZ @ 0x1F4EE2
 * Callers:
 *     ??0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z @ 0x680A0 (--0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z.c)
 *     ?bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z @ 0x8A5F8 (-bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QAEHPAVXDCOBJ@@@Z @ 0x8A7A8 (-bCalcLayoutUnits@RFONTOBJ@@QAEHPAVXDCOBJ@@@Z.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 * Callees:
 *     <none>
 */

int __thiscall DC::bUseMetaPtoD(DC *this)
{
  int result; // eax

  result = 0;
  if ( (*((_DWORD *)this + 117) || *((_DWORD *)this + 118)) && (*((_DWORD *)this + 119) || *((_DWORD *)this + 120)) )
    return 1;
  return result;
}
