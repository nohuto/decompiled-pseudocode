/*
 * XREFs of GetMonitorRectForWindow @ 0x1C003DD8C
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C001BA50 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C003A034 (GetPrimaryMonitorRectForWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D294 (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C00906E4 (CalcWindowFullScreen.c)
 *     GetMonitorMaxArea @ 0x1C00C6E4C (GetMonitorMaxArea.c)
 *     xxxCheckFullScreen @ 0x1C00D3A38 (xxxCheckFullScreen.c)
 *     DetectNewMonitor @ 0x1C01E4964 (DetectNewMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020A710 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02352B8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C024A110 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C003DDC8 (GetMonitorRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00D3E20 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

_OWORD *__fastcall GetMonitorRectForWindow(_OWORD *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  v6 = *(_OWORD *)GetMonitorRectForDpiContext(v8, v5, WindowCompositedDpiContext);
  result = a1;
  *a1 = v6;
  return result;
}
