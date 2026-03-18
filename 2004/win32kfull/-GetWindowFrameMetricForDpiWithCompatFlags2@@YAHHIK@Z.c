/*
 * XREFs of ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00607B4
 * Callers:
 *     GetWindowFrameMetricForDpi @ 0x1C00603AC (GetWindowFrameMetricForDpi.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00606D8 (GetWindowBordersForDpiWithCompatFlags2.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00A0088 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA9F0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpiWithCompatFlags2(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r8
  unsigned int v5; // r11d

  if ( (a3 & 0x10000000) != 0 || (a3 & 0x20000000) != 0 )
    return 0LL;
  if ( a2 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return *(unsigned int *)(gpsi + 2400LL);
  if ( a2 == 96 )
    return *(unsigned int *)(gpsi + 2520LL);
  if ( (unsigned int)GetDpiCacheSlot(a2) == -1 )
    return ScaleSystemMetricForDPIWithoutCache(29LL, v5);
  return GetDpiDependentMetric(29LL, v5, v4);
}
