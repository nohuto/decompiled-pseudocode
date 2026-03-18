/*
 * XREFs of HMValidateHandleNoSecure @ 0x1C00B3898
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003638 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0003A30 (xxxRegisterGhostWindow.c)
 *     NtUserSetCoreWindowPartner @ 0x1C0004E50 (NtUserSetCoreWindowPartner.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0008A84 (xxxHandleDestroyGhostWindow.c)
 *     UserGetMiniWinInfo @ 0x1C0008E8C (UserGetMiniWinInfo.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C000BD94 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00133EC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxShowOwnedWindows @ 0x1C00187F4 (xxxShowOwnedWindows.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00197A8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002B484 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GhostWindowFromHungWindow @ 0x1C0038DE0 (_GhostWindowFromHungWindow.c)
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     xxxSetCapture @ 0x1C00393E0 (xxxSetCapture.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C003A14C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C003BF28 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0043840 (GreUpdateSpriteVisRgn.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0047020 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0047B84 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0047C30 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0048180 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00482A4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0048D78 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     SfnPOWERBROADCAST @ 0x1C00733C0 (SfnPOWERBROADCAST.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0077490 (SfnGETDBCSTEXTLENGTHS.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C007A5CC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C0080FC0 (UserIsWindowOnDesktopAndComposed.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0081358 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     UserGetWindowRect @ 0x1C008C7FC (UserGetWindowRect.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C009495C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C00C37C8 (xxxGetWindowSmIcon.c)
 *     _HungWindowFromGhostWindow @ 0x1C00C736C (_HungWindowFromGhostWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C7408 (xxxDWP_UpdateUIState.c)
 *     NtUserQueryWindow @ 0x1C00C8330 (NtUserQueryWindow.c)
 *     PWInsertAfter @ 0x1C00C9DA4 (PWInsertAfter.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C00D2B9C (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00ECF88 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00F661C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxWindowFromPoint @ 0x1C00F8B4C (xxxWindowFromPoint.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F9A00 (UpdateMonitorForWindowAndChildren.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F9B44 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxDoHotKeyStuff @ 0x1C0102160 (xxxDoHotKeyStuff.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C01045E8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDesktopRecalc @ 0x1C01066F8 (xxxDesktopRecalc.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010D5F8 (UserDetachQueueFromInputWindow.c)
 *     AssociateInputContextEx @ 0x1C01104F0 (AssociateInputContextEx.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C01109D0 (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserVisrgnFromHwnd @ 0x1C01145F4 (UserVisrgnFromHwnd.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0116BF4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0117AE8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C011B490 (xxxProcessSetWindowPosEvent.c)
 *     xxxSetClipboardViewer @ 0x1C0123180 (xxxSetClipboardViewer.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     UserIsWindowDesktopComposed @ 0x1C0148270 (UserIsWindowDesktopComposed.c)
 *     DestroyInputContext @ 0x1C014D0DC (DestroyInputContext.c)
 *     SfnOUTCBOXSTRING @ 0x1C014ED90 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C014EEB0 (SfnOUTLBOXSTRING.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01517B8 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0152DE0 (xxxArrangeIconicWindows.c)
 *     _FindWindowEx_Old @ 0x1C015C828 (_FindWindowEx_Old.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D1BC0 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 *     xxxInternalEnumWindow @ 0x1C01D1CD4 (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D5DB0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D7238 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D7544 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D796C (xxxRestoreMonitorsAndWindowsRects.c)
 *     _FreeTouchInputInfo @ 0x1C01DC3E0 (_FreeTouchInputInfo.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E10F4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E25F4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2790 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E3FC8 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E40BC (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5CFC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E5EE4 (xxxForceWindowToDpiForTest.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E606C (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E61E4 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E6604 (xxxCallJournalRecordHook.c)
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01E7060 (-NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E72E4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     DeleteFadeSprite @ 0x1C01E7500 (DeleteFadeSprite.c)
 *     UserGetClientRgn @ 0x1C01E82F8 (UserGetClientRgn.c)
 *     _GetPointerDeviceType @ 0x1C01EEF68 (_GetPointerDeviceType.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01EF4A0 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0108 (xxxRetrievePointerInputMessage.c)
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F0C24 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F0E10 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01F1EB0 (PointerInfoCopyOutHelperInternal.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F24A0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F2600 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2964 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F2E0C (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3124 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     _GetAltTabInfo @ 0x1C01F39C8 (_GetAltTabInfo.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     GetInputTransformList @ 0x1C01F5500 (GetInputTransformList.c)
 *     HasInputTransform @ 0x1C01F5570 (HasInputTransform.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F5B10 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C02081F0 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C02084CC (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C0209D84 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C0209EB0 (xxxRegisterSiblingFrostWindow.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0212D50 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0214F90 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     EditionPointerWindowHitTest @ 0x1C0216CE0 (EditionPointerWindowHitTest.c)
 *     ValidatePointerOffset @ 0x1C0217200 (ValidatePointerOffset.c)
 *     _FreeGestureInfo @ 0x1C0227790 (_FreeGestureInfo.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C023FBBC (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C0240100 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C0240678 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 *     ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C02407DC (-_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C024097C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     xxxMessageEvent @ 0x1C0246A98 (xxxMessageEvent.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0247870 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0251DC0 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C02540DC (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C0254CD8 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0255FD0 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateHandleNoSecure(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v16),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    PsGetThreadWin32Thread(CurrentThread);
  }
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v9 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v10 = a1 >> 16;
    v12 = HMPkheFromPhe(v9);
    if ( ((_WORD)v10 == *(_WORD *)(v9 + 26)
       || (_WORD)v10 == 0xFFFF
       || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v11))
      && (*(_BYTE *)(v9 + 25) & 1) == 0
      && *(_BYTE *)(v9 + 24) == a2 )
    {
      return *(_QWORD *)v12;
    }
  }
  return v5;
}
