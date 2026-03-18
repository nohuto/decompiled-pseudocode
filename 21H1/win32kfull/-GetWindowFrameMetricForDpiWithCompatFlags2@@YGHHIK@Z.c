/*
 * XREFs of ?GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z @ 0x916D2
 * Callers:
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _GetWindowNCMetrics@4 @ 0x91522 (_GetWindowNCMetrics@4.c)
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 */

int __userpurge GetWindowFrameMetricForDpiWithCompatFlags2@<eax>(
        int a1@<edx>,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  INT v5; // ecx

  if ( (a2 & 0x10000000) != 0 || (a2 & 0x20000000) != 0 )
    return 0;
  if ( a1 == *(unsigned __int16 *)(_gpsi + 6242) )
    return *(_DWORD *)(_gpsi + 2000);
  if ( a1 == 96 )
    return *(_DWORD *)(_gpsi + 2120);
  if ( GetDpiCacheSlot(a1) == -1 )
    return _ScaleSystemMetricForDPIWithoutCache(29, v5);
  return GetDpiDependentMetric(29, v5);
}
