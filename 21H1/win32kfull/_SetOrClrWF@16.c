/*
 * XREFs of _SetOrClrWF@16 @ 0x1B9C0
 * Callers:
 *     _xxxAddFullScreen@4 @ 0x12380 (_xxxAddFullScreen@4.c)
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     _xxxCreateWindowSmIcon@12 @ 0x13138 (_xxxCreateWindowSmIcon@12.c)
 *     _SetHungFlag@8 @ 0x17252 (_SetHungFlag@8.c)
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z @ 0x18A7C (-xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z.c)
 *     ?SetTopmost@@YGXPAUtagWND@@HH@Z @ 0x19066 (-SetTopmost@@YGXPAUtagWND@@HH@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSwpActivate@@YGHPAUtagWND@@@Z @ 0x1A230 (-xxxSwpActivate@@YGHPAUtagWND@@@Z.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     _ImeSetTopmost@12 @ 0x1C212 (_ImeSetTopmost@12.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _ClrFTrueVis@4 @ 0x1CDFA (_ClrFTrueVis@4.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxDoPaint@8 @ 0x6BD40 (_xxxDoPaint@8.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 *     _DestroyWindowSmIcon@4 @ 0x71B5C (_DestroyWindowSmIcon@4.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     _xxxRemoveFullScreen@4 @ 0x7202E (_xxxRemoveFullScreen@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxDW_SendDestroyMessages@4 @ 0x72C7C (_xxxDW_SendDestroyMessages@4.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     ?DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z @ 0x739C0 (-DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z.c)
 *     ?GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z @ 0x73A88 (-GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z.c)
 *     _xxxSendEraseBkgnd@12 @ 0x73B52 (_xxxSendEraseBkgnd@12.c)
 *     ?xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x73CC0 (-xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     __RegisterShellHookWindow@4 @ 0x8116A (__RegisterShellHookWindow@4.c)
 *     __DeregisterShellHookWindow@4 @ 0x821A4 (__DeregisterShellHookWindow@4.c)
 *     _PatchThreadWindows@4 @ 0x8AED0 (_PatchThreadWindows@4.c)
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWINDOW_GROUP_ID@@PAUtagRECT@@@Z @ 0x9267C (-xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWIND.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _NtUserSetCoreWindow@8 @ 0xA22FE (_NtUserSetCoreWindow@8.c)
 *     _SetWindowSubtreeCoreWindowStatus@8 @ 0xA2352 (_SetWindowSubtreeCoreWindowStatus@8.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 *     _SfnPOWERBROADCAST@32 @ 0xA4C38 (_SfnPOWERBROADCAST@32.c)
 *     _xxxDWP_UpdateUIState@12 @ 0xA50F8 (_xxxDWP_UpdateUIState@12.c)
 *     _xxxGetUpdateRect@12 @ 0xA5AFE (_xxxGetUpdateRect@12.c)
 *     _SetDialogPointer@8 @ 0xA756E (_SetDialogPointer@8.c)
 *     _NtUserEnableResizeLayoutSynchronization@8 @ 0xAB2C0 (_NtUserEnableResizeLayoutSynchronization@8.c)
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _SetMinimize@8 @ 0xB4ABE (_SetMinimize@8.c)
 *     _xxxShowOwnedWindows@12 @ 0xB4B0A (_xxxShowOwnedWindows@12.c)
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _xxxGetUpdateRgn@12 @ 0xC3C20 (_xxxGetUpdateRgn@12.c)
 *     ?xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z @ 0xC3D5A (-xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _xxxSetShellWindow@8 @ 0xE0F54 (_xxxSetShellWindow@8.c)
 *     _NtUserSetChildWindowNoActivate@4 @ 0xE3D4A (_NtUserSetChildWindowNoActivate@4.c)
 *     _lambda_c6c683bb3ef0b8db0ab8f2e512d84d3d_::_lambda_invoker_stdcall_ @ 0xEF800 (_lambda_c6c683bb3ef0b8db0ab8f2e512d84d3d_--_lambda_invoker_stdcall_.c)
 *     _VerifyChildMenu@8 @ 0xF4F5A (_VerifyChildMenu@8.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     _ClrWF@8 @ 0x140084 (_ClrWF@8.c)
 *     _SetWF@8 @ 0x1401CD (_SetWF@8.c)
 *     _ClrWFNoDwmNotify@8 @ 0x145BAC (_ClrWFNoDwmNotify@8.c)
 *     _SetMsgBox@4 @ 0x145C45 (_SetMsgBox@4.c)
 *     _SetWFNoDwmNotify@8 @ 0x145C6B (_SetWFNoDwmNotify@8.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z @ 0x16F307 (-xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z.c)
 *     _xxxDisableImmersiveOwner@4 @ 0x16F409 (_xxxDisableImmersiveOwner@4.c)
 *     _xxxSetBridgeWindowChild@8 @ 0x16F43B (_xxxSetBridgeWindowChild@8.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z @ 0x1719C0 (-MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 *     ?PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z @ 0x196427 (-PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxUpdateShadowZorder@4 @ 0x19D563 (_xxxUpdateShadowZorder@4.c)
 *     _xxxCompositedPaint@4 @ 0x19D911 (_xxxCompositedPaint@4.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z @ 0x19FDC6 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z.c)
 *     _ClearWindowState@8 @ 0x1A01A5 (_ClearWindowState@8.c)
 *     _SetWindowState@8 @ 0x1A01E8 (_SetWindowState@8.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 *     ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2 (-xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 */

