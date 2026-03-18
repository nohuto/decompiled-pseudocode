/*
 * XREFs of ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D7758
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C000A8A0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C000A904 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6FE8 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D7824 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     UpdateWinIniInt @ 0x1C01D8070 (UpdateWinIniInt.c)
 */

__int64 __fastcall SetWindowMetricInt(struct _UNICODE_STRING *a1, unsigned __int16 a2, unsigned int a3)
{
  unsigned int v3; // r10d

  v3 = a3;
  if ( a2 <= 0x90u )
  {
    if ( a2 < 0x8Fu && (a2 < 0x40u || a2 > 0x41u && (a2 <= 0x87u || a2 > 0x8Au && (a2 <= 0x8Bu || a2 > 0x8Du))) )
      return UpdateWinIniInt(a1, 23LL, a2, v3);
LABEL_15:
    v3 = -((int)(1440 * a3 + (*(unsigned __int16 *)(gpsi + 6998LL) >> 1)) / *(unsigned __int16 *)(gpsi + 6998LL));
    return UpdateWinIniInt(a1, 23LL, a2, v3);
  }
  if ( a2 >= 0x92u && (a2 <= 0x94u || a2 > 0x97u && (a2 <= 0x99u || a2 == 158)) )
    goto LABEL_15;
  return UpdateWinIniInt(a1, 23LL, a2, v3);
}
