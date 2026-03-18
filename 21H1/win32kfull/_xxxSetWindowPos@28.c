/*
 * XREFs of _xxxSetWindowPos@28 @ 0x32F7A
 * Callers:
 *     _xxxSwitchToThisWindow@8 @ 0x11FBE (_xxxSwitchToThisWindow@8.c)
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _NtUserSetWindowPos@28 @ 0x30082 (_NtUserSetWindowPos@28.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     _xxxMoveWindow@24 @ 0x9A1C4 (_xxxMoveWindow@24.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YGHPAUtagWND@@PAUtagRECT@@@Z @ 0xABB6A (-xxxSendDpiChangedMessageToTopLevelWindow@@YGHPAUtagWND@@PAUtagRECT@@@Z.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     _xxxSetMenu@12 @ 0xC0AC0 (_xxxSetMenu@12.c)
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _xxxDrawMenuBar@4 @ 0xC2E24 (_xxxDrawMenuBar@4.c)
 *     _xxxShowScrollBar@12 @ 0xC3116 (_xxxShowScrollBar@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxSetShellWindow@8 @ 0xE0F54 (_xxxSetShellWindow@8.c)
 *     _EditionHandleAltTab@32 @ 0xF3338 (_EditionHandleAltTab@32.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     ?CheckOnTop@@YGHPAUtagTHREADINFO@@PAUtagWND@@I@Z @ 0x14CE05 (-CheckOnTop@@YGHPAUtagTHREADINFO@@PAUtagWND@@I@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YGHPAUHWND__@@H@Z @ 0x1503E5 (-xxxSendDpiChangedMessageToChildWindow@@YGHPAUHWND__@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YGHPAUHWND__@@@Z @ 0x150481 (-xxxSendGDIScaledDpiChangedMessage@@YGHPAUHWND__@@@Z.c)
 *     _xxxEnableNonClientDpiScaling@4 @ 0x1522FC (_xxxEnableNonClientDpiScaling@4.c)
 *     _xxxUpdateWindowPositionsForDpiBoundaryChange@4 @ 0x152694 (_xxxUpdateWindowPositionsForDpiBoundaryChange@4.c)
 *     ?xxxShowSwitchWindow@@YGHPAUtagWND@@@Z @ 0x15CF04 (-xxxShowSwitchWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 *     _xxxSetInternalWindowPos@16 @ 0x16F556 (_xxxSetInternalWindowPos@16.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _xxxUpdateShadowZorder@4 @ 0x19D563 (_xxxUpdateShadowZorder@4.c)
 *     ?xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z @ 0x1A0A7C (-xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z.c)
 *     _xxxRedrawFrame@4 @ 0x1A13A8 (_xxxRedrawFrame@4.c)
 *     _xxxRedrawFrameAndHook@4 @ 0x1A13C6 (_xxxRedrawFrameAndHook@4.c)
 *     _xxxActivateEnabledPopup@4 @ 0x1A1E3A (_xxxActivateEnabledPopup@4.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall xxxSetWindowPos(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  char v9; // bl
  int result; // eax
  struct tagWND *TopLevelHostForComponent; // eax
  int TopLevelWindow; // edi
  int v13; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v16[2]; // [esp+Ch] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+14h] [ebp-Ch] BYREF

  v16[1] = a2;
  v8 = a7;
  if ( !a2
    && a1
    && (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 147) & 1) != 0
    && (v16[0] = 0, CWindowProp::GetProp<CoreWindowProp>(a1, v16))
    && *(_DWORD *)(v16[0] + 12)
    && (a7 & 0xFFFFFFEF) == 3 )
  {
    v9 = 1;
    v8 = a7 | 0x60400;
  }
  else
  {
    v9 = 0;
  }
  result = xxxSetWindowPosAndBand(a3, a4, a5, a6, v8, 0);
  v16[0] = result;
  if ( result && v9 && *(_DWORD *)(*(_DWORD *)(a1 + 8) + 236) == _gpqForeground )
  {
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
    TopLevelWindow = _GetTopLevelWindow((int)TopLevelHostForComponent);
    if ( TopLevelWindow )
    {
      v17[2] = 0;
      v13 = 394259;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v17[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v17;
      v17[1] = TopLevelWindow;
      HMLockObject(TopLevelWindow);
      if ( (*(_BYTE *)(*(_DWORD *)(TopLevelWindow + 20) + 16) & 8) == 0
        && (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 16) & 8) == 0 )
      {
        v13 = 4588563;
      }
      xxxSetWindowPosAndBand(0, 0, 0, 0, v13, 0);
      ThreadUnlock1();
    }
    return v16[0];
  }
  return result;
}
