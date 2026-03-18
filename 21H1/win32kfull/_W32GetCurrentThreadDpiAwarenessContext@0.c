/*
 * XREFs of _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610
 * Callers:
 *     __SetWinEventHook@32 @ 0x148F0 (__SetWinEventHook@32.c)
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     _xxxDCEWindowHitTestIndirect@16 @ 0x262C0 (_xxxDCEWindowHitTestIndirect@16.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _NtUserSetWindowPos@28 @ 0x30082 (_NtUserSetWindowPos@28.c)
 *     _NtUserInvalidateRect@12 @ 0x330E8 (_NtUserInvalidateRect@12.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     ?bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z @ 0x6769C (-bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z.c)
 *     _NtUserGetTitleBarInfo@8 @ 0x67B20 (_NtUserGetTitleBarInfo@8.c)
 *     ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A (-bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z.c)
 *     ??0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z @ 0x680A0 (--0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z.c)
 *     _NtUserGetScrollBarInfo@12 @ 0x6C254 (_NtUserGetScrollBarInfo@12.c)
 *     _TransformMessageBetweenCoordinateSpaces@24 @ 0x6C458 (_TransformMessageBetweenCoordinateSpaces@24.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _NtUserDeferWindowPosAndBand@40 @ 0x749C8 (_NtUserDeferWindowPosAndBand@40.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?_GetCursorInfo@@YGXPAUtagCURSORINFO@@@Z @ 0x7F38E (-_GetCursorInfo@@YGXPAUtagCURSORINFO@@@Z.c)
 *     ?xxxGetCursorPos@@YGHPAUtagPOINT@@K@Z @ 0x7FA68 (-xxxGetCursorPos@@YGHPAUtagPOINT@@K@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _GetWindowNCMetrics@4 @ 0x91522 (_GetWindowNCMetrics@4.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 *     _NtUserMoveWindow@24 @ 0x99F8E (_NtUserMoveWindow@24.c)
 *     _InternalGetRealClientRect@20 @ 0xA23FA (_InternalGetRealClientRect@20.c)
 *     _NtUserGetUpdateRect@12 @ 0xA5990 (_NtUserGetUpdateRect@12.c)
 *     _NtUserGetWindowMinimizeRect@8 @ 0xA7B36 (_NtUserGetWindowMinimizeRect@8.c)
 *     _IsChildWindowDpiIsolationEnabled@8 @ 0xA8DE2 (_IsChildWindowDpiIsolationEnabled@8.c)
 *     __GetMessagePos@0 @ 0xA9662 (__GetMessagePos@0.c)
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YGKXZ @ 0xB49EE (-GetCurrentThreadCompositedDpiContext@@YGKXZ.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6 (-GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z.c)
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 *     _NtUserGetMenuBarInfo@16 @ 0xB7FC8 (_NtUserGetMenuBarInfo@16.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _GetDPIMetrics@0 @ 0xCCA30 (_GetDPIMetrics@0.c)
 *     _MNSetupAnimationDC@4 @ 0xD6DB0 (_MNSetupAnimationDC@4.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     _GetDPIServerInfo@0 @ 0xEC39A (_GetDPIServerInfo@0.c)
 *     __GetMouseMovePointsEx@16 @ 0x147FA4 (__GetMouseMovePointsEx@16.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     ?MiPConvertPoint@@YG?AUtagPOINT@@PBU1@@Z @ 0x14D3EC (-MiPConvertPoint@@YG-AUtagPOINT@@PBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z @ 0x1500CD (-TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z.c)
 *     _GetHimetricScaleForMonitor@12 @ 0x151143 (_GetHimetricScaleForMonitor@12.c)
 *     _VirtualizeMultiMonDigitizerSize@4 @ 0x151D24 (_VirtualizeMultiMonDigitizerSize@4.c)
 *     __GetOwnerTransformedMonitorRect@16 @ 0x151D96 (__GetOwnerTransformedMonitorRect@16.c)
 *     _xxxCallJournalPlaybackHook@4 @ 0x1527A2 (_xxxCallJournalPlaybackHook@4.c)
 *     _zzzStartSonar@0 @ 0x15406B (_zzzStartSonar@0.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 *     ?TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z @ 0x15F6FC (-TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z.c)
 *     _NtUserBitBltSysBmp@20 @ 0x15FB34 (_NtUserBitBltSysBmp@20.c)
 *     _NtUserGetAltTabInfo@24 @ 0x16194A (_NtUserGetAltTabInfo@24.c)
 *     _NtUserGetComboBoxInfo@8 @ 0x1625B6 (_NtUserGetComboBoxInfo@8.c)
 *     _NtUserGetMenuItemRect@16 @ 0x1637F2 (_NtUserGetMenuItemRect@16.c)
 *     _NtUserLogicalToPerMonitorDPIPhysicalPoint@8 @ 0x165DA7 (_NtUserLogicalToPerMonitorDPIPhysicalPoint@8.c)
 *     _NtUserLogicalToPhysicalPoint@8 @ 0x1660DB (_NtUserLogicalToPhysicalPoint@8.c)
 *     _NtUserMenuItemFromPoint@16 @ 0x166E46 (_NtUserMenuItemFromPoint@16.c)
 *     _NtUserPerMonitorDPIPhysicalToLogicalPoint@8 @ 0x167567 (_NtUserPerMonitorDPIPhysicalToLogicalPoint@8.c)
 *     _NtUserPhysicalToLogicalPoint@8 @ 0x16781D (_NtUserPhysicalToLogicalPoint@8.c)
 *     _NtUserSetWindowShowState@16 @ 0x16A34E (_NtUserSetWindowShowState@16.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x170EAA (-ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PA.c)
 *     ?VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x172710 (-VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     __ChildWindowFromPointEx@16 @ 0x17BE7F (__ChildWindowFromPointEx@16.c)
 *     ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F (-PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z.c)
 *     ?AdjustMouseCoordinates@@YGXPAUtagWND@@PAJ@Z @ 0x19515D (-AdjustMouseCoordinates@@YGXPAUtagWND@@PAJ@Z.c)
 *     ?MNCheckScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagMONITOR@@@Z @ 0x196697 (-MNCheckScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUt.c)
 *     ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B (-MNGetPopupBoundsRect@@YGXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     __EnablePerMonitorMenuScaling@0 @ 0x1978AC (__EnablePerMonitorMenuScaling@0.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     __RealChildWindowFromPoint@12 @ 0x1A6C64 (__RealChildWindowFromPoint@12.c)
 *     _xxxGetTitleBarInfoEx@8 @ 0x1A70D8 (_xxxGetTitleBarInfoEx@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 *     _MNEraseBackground@24 @ 0x1A98B1 (_MNEraseBackground@24.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 *     ?DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z @ 0x1B7EEA (-DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z.c)
 *     _IsSysFontAndDefaultMode@4 @ 0x1B847A (_IsSysFontAndDefaultMode@4.c)
 * Callees:
 *     _CaptureAndValidateUserModeDpiAwarenessContext@4 @ 0x6B7E0 (_CaptureAndValidateUserModeDpiAwarenessContext@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __stdcall W32GetCurrentThreadDpiAwarenessContext()
{
  int v0; // esi
  PKTHREAD CurrentThread; // edi
  _DWORD *ThreadWin32Thread; // eax
  int v3; // edi
  int CurrentProcessWin32Process; // eax

  v0 = 18;
  CurrentThread = KeGetCurrentThread();
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v3 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_DWORD *)(v3 + 204) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v3 + 192) )
        {
          v0 = *(_DWORD *)(v3 + 192);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          if ( CurrentProcessWin32Process )
            v0 = *(_DWORD *)(CurrentProcessWin32Process + 156);
        }
        if ( (*(_BYTE *)(v3 + 180) & 4) != 0 && (v0 & 0xF) == 2 && (v0 & 0xF0) == 0x20 )
          return v0 | 0x20000000;
      }
    }
  }
  return v0;
}
