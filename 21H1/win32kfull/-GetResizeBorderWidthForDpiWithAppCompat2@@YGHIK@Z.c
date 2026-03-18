/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z @ 0x91676
 * Callers:
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _GetWindowNCMetrics@4 @ 0x91522 (_GetWindowNCMetrics@4.c)
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 */

int __fastcall GetResizeBorderWidthForDpiWithAppCompat2(INT a1, int a2)
{
  int v4; // edi
  int DpiDependentMetric; // eax

  if ( (a2 & 0x10000000) != 0 )
    return 1;
  v4 = (a1 * *(_DWORD *)(Get96DpiServerInfo() + 4) + 48) / 96;
  if ( (a2 & 0x20000000) != 0 )
  {
    if ( a1 == *(unsigned __int16 *)(_gpsi + 6242) )
    {
      DpiDependentMetric = *(_DWORD *)(_gpsi + 2000);
    }
    else if ( a1 == 96 )
    {
      DpiDependentMetric = *(_DWORD *)(_gpsi + 2120);
    }
    else if ( GetDpiCacheSlot(a1) == -1 )
    {
      DpiDependentMetric = _ScaleSystemMetricForDPIWithoutCache(29, a1);
    }
    else
    {
      DpiDependentMetric = GetDpiDependentMetric(29, a1);
    }
    v4 += DpiDependentMetric;
  }
  return v4;
}
