/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C0014CC0 (xxxGetTitleBarInfoEx.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C002E8C8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C002F3C0 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0034BC0 (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C003510C (GetDPIMETRICSForDpi.c)
 *     xxxMenuBarCompute @ 0x1C003812C (xxxMenuBarCompute.c)
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C003AF80 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     NtUserInvalidateRect @ 0x1C00426F0 (NtUserInvalidateRect.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0055CC0 (TransformMessageBetweenCoordinateSpaces.c)
 *     cjCopyFontDataW @ 0x1C0059230 (cjCopyFontDataW.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00596F8 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C005D5F4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C005D630 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     NtUserGetScrollBarInfo @ 0x1C005E200 (NtUserGetScrollBarInfo.c)
 *     _SetWinEventHook @ 0x1C0076C94 (_SetWinEventHook.c)
 *     NtUserSetWindowPos @ 0x1C0092AC0 (NtUserSetWindowPos.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0093040 (NtUserDeferWindowPosAndBand.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00C0948 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C00F0690 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00F0890 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserGetMenuBarInfo @ 0x1C00F0C30 (NtUserGetMenuBarInfo.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00FE520 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 *     NtUserMoveWindow @ 0x1C01054A0 (NtUserMoveWindow.c)
 *     _GetMessagePos @ 0x1C0106FF0 (_GetMessagePos.c)
 *     InternalGetRealClientRect @ 0x1C01093C8 (InternalGetRealClientRect.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0109A78 (IsChildWindowDpiIsolationEnabled.c)
 *     NtUserGetUpdateRect @ 0x1C010F600 (NtUserGetUpdateRect.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 *     _GetPointerDeviceRects @ 0x1C011965C (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C0119754 (GetScreenRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C011B570 (NtUserGetWindowMinimizeRect.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C011B8B8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     NtUserGetComboBoxInfo @ 0x1C01482C0 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C0153EC0 (_ChildWindowFromPointEx.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0155E20 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C01561B8 (_GetOwnerTransformedMonitorRect.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B52C (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     _GetMouseMovePointsEx @ 0x1C01D977C (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E02F8 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E3BAC (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E4FB4 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E5AF4 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E61E4 (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01E8068 (zzzStartSonar.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F6604 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C01F89A0 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01FA570 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C01FF550 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01FFD00 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C0202F50 (NtUserSetWindowShowState.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020A710 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020C470 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CA90 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0233714 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02352B8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C0236B90 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     _RealChildWindowFromPoint @ 0x1C0248D8C (_RealChildWindowFromPoint.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 18;
  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v15);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return v2;
  }
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return v2;
  v10 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return v2;
  if ( *(_QWORD *)(v10 + 360) )
    CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
  if ( *(_DWORD *)(v10 + 340) )
  {
    v2 = *(_DWORD *)(v10 + 340);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7, v9);
    if ( CurrentProcessWin32Process )
      v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
  }
  result = v2;
  if ( (*(_DWORD *)(v10 + 328) & 4) != 0 )
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
