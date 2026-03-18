/*
 * XREFs of GetDpiCacheSlot @ 0x1C00A0088
 * Callers:
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00607B4 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     GetDPIServerInfoForDpi @ 0x1C0061810 (GetDPIServerInfoForDpi.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C009FBB0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00A2994 (_AdjustWindowRectExForDpi.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00AD8A0 (GetWindowBordersWithDpiAwareness.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00AFB3C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     FindNCHit @ 0x1C01179B4 (FindNCHit.c)
 *     NtUserGetActiveProcessesDpis @ 0x1C01218B0 (NtUserGetActiveProcessesDpis.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01EA970 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C01F9650 (NtUserForceWindowToDpiForTest.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025E978 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
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
