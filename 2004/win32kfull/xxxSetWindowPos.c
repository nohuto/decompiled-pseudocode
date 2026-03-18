/*
 * XREFs of xxxSetWindowPos @ 0x1C006A658
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003E7C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxActivateEnabledPopup @ 0x1C000725C (xxxActivateEnabledPopup.c)
 *     xxxSwitchToThisWindow @ 0x1C0007E10 (xxxSwitchToThisWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     NtUserSetWindowPos @ 0x1C0069EC0 (NtUserSetWindowPos.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetShellWindow @ 0x1C00BF934 (xxxSetShellWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     xxxSetScrollBar @ 0x1C00F0C18 (xxxSetScrollBar.c)
 *     xxxMoveWindow @ 0x1C0104A5C (xxxMoveWindow.c)
 *     xxxShowScrollBar @ 0x1C010B104 (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C0110D38 (xxxSetWindowPlacement.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C011D710 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     EditionHandleAltTab @ 0x1C0126BE0 (EditionHandleAltTab.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     xxxSetMenu @ 0x1C0149934 (xxxSetMenu.c)
 *     xxxDrawMenuBar @ 0x1C014E150 (xxxDrawMenuBar.c)
 *     xxxRedrawFrameAndHook @ 0x1C0153940 (xxxRedrawFrameAndHook.c)
 *     xxxRedrawFrame @ 0x1C0153D10 (xxxRedrawFrame.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D0EBC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01D8204 (xxxMetricsRecalc.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01E08CC (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E49DC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E4C88 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E4D7C (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01E690C (xxxEnableNonClientDpiScaling.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6D2C (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4440 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01F5B40 (xxxSwitchWndProc.c)
 *     xxxSetInternalWindowPos @ 0x1C0209D60 (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020E280 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxUpdateShadowZorder @ 0x1C023EF48 (xxxUpdateShadowZorder.c)
 *     xxxMNUpdateShownMenu @ 0x1C024A8BC (xxxMNUpdateShownMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0068068 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C006A7D4 (xxxSetWindowPosAndBand.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetWindowPos(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  bool v8; // di
  char v9; // al
  unsigned int v10; // ebp
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *TopLevelWindow; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v18[4]; // [rsp+40h] [rbp-38h] BYREF

  v8 = !a2 && (unsigned int)CoreWindowProp::IsComponent(a1) && (a7 & 0xFFFFFFEF) == 3;
  v9 = a7;
  if ( !v8 )
    v9 = a7;
  v10 = xxxSetWindowPosAndBand(a1, a5, a6, v9, 0);
  if ( v10 )
  {
    if ( v8 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == gpqForeground )
    {
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
      if ( TopLevelWindow )
      {
        v18[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v18;
        v18[1] = TopLevelWindow;
        HMLockObject(TopLevelWindow);
        xxxSetWindowPosAndBand(TopLevelWindow, 0, 0, 19, 0);
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  return v10;
}
