/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30
 * Callers:
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x1C0025880 (_MonitorFromPoint.c)
 *     NtUserGetScrollBarInfo @ 0x1C0026E90 (NtUserGetScrollBarInfo.c)
 *     _GetWindowPlacement @ 0x1C00278AC (_GetWindowPlacement.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C002A778 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C003B470 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C003D0D8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C003DBD0 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     _SetWinEventHook @ 0x1C0043FA4 (_SetWinEventHook.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C005D240 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     NtUserGetUpdateRect @ 0x1C005D940 (NtUserGetUpdateRect.c)
 *     xxxMenuBarCompute @ 0x1C005EE48 (xxxMenuBarCompute.c)
 *     GetDPIServerInfo @ 0x1C0060838 (GetDPIServerInfo.c)
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C0064724 (GetDPIMETRICSForDpi.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0064B10 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0069EC0 (NtUserSetWindowPos.c)
 *     NtUserInvalidateRect @ 0x1C0071290 (NtUserInvalidateRect.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0099FE0 (TransformMessageBetweenCoordinateSpaces.c)
 *     cjCopyFontDataW @ 0x1C009D550 (cjCopyFontDataW.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C009DA18 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00A1948 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00A1984 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     NtUserGetMenuBarInfo @ 0x1C00A3B70 (NtUserGetMenuBarInfo.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00A5910 (NtUserPhysicalToLogicalPoint.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0101DB0 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     InternalGetRealClientRect @ 0x1C0102D7C (InternalGetRealClientRect.c)
 *     NtUserMoveWindow @ 0x1C0104840 (NtUserMoveWindow.c)
 *     _GetMessagePos @ 0x1C0106D20 (_GetMessagePos.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0108A50 (IsChildWindowDpiIsolationEnabled.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C0108E00 (NtUserLogicalToPhysicalPoint.c)
 *     xxxSetWindowPlacement @ 0x1C0110D38 (xxxSetWindowPlacement.c)
 *     xxxGetTitleBarInfoEx @ 0x1C01124B4 (xxxGetTitleBarInfoEx.c)
 *     _GetPointerDeviceRects @ 0x1C011880C (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C0118904 (GetScreenRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C011A7A0 (NtUserGetWindowMinimizeRect.c)
 *     NtUserGetComboBoxInfo @ 0x1C0145C90 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C0151590 (_ChildWindowFromPointEx.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01534F0 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0153888 (_GetOwnerTransformedMonitorRect.c)
 *     _GetMouseMovePointsEx @ 0x1C01DA43C (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E0FB8 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E486C (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E5C74 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E67B4 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6EA4 (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01E8D28 (zzzStartSonar.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F7474 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C01F9810 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01FB3E0 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C02003C0 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C0200B70 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C0203DC0 (NtUserSetWindowShowState.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020B590 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020D2F0 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020D910 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C02345A4 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0236148 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C0237A20 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     _RealChildWindowFromPoint @ 0x1C024A33C (_RealChildWindowFromPoint.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C009B5D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 18;
  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v13);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return v2;
  }
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return v2;
  v8 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return v2;
  if ( *(_QWORD *)(v8 + 360) )
    CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
  if ( *(_DWORD *)(v8 + 340) )
  {
    v2 = *(_DWORD *)(v8 + 340);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
  }
  result = v2;
  if ( (*(_DWORD *)(v8 + 328) & 4) != 0 )
  {
    result = v2;
    if ( (v2 & 0xF) == 2 )
    {
      if ( (v2 & 0xF0) == 0x20 )
        v2 |= 0x20000000u;
      return v2;
    }
  }
  return result;
}
