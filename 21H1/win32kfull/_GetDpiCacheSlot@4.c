/*
 * XREFs of _GetDpiCacheSlot@4 @ 0x31A1A
 * Callers:
 *     __AdjustWindowRectExForDpi@20 @ 0x313D6 (__AdjustWindowRectExForDpi@20.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     ?xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z @ 0x31656 (-xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z @ 0x91676 (-GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z @ 0x916D2 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z.c)
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 *     _FindNCHit@8 @ 0xA9F04 (_FindNCHit@8.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 *     _NtUserGetActiveProcessesDpis@0 @ 0xE7962 (_NtUserGetActiveProcessesDpis@0.c)
 *     __EnsureDpiDepSysMetCacheForPlateau@4 @ 0x15534E (__EnsureDpiDepSysMetCacheForPlateau@4.c)
 *     _NtUserForceWindowToDpiForTest@8 @ 0x16182C (_NtUserForceWindowToDpiForTest@8.c)
 *     ?GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z @ 0x1B7171 (-GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall GetDpiCacheSlot(int a1)
{
  int v1; // esi

  v1 = -1;
  if ( a1 == *(unsigned __int16 *)(_gpsi + 6242) )
    return 0;
  if ( a1 >= 96 && !(a1 % 24) )
  {
    v1 = (a1 - 72) / 24;
    if ( v1 >= 18 )
      return -1;
  }
  return v1;
}
