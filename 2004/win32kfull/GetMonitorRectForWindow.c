/*
 * XREFs of GetMonitorRectForWindow @ 0x1C0023434
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C00239C8 (CalcWindowFullScreen.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C002CABC (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C0036B74 (GetPrimaryMonitorRectForWindow.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     GetMonitorMaxArea @ 0x1C00E7954 (GetMonitorMaxArea.c)
 *     DetectNewMonitor @ 0x1C01E5624 (DetectNewMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020B590 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0236148 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C024B718 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C008EA80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
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
