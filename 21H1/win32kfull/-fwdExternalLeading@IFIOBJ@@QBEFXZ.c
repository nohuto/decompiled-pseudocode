/*
 * XREFs of ?fwdExternalLeading@IFIOBJ@@QBEFXZ @ 0x896E6
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306 (-vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 *     ?bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x893DE (-bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     _GreFillFontDir@12 @ 0x220E8D (_GreFillFontDir@12.c)
 * Callees:
 *     <none>
 */

int __thiscall IFIOBJ::fwdExternalLeading(IFIOBJ *this)
{
  __int16 v1; // cx

  v1 = *(_WORD *)(*(_DWORD *)this + 64)
     + *(_WORD *)(*(_DWORD *)this + 68)
     - *(_WORD *)(*(_DWORD *)this + 66)
     - *(_WORD *)(*(_DWORD *)this + 62)
     - *(_WORD *)(*(_DWORD *)this + 60);
  if ( v1 > 0 )
    return (unsigned __int16)v1;
  else
    return 0;
}
