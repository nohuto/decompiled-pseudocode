/*
 * XREFs of ?pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ @ 0x8A758
 * Callers:
 *     ?lOverhang@RFONTOBJ@@QAEJXZ @ 0x882A8 (-lOverhang@RFONTOBJ@@QAEJXZ.c)
 *     ?bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x897A0 (-bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z @ 0x8A5F8 (-bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z.c)
 *     ?bGetNtoWScale@@YGHPAVEFLOAT@@AAVDCOBJ@@AAVRFONTOBJ@@AAVPFEOBJ@@@Z @ 0x1EB7D0 (-bGetNtoWScale@@YGHPAVEFLOAT@@AAVDCOBJ@@AAVRFONTOBJ@@AAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _POINTL *__thiscall IFIOBJ::pptlBaseline(IFIOBJ *this)
{
  int v1; // edx
  bool v2; // zf

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)(*(_DWORD *)this + 120);
  v2 = *((_DWORD *)this + 1) == 0;
  *((_DWORD *)this + 2) = *(_DWORD *)(v1 + 124);
  if ( v2 && !*((_DWORD *)this + 2) )
    *((_DWORD *)this + 1) = 1;
  return (struct _POINTL *)((char *)this + 4);
}
