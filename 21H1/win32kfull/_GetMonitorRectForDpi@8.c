/*
 * XREFs of _GetMonitorRectForDpi@8 @ 0x15588
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _FindOldMonitor@12 @ 0x153AA (_FindOldMonitor@12.c)
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     _GetScreenRectForDpi@4 @ 0x338F2 (_GetScreenRectForDpi@4.c)
 *     _InternalGetRealClientRect@20 @ 0xA23FA (_InternalGetRealClientRect@20.c)
 *     ?CalcVirtualScreenClipRegion@@YGXPAUHRGN__@@PAUtagWND@@@Z @ 0x1962EE (-CalcVirtualScreenClipRegion@@YGXPAUHRGN__@@PAUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YG?AUtagRECT@@PBUtagMONITOR@@G@Z @ 0x1B7032 (-GetMonitorMenuRectForDpi@@YG-AUtagRECT@@PBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z @ 0x1B7171 (-GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _ExpandMonitorSpaceVertex@16 @ 0x15678 (_ExpandMonitorSpaceVertex@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

INT *__fastcall GetMonitorRectForDpi(int a1, __int16 a2, INT *a3)
{
  INT *v3; // esi
  int v4; // eax
  int v5; // edx

  v3 = (INT *)(*(_DWORD *)(a1 + 20) + 16);
  *a3 = *v3++;
  a3[1] = *v3++;
  a3[2] = *v3;
  a3[3] = v3[1];
  if ( a2 )
  {
    v4 = ExpandMonitorSpaceVertex(*a3, a3[1]);
    ScaleDPIRect(a2, *(_WORD *)(*(_DWORD *)(a1 + 20) + 52), v4, v5, *a3, a3[1]);
  }
  return a3;
}
