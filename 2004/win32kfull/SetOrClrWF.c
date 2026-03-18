/*
 * XREFs of SetOrClrWF @ 0x1C00A2698
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003E7C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetModernAppWindow @ 0x1C0005A00 (xxxSetModernAppWindow.c)
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetWindowGroupBand @ 0x1C0024248 (SetWindowGroupBand.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     SetHungFlag @ 0x1C003094C (SetHungFlag.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ImeSetTopmost @ 0x1C0033178 (ImeSetTopmost.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     NtUserSetCoreWindow @ 0x1C003A2E0 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C003BF28 (SetWindowSubtreeCoreWindowStatus.c)
 *     SfnPOWERBROADCAST @ 0x1C0044700 (SfnPOWERBROADCAST.c)
 *     zzzCancelJournalling @ 0x1C004BD98 (zzzCancelJournalling.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C005B3C8 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C005B430 (xxxShowOwnedWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxEndPaint @ 0x1C005D6C0 (xxxEndPaint.c)
 *     xxxGetUpdateRgn @ 0x1C005D7A8 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C005E00C (xxxGetUpdateRect.c)
 *     xxxDWP_DoNCActivate @ 0x1C005E4B4 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00603D8 (xxxDWP_UpdateUIState.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C008CD2C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     DestroyWindowSmIcon @ 0x1C008E61C (DestroyWindowSmIcon.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C008EABC (xxxRemoveFullScreen.c)
 *     xxxDoPaint @ 0x1C0092318 (xxxDoPaint.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAD98 (xxxDCETrackCaptionButton.c)
 *     xxxSetShellWindow @ 0x1C00BF934 (xxxSetShellWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     SetDialogPointer @ 0x1C00EC160 (SetDialogPointer.c)
 *     PatchThreadWindows @ 0x1C00EC2E0 (PatchThreadWindows.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EFDB0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00EFF54 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ClrFTrueVis @ 0x1C00F0060 (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F0160 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSetScrollBar @ 0x1C00F0C18 (xxxSetScrollBar.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F76E0 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     _SelectPalette @ 0x1C00FCEA4 (_SelectPalette.c)
 *     xxxSendEraseBkgnd @ 0x1C00FFB34 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0106850 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SelectWindowRgn @ 0x1C0108600 (SelectWindowRgn.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0108724 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C010B970 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     xxxAddFullScreen @ 0x1C01192D4 (xxxAddFullScreen.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C011AD60 (NtUserEnableResizeLayoutSynchronization.c)
 *     xxxCreateWindowSmIcon @ 0x1C011B988 (xxxCreateWindowSmIcon.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C0124480 (NtUserSetChildWindowNoActivate.c)
 *     _RegisterShellHookWindow @ 0x1C0126240 (_RegisterShellHookWindow.c)
 *     SetWindowState @ 0x1C01268B0 (SetWindowState.c)
 *     ClearWindowState @ 0x1C0126910 (ClearWindowState.c)
 *     _DeregisterShellHookWindow @ 0x1C0126FF0 (_DeregisterShellHookWindow.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     VerifyChildMenu @ 0x1C0159748 (VerifyChildMenu.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D0EBC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01D2BE0 (_lambda_8abff167ce1c52ae97425dcc78c2cc12_--_lambda_invoker_cdecl_.c)
 *     ClrWFNoDwmNotify @ 0x1C01D7CA4 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01D7DE0 (SetMsgBox.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0209A6C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDisableImmersiveOwner @ 0x1C0209BA0 (xxxDisableImmersiveOwner.c)
 *     xxxSetBridgeWindowChild @ 0x1C0209BF0 (xxxSetBridgeWindowChild.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020C2A4 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     FreeSpb @ 0x1C021AD24 (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0235C68 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C023EF48 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C023F3F0 (xxxCompositedPaint.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0242A68 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0245DE4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245FD4 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C02466C4 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0248A20 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C025120C (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 */

char __fastcall SetOrClrWF(int a1, __int64 a2, unsigned __int16 a3, int a4)
{
  int v4; // ebp
  int v5; // edi
  int v6; // r14d
  _DWORD *v8; // rdx
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rax
  char v12; // r8
  int v13; // r8d
  int v14; // edx
  int v15; // ebx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  void *v18; // rax

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v8 = *(_DWORD **)(a2 + 40);
  if ( a4 )
  {
    v4 = v8[7];
    v5 = v8[6];
    v6 = v8[58];
  }
  v10 = (unsigned __int64)a3 >> 8;
  LOBYTE(v11) = *((_BYTE *)v8 + v10 + 16);
  if ( a1 )
    v12 = (unsigned __int8)v11 | a3;
  else
    v12 = (unsigned __int8)v11 & ~(_BYTE)a3;
  *((_BYTE *)v8 + v10 + 16) = v12;
  if ( a4 )
  {
    LODWORD(v11) = IsWindowDesktopComposed(a2);
    if ( (_DWORD)v11 )
    {
      v11 = *(_DWORD **)(a2 + 40);
      v13 = v11[7];
      v14 = v11[6];
      v15 = v11[58];
      if ( v4 != v13 )
        goto LABEL_12;
      if ( v5 == v14 && v6 == v15 )
        return (char)v11;
      if ( v4 == v13 )
      {
        if ( v5 == v14 )
        {
          LOBYTE(v11) = v6 ^ v15;
          if ( ((v6 ^ v15) & 0x2E00300) == 0 )
            return (char)v11;
          LODWORD(v11) = 1;
          goto LABEL_14;
        }
        v16 = (v5 ^ v14) & 0x4E27A9;
      }
      else
      {
LABEL_12:
        v16 = (v4 ^ v13) & 0xB1CF0000;
      }
      LODWORD(v11) = v16 != 0;
LABEL_14:
      if ( (_DWORD)v11 )
      {
        DirtyVisRgnTrackers(a2);
        v18 = (void *)ReferenceDwmApiPort(v17);
        LOBYTE(v11) = DwmAsyncChildStyleChange(v18);
      }
    }
  }
  return (char)v11;
}
