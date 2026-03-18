/*
 * XREFs of ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F
 * Callers:
 *     _xxxDesktopPaintCallback@16 @ 0xE9858 (_xxxDesktopPaintCallback@16.c)
 * Callees:
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreTextInitialized@0 @ 0xF72EC (_GreTextInitialized@0.c)
 */

void __fastcall PaintWatermark(HDC a1, int a2)
{
  int v3; // edi
  int ProcessDpiServerInfo; // eax
  int v5; // ebx
  int v6; // eax
  int v8; // [esp+10h] [ebp-10h]
  int v9; // [esp+14h] [ebp-Ch]
  struct tagSIZE v10; // [esp+18h] [ebp-8h] BYREF

  v10.cx = 0;
  v10.cy = 0;
  v3 = 0;
  if ( GreTextInitialized() && *(_DWORD *)(_gpsi + 1764) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      ProcessDpiServerInfo = GetProcessDpiServerInfo();
    else
      ProcessDpiServerInfo = Get96DpiServerInfo();
    v5 = ProcessDpiServerInfo;
    v6 = *(_DWORD *)(ProcessDpiServerInfo + 8);
    if ( v6 )
      v3 = GreSelectFont(a1, v6);
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit();
    EnterSharedCrit(0, 1);
    EnterSharedRenderCrit();
    v8 = GreSetBkMode(a1, 1);
    v9 = GreSetTextColor(a1, 0xFFFFFF);
    if ( GreGetTextExtentW(a1, gwszSafeModeStr, (unsigned int)gSafeModeStrLen, &v10, 1) )
    {
      GreExtTextOutWInternal(
        a1,
        *(ERECTL **)a2,
        *(struct XDCOBJ **)(a2 + 4),
        0,
        0,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0,
        0,
        0);
      GreExtTextOutWInternal(
        a1,
        (ERECTL *)(*(_DWORD *)(a2 + 8) - v10.cx),
        *(struct XDCOBJ **)(a2 + 4),
        0,
        0,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0,
        0,
        0);
      GreExtTextOutWInternal(
        a1,
        (ERECTL *)(*(_DWORD *)(a2 + 8) - v10.cx),
        (struct XDCOBJ *)(*(_DWORD *)(a2 + 12) - *(_DWORD *)(v5 + 32)),
        0,
        0,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0,
        0,
        0);
      GreExtTextOutWInternal(
        a1,
        *(ERECTL **)a2,
        (struct XDCOBJ *)(*(_DWORD *)(a2 + 12) - *(_DWORD *)(v5 + 32)),
        0,
        0,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0,
        0,
        0);
    }
    GreSetBkMode(a1, v8);
    GreSetTextColor(a1, v9);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit();
    EnterCrit(0, 1);
    if ( v3 )
      GreSelectFont(a1, v3);
  }
}
