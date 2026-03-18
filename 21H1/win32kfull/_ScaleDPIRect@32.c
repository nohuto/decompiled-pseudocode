/*
 * XREFs of _ScaleDPIRect@32 @ 0x155FE
 * Callers:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     ?InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z @ 0x2B2EE (-InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z.c)
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     _GetMonitorWorkRectForDpiContext@8 @ 0x71F62 (_GetMonitorWorkRectForDpiContext@8.c)
 *     _GetMonitorWorkRectForDpi@8 @ 0x71FAA (_GetMonitorWorkRectForDpi@8.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YG?AUtagRECT@@PBUtagMONITOR@@G@Z @ 0x1B7032 (-GetMonitorMenuRectForDpi@@YG-AUtagRECT@@PBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorMenuRectForDpiContext@@YG?AUtagRECT@@PBUtagMONITOR@@K@Z @ 0x1B70D7 (-GetMonitorMenuRectForDpiContext@@YG-AUtagRECT@@PBUtagMONITOR@@K@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ScaleDPIRect(
        _DWORD *a1,
        int *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int result; // eax
  int v9; // [esp+Ch] [ebp-14h]
  int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h]

  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3];
  *a1 = a5 + EngMulDiv(*a2 - a7, a3, a4);
  a1[1] = a6 + EngMulDiv(v10 - a8, a3, a4);
  a1[2] = *a1 + EngMulDiv(v11 - v9, a3, a4);
  result = a1[1] + EngMulDiv(v12 - v10, a3, a4);
  a1[3] = result;
  return result;
}
