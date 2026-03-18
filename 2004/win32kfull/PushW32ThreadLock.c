/*
 * XREFs of PushW32ThreadLock @ 0x1C001DE60
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C001DF70 (NtUserGetClassInfoEx.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxClientLoadMenu @ 0x1C0030C0C (xxxClientLoadMenu.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00313C8 (xxxCreateDefaultImeWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     xxxBroadcastMessageEx @ 0x1C0035B10 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     xxxSendMessageBSM @ 0x1C0036BC0 (xxxSendMessageBSM.c)
 *     NtUserSendInput @ 0x1C003A7E0 (NtUserSendInput.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     SfnCOPYDATA @ 0x1C00436E0 (SfnCOPYDATA.c)
 *     xxxClientLoadImage @ 0x1C0043B54 (xxxClientLoadImage.c)
 *     SfnINSTRINGNULL @ 0x1C0044240 (SfnINSTRINGNULL.c)
 *     SfnPOWERBROADCAST @ 0x1C0044700 (SfnPOWERBROADCAST.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0044BB8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     xxxClientAddFontResourceW @ 0x1C0044DA4 (xxxClientAddFontResourceW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0044FDC (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0046680 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0046A58 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0046CB0 (SfnINLPCREATESTRUCT.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0047690 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadStringW @ 0x1C00480B4 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C0048558 (xxxClientExpandStringW.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C004893C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C0048AD4 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0048C2C (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     NtUserSwitchDesktop @ 0x1C004A560 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0053808 (xxxSwitchDesktopWithFade.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0056400 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C00567D0 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C0056AE0 (xxxEmptyClipboard.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0056C74 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     NtUserGetClipboardData @ 0x1C0057340 (NtUserGetClipboardData.c)
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     xxxRemoveFullScreen @ 0x1C008EABC (xxxRemoveFullScreen.c)
 *     xxxDoPaint @ 0x1C0092318 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     NtUserCreateWindowEx @ 0x1C00A6060 (NtUserCreateWindowEx.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00B2E10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     NtUserQueryInformationThread @ 0x1C00BC350 (NtUserQueryInformationThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1C00C14E0 (EditionCreateWindowStationEntryPoint.c)
 *     xxxCreateWindowStation @ 0x1C00C1C7C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00F7EB0 (NtUserRegisterRawInputDevices.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F9270 (EditionHandleAndPostKeyEvent.c)
 *     xxxSetProcessWindowStation @ 0x1C00FBCB0 (xxxSetProcessWindowStation.c)
 *     xxxDesktopsRecalc @ 0x1C010575C (xxxDesktopsRecalc.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C01114C0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0115290 (NtUserfnINDEVICECHANGE.c)
 *     SfnINSTRING @ 0x1C0118960 (SfnINSTRING.c)
 *     xxxAddFullScreen @ 0x1C01192D4 (xxxAddFullScreen.c)
 *     xxxSendMinRectMessages @ 0x1C011A928 (xxxSendMinRectMessages.c)
 *     RemoteDisableScreen @ 0x1C011E640 (RemoteDisableScreen.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxWaitForInputIdle @ 0x1C0121F80 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C01220F4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0122570 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxImmLoadLayout @ 0x1C012414C (xxxImmLoadLayout.c)
 *     xxxConnectService @ 0x1C0124554 (xxxConnectService.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     xxxClientExtTextOutW @ 0x1C014B850 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C014C7B4 (ClientGetListboxString.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C014F270 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     xxxChangeClipboardChain @ 0x1C01511B0 (xxxChangeClipboardChain.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0155160 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C01551C4 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D2D5C (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D862C (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DC87C (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01DEC40 (xxxGetDeviceChangeInfo.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E69BC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1D44 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01F6A50 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01F83F0 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F8DA0 (NtUserDrawCaptionTemp.c)
 *     NtUserInjectTouchInput @ 0x1C01FE850 (NtUserInjectTouchInput.c)
 *     NtUserResolveDesktopForWOW @ 0x1C0201C80 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C02058C0 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C0206100 (NtUserfnINLPHLPSTRUCT.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020E07C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C0218754 (xxxPointerWindowHitTest.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0219E2C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021CB88 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxDeferredDesktopRotation @ 0x1C021F100 (xxxDeferredDesktopRotation.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021FFBC (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ClientEventCallback @ 0x1C0229288 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0229680 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0229FC0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C022AB60 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022B180 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022BDF0 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022C260 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022C6C0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022CC00 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022EA30 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C02301A0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0230660 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0231350 (SfnTOUCHHITTESTING.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0232A10 (xxxClientCopyDDEIn1.c)
 *     xxxClientFindMnemChar @ 0x1C0233290 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C023397C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233DE4 (xxxClientPSMTextOut.c)
 *     xxxHardErrorControl @ 0x1C0242CAC (xxxHardErrorControl.c)
 *     xxxCsEvent @ 0x1C0247DB8 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0248048 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024D214 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025F314 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0261844 (xxxPSMGetTextExtent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PushW32ThreadLock(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  result = *(_QWORD *)(v7 + 16);
  *a2 = result;
  *(_QWORD *)(v7 + 16) = a2;
  a2[2] = a3;
  a2[1] = a1;
  return result;
}
