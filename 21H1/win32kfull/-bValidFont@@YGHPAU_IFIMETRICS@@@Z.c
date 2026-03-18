/*
 * XREFs of ?bValidFont@@YGHPAU_IFIMETRICS@@@Z @ 0x89708
 * Callers:
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     ?bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x893DE (-bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     _cjIFIMetricsToOTMW@24 @ 0x89FBE (_cjIFIMetricsToOTMW@24.c)
 *     ?bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDC780 (-bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall bValidFont(_WORD *this)
{
  return (__int16)this[30] + (__int16)this[31] != 0 && this[28] != 0;
}