unsigned int __fastcall SetOrClrWF(int a1, int a2, unsigned __int16 a3, int a4)
{
  int v4; // esi
  int v6; // edi
  _DWORD *v8; // edx
  unsigned __int16 v9; // ax
  unsigned int result; // eax
  char v11; // dl
  char v12; // cl
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // esi
  unsigned int v17; // edi
  int v19; // [esp+14h] [ebp-4h]
  unsigned int v20; // [esp+20h] [ebp+8h]

  v4 = a4;
  v6 = 0;
  v8 = *(_DWORD **)(a2 + 20);
  v9 = a3;
  v20 = 0;
  v19 = 0;
  if ( a4 )
  {
    v6 = v8[4];
    v20 = v8[5];
    v4 = a4;
    v19 = v8[36];
    v9 = a3;
  }
  result = (unsigned int)v8 + HIBYTE(v9);
  v11 = *(_BYTE *)(result + 8);
  if ( a1 )
    v12 = v11 | a3;
  else
    v12 = v11 & ~(_BYTE)a3;
  *(_BYTE *)(result + 8) = v12;
  if ( v4 )
  {
    result = IsWindowDesktopComposed(a2);
    if ( result )
    {
      v13 = *(_DWORD **)(a2 + 20);
      v14 = v13[5];
      v15 = v13[4];
      v16 = v13[36];
      result = v20;
      if ( v20 != v14 )
        goto LABEL_12;
      if ( v6 != v15 || v19 != v16 )
      {
        if ( v20 == v14 )
        {
          if ( v6 == v15 )
          {
            result = v19 ^ v16;
            if ( ((v19 ^ v16) & 0x2E00300) == 0 )
              return result;
            v17 = -268435456;
            goto LABEL_19;
          }
          result = (v6 ^ v15) & 0x4E27A9;
          v17 = result != 0 ? 0xFFFFFFEC : 0;
          v16 = result != 0 ? v15 : 0;
LABEL_15:
          if ( !result )
            return result;
LABEL_19:
          DirtyVisRgnTrackers(a2);
          ReferenceDwmApiPort();
          return DwmAsyncChildStyleChange(v17, v16);
        }
LABEL_12:
        result = (v20 ^ v14) & 0xB1CF0000;
        v17 = result != 0 ? 0xFFFFFFF0 : 0;
        v16 = result != 0 ? v14 : 0;
        goto LABEL_15;
      }
    }
  }
  return result;
}
