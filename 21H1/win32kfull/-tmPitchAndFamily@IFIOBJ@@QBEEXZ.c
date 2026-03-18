/*
 * XREFs of ?tmPitchAndFamily@IFIOBJ@@QBEEXZ @ 0x896B2
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306 (-vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z.c)
 *     ?bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x893DE (-bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     _GreFillFontDir@12 @ 0x220E8D (_GreFillFontDir@12.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __thiscall IFIOBJ::tmPitchAndFamily(IFIOBJ *this)
{
  return *(_BYTE *)(*(_DWORD *)this + 45) & 0xF0 | (*(_DWORD *)(*(_DWORD *)this + 48) >> 1) & 2 | ((*(_DWORD *)(*(_DWORD *)this + 48) & 1) != 0
                                                                                                 ? 6
                                                                                                 : 0) | ((*(_DWORD *)(*(_DWORD *)this + 48) & 0x401000) == 0);
}
