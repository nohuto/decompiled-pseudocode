/*
 * XREFs of HMValidateHandleNoSecure @ 0x1C007059C
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003798 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0003B90 (xxxRegisterGhostWindow.c)
 *     NtUserSetCoreWindowPartner @ 0x1C0004FB0 (NtUserSetCoreWindowPartner.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0008A94 (xxxHandleDestroyGhostWindow.c)
 *     UserGetMiniWinInfo @ 0x1C0008E9C (UserGetMiniWinInfo.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C000E4A8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     PWInsertAfter @ 0x1C0022C54 (PWInsertAfter.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0025B44 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C002BFF8 (xxxGetWindowSmIcon.c)
 *     _GhostWindowFromHungWindow @ 0x1C002C5D0 (_GhostWindowFromHungWindow.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C0035B10 (xxxBroadcastMessageEx.c)
 *     xxxSetCapture @ 0x1C0035F20 (xxxSetCapture.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0036D38 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00390C4 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C003BDB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00425BC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C0044700 (SfnPOWERBROADCAST.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0047690 (SfnGETDBCSTEXTLENGTHS.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00515B4 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C0053F8C (UserIsWindowOnDesktopAndComposed.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C0054838 (UserIsWindowWithNoRedirectionBitmap.c)
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxSetClipboardViewer @ 0x1C00567D0 (xxxSetClipboardViewer.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedWindows @ 0x1C005B430 (xxxShowOwnedWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00603D8 (xxxDWP_UpdateUIState.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006CE1C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C006DBA8 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006DC54 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006E75C (BuildWindowListWithDpiBoundaryInfo.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006F798 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006F908 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0072450 (GreUpdateSpriteVisRgn.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C008D87C (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00ADDCC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxWindowFromPoint @ 0x1C00B0884 (xxxWindowFromPoint.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00C0864 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 *     _HungWindowFromGhostWindow @ 0x1C00E79E8 (_HungWindowFromGhostWindow.c)
 *     NtUserQueryWindow @ 0x1C00E7A90 (NtUserQueryWindow.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2718 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDesktopRecalc @ 0x1C01057D8 (xxxDesktopRecalc.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010BA78 (UserDetachQueueFromInputWindow.c)
 *     AssociateInputContextEx @ 0x1C010F810 (AssociateInputContextEx.c)
 *     UserVisrgnFromHwnd @ 0x1C01136C4 (UserVisrgnFromHwnd.c)
 *     UserGetWindowRect @ 0x1C0114EF8 (UserGetWindowRect.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0116598 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C011A6C0 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C011ABE4 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserIsWindowDesktopComposed @ 0x1C0145C40 (UserIsWindowDesktopComposed.c)
 *     DestroyInputContext @ 0x1C014A8AC (DestroyInputContext.c)
 *     SfnOUTCBOXSTRING @ 0x1C014C580 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C014C6A0 (SfnOUTLBOXSTRING.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014F178 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C01505E0 (xxxArrangeIconicWindows.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D29D0 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 *     xxxInternalEnumWindow @ 0x1C01D2AE4 (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D6A70 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D7EF8 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D8204 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D862C (xxxRestoreMonitorsAndWindowsRects.c)
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1DB4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E32B4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E3450 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E4C88 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E4D7C (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E69BC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E6BA4 (xxxForceWindowToDpiForTest.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6D2C (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6EA4 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E72C4 (xxxCallJournalRecordHook.c)
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01E7D20 (-NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E7FA4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     DeleteFadeSprite @ 0x1C01E81C0 (DeleteFadeSprite.c)
 *     UserGetClientRgn @ 0x1C01E8FB8 (UserGetClientRgn.c)
 *     _GetPointerDeviceType @ 0x1C01EFBD8 (_GetPointerDeviceType.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01F0110 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0D78 (xxxRetrievePointerInputMessage.c)
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1894 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F1A80 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01F2B20 (PointerInfoCopyOutHelperInternal.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F3110 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F35D0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F3A78 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3D90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     _GetAltTabInfo @ 0x1C01F4638 (_GetAltTabInfo.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     GetInputTransformList @ 0x1C01F6370 (GetInputTransformList.c)
 *     HasInputTransform @ 0x1C01F63E0 (HasInputTransform.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F6980 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0209060 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C020933C (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C020AC04 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C020AD30 (xxxRegisterSiblingFrostWindow.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0213BD0 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0215E10 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     EditionPointerWindowHitTest @ 0x1C0217B70 (EditionPointerWindowHitTest.c)
 *     ValidatePointerOffset @ 0x1C0218090 (ValidatePointerOffset.c)
 *     _FreeGestureInfo @ 0x1C0228620 (_FreeGestureInfo.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02390A0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C0240E5C (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C02413A0 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C0241918 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 *     ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C0241A7C (-_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C0241C1C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     xxxMessageEvent @ 0x1C0248048 (xxxMessageEvent.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0248E20 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C02533D0 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C02556EC (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C02562E8 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02575E0 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
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
