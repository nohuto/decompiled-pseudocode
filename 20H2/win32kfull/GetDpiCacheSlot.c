/*
 * XREFs of GetDpiCacheSlot @ 0x1C005BD68
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x1C0037DEC (GetDPIServerInfoForDpi.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004C5DC (GetWindowBordersWithDpiAwareness.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C005B890 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00C7DC0 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00C966C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00CBE20 (_AdjustWindowRectExForDpi.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 *     NtUserGetActiveProcessesDpis @ 0x1C0122820 (NtUserGetActiveProcessesDpis.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01E9D00 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C01F87E0 (NtUserForceWindowToDpiForTest.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025D364 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiCacheSlot(int a1)
{
  unsigned int v1; // r9d
  int v3; // edx

  v1 = -1;
  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    return 0;
  }
  else if ( a1 >= 96 && a1 == 24 * (a1 / 24) )
  {
    v3 = (a1 - 72) / 24;
    if ( v3 >= 18 )
      return (unsigned int)-1;
    return (unsigned int)v3;
  }
  return v1;
}
