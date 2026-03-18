/*
 * XREFs of GetMonitorMenuRectForWindow @ 0x1C025EA64
 * Callers:
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0236148 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C024B718 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C008EA80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C025E8D4 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 */

_OWORD *__fastcall GetMonitorMenuRectForWindow(_OWORD *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  const struct tagMONITOR *v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  struct tagRECT v8; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  v6 = (__int128)*GetMonitorMenuRectForDpiContext(&v8, v5, WindowCompositedDpiContext);
  result = a1;
  *a1 = v6;
  return result;
}
