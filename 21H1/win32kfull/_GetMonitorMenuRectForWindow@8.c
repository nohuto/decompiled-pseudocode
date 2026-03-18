/*
 * XREFs of _GetMonitorMenuRectForWindow@8 @ 0x1B722C
 * Callers:
 *     ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B (-MNGetPopupBoundsRect@@YGXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z @ 0x335EE (-GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpiContext@@YG?AUtagRECT@@PBUtagMONITOR@@K@Z @ 0x1B70D7 (-GetMonitorMenuRectForDpiContext@@YG-AUtagRECT@@PBUtagMONITOR@@K@Z.c)
 */

LONG *__fastcall GetMonitorMenuRectForWindow(int a1, _DWORD *a2, LONG *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  struct tagRECT *MonitorMenuRectForDpiContext; // esi
  LONG *result; // eax
  const struct tagMONITOR *v7; // [esp+0h] [ebp-1Ch]
  unsigned int v8; // [esp+4h] [ebp-18h]
  struct tagRECT v9; // [esp+8h] [ebp-14h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  MonitorMenuRectForDpiContext = GetMonitorMenuRectForDpiContext(WindowCompositedDpiContext, a1, &v9, v7, v8);
  result = a3;
  *a3 = MonitorMenuRectForDpiContext->left;
  MonitorMenuRectForDpiContext = (struct tagRECT *)((char *)MonitorMenuRectForDpiContext + 4);
  a3[1] = MonitorMenuRectForDpiContext->left;
  MonitorMenuRectForDpiContext = (struct tagRECT *)((char *)MonitorMenuRectForDpiContext + 4);
  a3[2] = MonitorMenuRectForDpiContext->left;
  a3[3] = MonitorMenuRectForDpiContext->top;
  return result;
}
