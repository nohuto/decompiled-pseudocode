/*
 * XREFs of ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C
 * Callers:
 *     ?vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z @ 0x1EDDC (-vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     ?bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z @ 0x6769C (-bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z.c)
 *     ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A (-bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z.c)
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     ?bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x893DE (-bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?hWnd@DC@@QAEXPAUHWND__@@@Z @ 0x8E2B6 (-hWnd@DC@@QAEXPAUHWND__@@@Z.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreScaleRgnToDestLogPixel@8 @ 0x1FD5E2 (_GreScaleRgnToDestLogPixel@8.c)
 *     ?vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z @ 0x247A2E (-vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

int __thiscall EFLOATEXT::operator/=(void *this, int a2)
{
  _BYTE v4[8]; // [esp+4h] [ebp-8h] BYREF

  ltoef_c(a2, v4);
  return divff3_c(this, this, v4);
}
