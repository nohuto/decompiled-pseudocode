/*
 * XREFs of GetMonitorWorkRect @ 0x1C003AE18
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C01123F4 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x1C01271B0 (xxxDesktopPaintCallback.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C01561B8 (_GetOwnerTransformedMonitorRect.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CFB60 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01CFCCC (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F37D4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C0208ED8 (xxxSetInternalWindowPos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C024A020 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C024A110 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C003AF80 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpiContext @ 0x1C00D3D3C (GetMonitorWorkRectForDpiContext.c)
 */

_OWORD *__fastcall GetMonitorWorkRect(_OWORD *a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  v5 = *(_OWORD *)GetMonitorWorkRectForDpiContext(v7, a2, CurrentThreadCompositedDpiContext);
  result = a1;
  *a1 = v5;
  return result;
}
