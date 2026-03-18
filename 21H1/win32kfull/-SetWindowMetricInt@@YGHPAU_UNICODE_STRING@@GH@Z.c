/*
 * XREFs of ?SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z @ 0x1457A0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z @ 0xD9DEC (-xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z.c)
 *     ?xxxSPISetMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@H@Z @ 0xD9E36 (-xxxSPISetMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     ?SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z @ 0x145212 (-SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z @ 0x145849 (-xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     _UpdateWinIniInt@16 @ 0x145EB1 (_UpdateWinIniInt@16.c)
 */

int __userpurge SetWindowMetricInt@<eax>(unsigned __int16 a1@<dx>, int a2, unsigned __int16 a3, int a4)
{
  int v4; // eax

  if ( a1 > 0x90u )
  {
    if ( a1 < 0x92u || a1 > 0x94u && (a1 <= 0x97u || a1 > 0x99u && a1 != 158) )
      goto LABEL_9;
LABEL_16:
    v4 = -(((*(unsigned __int16 *)(_gpsi + 6242) >> 1) + 1440 * a2) / *(unsigned __int16 *)(_gpsi + 6242));
    return UpdateWinIniInt(a1, v4);
  }
  if ( a1 >= 0x8Fu || a1 >= 0x40u && (a1 <= 0x41u || a1 > 0x87u && (a1 <= 0x8Au || a1 > 0x8Bu && a1 <= 0x8Du)) )
    goto LABEL_16;
LABEL_9:
  v4 = a2;
  return UpdateWinIniInt(a1, v4);
}
