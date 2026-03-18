/*
 * XREFs of _GetScreenRect@0 @ 0xCB540
 * Callers:
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     __GetMouseMovePointsEx@16 @ 0x147FA4 (__GetMouseMovePointsEx@16.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     ?MiPConvertPoint@@YG?AUtagPOINT@@PBU1@@Z @ 0x14D3EC (-MiPConvertPoint@@YG-AUtagPOINT@@PBU1@@Z.c)
 *     _RemapHimetricPointsForMultiMonDigitizers@28 @ 0x151698 (_RemapHimetricPointsForMultiMonDigitizers@28.c)
 *     _VirtualizeMultiMonDigitizerSize@4 @ 0x151D24 (_VirtualizeMultiMonDigitizerSize@4.c)
 *     _NtUserGetHimetricScaleFactorFromPixelLocation@20 @ 0x162E74 (_NtUserGetHimetricScaleFactorFromPixelLocation@20.c)
 *     ?SaveScreen@@YGKPAUtagWND@@KKHHHH@Z @ 0x19DB0A (-SaveScreen@@YGKPAUtagWND@@KKHHHH@Z.c)
 * Callees:
 *     _GetScreenRectForDpi@4 @ 0x338F2 (_GetScreenRectForDpi@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 */

_DWORD *__stdcall GetScreenRect(_DWORD *a1)
{
  int v1; // edx
  unsigned int v2; // esi
  INT *ScreenRectForDpi; // esi
  _DWORD *result; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v6; // eax
  INT v7[5]; // [esp+8h] [ebp-14h] BYREF

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248)
      || (v6 = KeGetCurrentThread(),
          (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v6) + 248) + 4) + 32) & 1) == 0) )
    {
      LOWORD(v2) = 0;
    }
  }
  ScreenRectForDpi = GetScreenRectForDpi(v2, v1, v7);
  result = a1;
  *a1 = *ScreenRectForDpi++;
  a1[1] = *ScreenRectForDpi++;
  a1[2] = *ScreenRectForDpi;
  a1[3] = ScreenRectForDpi[1];
  return result;
}
