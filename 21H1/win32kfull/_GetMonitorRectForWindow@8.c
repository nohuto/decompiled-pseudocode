/*
 * XREFs of _GetMonitorRectForWindow@8 @ 0x33538
 * Callers:
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     _GetMonitorMaxArea@8 @ 0x7307A (_GetMonitorMaxArea@8.c)
 *     _GetPrimaryMonitorRectForWindow@4 @ 0xA8E18 (_GetPrimaryMonitorRectForWindow@4.c)
 *     _DetectNewMonitor@8 @ 0x150BE3 (_DetectNewMonitor@8.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x170EAA (-ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PA.c)
 *     ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B (-MNGetPopupBoundsRect@@YGXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     ?GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z @ 0x335EE (-GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z.c)
 */

_DWORD *__stdcall GetMonitorRectForWindow(_DWORD *a1)
{
  _DWORD *MonitorRectForDpiContext; // esi
  _DWORD *result; // eax
  const struct tagWND *v3; // [esp+0h] [ebp-18h]
  _BYTE v4[16]; // [esp+8h] [ebp-10h] BYREF

  GetWindowCompositedDpiContext(v3);
  MonitorRectForDpiContext = (_DWORD *)GetMonitorRectForDpiContext(v4);
  result = a1;
  *a1 = *MonitorRectForDpiContext++;
  a1[1] = *MonitorRectForDpiContext++;
  a1[2] = *MonitorRectForDpiContext;
  a1[3] = MonitorRectForDpiContext[1];
  return result;
}
