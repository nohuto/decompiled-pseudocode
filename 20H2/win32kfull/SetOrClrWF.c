/*
 * XREFs of SetOrClrWF @ 0x1C00CB5EC
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D1C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetModernAppWindow @ 0x1C00058A0 (xxxSetModernAppWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     NtUserSetCoreWindow @ 0x1C0012C90 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C001355C (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C001878C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00187F4 (xxxShowOwnedWindows.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C001AB6C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C001AD10 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ClrFTrueVis @ 0x1C001AE1C (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C001AF20 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     zzzCancelJournalling @ 0x1C002A378 (zzzCancelJournalling.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C002B4F4 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D294 (xxxInitSendValidateMinMaxInfoEx.c)
 *     InternalInvalidate3 @ 0x1C0044D64 (InternalInvalidate3.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C004BFD0 (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     xxxDoPaint @ 0x1C004DFE8 (xxxDoPaint.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     SfnPOWERBROADCAST @ 0x1C00733C0 (SfnPOWERBROADCAST.c)
 *     xxxDWP_DoNCActivate @ 0x1C00792C4 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     xxxCreateWindowSmIcon @ 0x1C007A488 (xxxCreateWindowSmIcon.c)
 *     xxxDCETrackCaptionButton @ 0x1C007C730 (xxxDCETrackCaptionButton.c)
 *     xxxSetShellWindow @ 0x1C007FB34 (xxxSetShellWindow.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     SetHungFlag @ 0x1C00BF4E0 (SetHungFlag.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00C0444 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     UnsetLayeredWindow @ 0x1C00C0BC4 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     ImeSetTopmost @ 0x1C00C5328 (ImeSetTopmost.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C7408 (xxxDWP_UpdateUIState.c)
 *     SelectWindowRgn @ 0x1C00C7B7C (SelectWindowRgn.c)
 *     SetWindowGroupBand @ 0x1C00C8B50 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00D204C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     DestroyWindowSmIcon @ 0x1C00D39BC (DestroyWindowSmIcon.c)
 *     xxxCheckFullScreen @ 0x1C00D3A38 (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C00D3E5C (xxxRemoveFullScreen.c)
 *     SetDialogPointer @ 0x1C00E87B0 (SetDialogPointer.c)
 *     PatchThreadWindows @ 0x1C00E8950 (PatchThreadWindows.c)
 *     xxxSetScrollBar @ 0x1C00EBA98 (xxxSetScrollBar.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F31AC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxEndPaint @ 0x1C00F4F60 (xxxEndPaint.c)
 *     _SelectPalette @ 0x1C00F7F64 (_SelectPalette.c)
 *     xxxSendEraseBkgnd @ 0x1C00FBE64 (xxxSendEraseBkgnd.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C01045E8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxGetUpdateRgn @ 0x1C0105D24 (xxxGetUpdateRgn.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0106AE0 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxGetUpdateRect @ 0x1C010F7E0 (xxxGetUpdateRect.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0113A3C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     xxxAddFullScreen @ 0x1C0119DA4 (xxxAddFullScreen.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C011B960 (NtUserEnableResizeLayoutSynchronization.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C0125770 (NtUserSetChildWindowNoActivate.c)
 *     _RegisterShellHookWindow @ 0x1C0127B40 (_RegisterShellHookWindow.c)
 *     SetWindowState @ 0x1C0128210 (SetWindowState.c)
 *     ClearWindowState @ 0x1C0128270 (ClearWindowState.c)
 *     _DeregisterShellHookWindow @ 0x1C01289B0 (_DeregisterShellHookWindow.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     VerifyChildMenu @ 0x1C015CFE0 (VerifyChildMenu.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D00AC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01D1DD0 (_lambda_8abff167ce1c52ae97425dcc78c2cc12_--_lambda_invoker_cdecl_.c)
 *     ClrWFNoDwmNotify @ 0x1C01D6FE4 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01D7120 (SetMsgBox.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0208BFC (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDisableImmersiveOwner @ 0x1C0208D18 (xxxDisableImmersiveOwner.c)
 *     xxxSetBridgeWindowChild @ 0x1C0208D68 (xxxSetBridgeWindowChild.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B424 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     FreeSpb @ 0x1C0219E94 (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0234DD8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C023DCA8 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C023E150 (xxxCompositedPaint.c)
 *     xxxRedrawHungWindow @ 0x1C0240E74 (xxxRedrawHungWindow.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C02417C8 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244B44 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244D34 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0245424 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0247470 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
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
