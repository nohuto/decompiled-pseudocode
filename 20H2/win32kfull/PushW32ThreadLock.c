/*
 * XREFs of PushW32ThreadLock @ 0x1C00B9AE0
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C7F0 (EditionCreateWindowStationEntryPoint.c)
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     xxxCloseClipboard @ 0x1C00165E0 (xxxCloseClipboard.c)
 *     NtUserGetClipboardData @ 0x1C0016EF0 (NtUserGetClipboardData.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0018F34 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageBSM @ 0x1C0019630 (xxxSendMessageBSM.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0022710 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00228B0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C0022A08 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     NtUserSwitchDesktop @ 0x1C0029790 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C003A14C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     xxxDoPaint @ 0x1C004DFE8 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0071090 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C00733C0 (SfnPOWERBROADCAST.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0073A7C (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     xxxClientAddFontResourceW @ 0x1C0073C68 (xxxClientAddFontResourceW.c)
 *     SfnINDEVICECHANGE @ 0x1C0075540 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0075918 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0075B70 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C0076660 (SfnINSTRINGNULL.c)
 *     xxxClientLoadImage @ 0x1C0077158 (xxxClientLoadImage.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0077490 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadMenu @ 0x1C0077E08 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C0078330 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C007880C (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C007A6A4 (xxxClientExpandStringW.c)
 *     SfnINSTRING @ 0x1C007B6F0 (SfnINSTRING.c)
 *     NtUserQueryInformationThread @ 0x1C007CC00 (NtUserQueryInformationThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserCreateWindowEx @ 0x1C00B92A0 (NtUserCreateWindowEx.c)
 *     NtUserGetClassInfoEx @ 0x1C00B9B70 (NtUserGetClassInfoEx.c)
 *     NtUserSendInput @ 0x1C00BA360 (NtUserSendInput.c)
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     LockW32Thread @ 0x1C00BAF00 (LockW32Thread.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00BC098 (xxxCreateDefaultImeWindow.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00BDD10 (EditionHandleAndPostKeyEvent.c)
 *     xxxRemoveFullScreen @ 0x1C00D3E5C (xxxRemoveFullScreen.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D73A0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     xxxSetProcessWindowStation @ 0x1C00F61A0 (xxxSetProcessWindowStation.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00FF080 (NtUserRegisterRawInputDevices.c)
 *     xxxDesktopsRecalc @ 0x1C010667C (xxxDesktopsRecalc.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C01127F0 (NtUserfnPOWERBROADCAST.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0114CC0 (xxxSwitchDesktopWithFade.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0116820 (NtUserfnINDEVICECHANGE.c)
 *     xxxAddFullScreen @ 0x1C0119DA4 (xxxAddFullScreen.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C011A378 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C011A730 (xxxEmptyClipboard.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C011A8C4 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSendMinRectMessages @ 0x1C011B6F8 (xxxSendMinRectMessages.c)
 *     RemoteDisableScreen @ 0x1C011FDA0 (RemoteDisableScreen.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     xxxSetClipboardViewer @ 0x1C0123180 (xxxSetClipboardViewer.c)
 *     xxxWaitForInputIdle @ 0x1C01232D0 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0123444 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxImmLoadLayout @ 0x1C012543C (xxxImmLoadLayout.c)
 *     xxxConnectService @ 0x1C0125844 (xxxConnectService.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     xxxClientExtTextOutW @ 0x1C014E060 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C014EFC4 (ClientGetListboxString.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01518B0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     xxxChangeClipboardChain @ 0x1C0153AE0 (xxxChangeClipboardChain.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0157AC0 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0157B24 (RemoteRedrawScreen.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D1F4C (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D796C (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DBBBC (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01DDF80 (xxxGetDeviceChangeInfo.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5CFC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F10D4 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01F5BE0 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01F7580 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F7F30 (NtUserDrawCaptionTemp.c)
 *     NtUserInjectTouchInput @ 0x1C01FD9E0 (NtUserInjectTouchInput.c)
 *     NtUserResolveDesktopForWOW @ 0x1C0200E10 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C0204A50 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C0205290 (NtUserfnINLPHLPSTRUCT.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D1FC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C02178C4 (xxxPointerWindowHitTest.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0218F9C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BCF8 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxDeferredDesktopRotation @ 0x1C021E270 (xxxDeferredDesktopRotation.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021F12C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ClientEventCallback @ 0x1C02283F8 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02287F0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0229130 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C0229CD0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022A2F0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022AF60 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022B3D0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B830 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022BD70 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022DBA0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C022F310 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C022F7D0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C02304C0 (SfnTOUCHHITTESTING.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0231B80 (xxxClientCopyDDEIn1.c)
 *     xxxClientFindMnemChar @ 0x1C0232400 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232AEC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232F54 (xxxClientPSMTextOut.c)
 *     xxxHardErrorControl @ 0x1C0241A0C (xxxHardErrorControl.c)
 *     xxxCsEvent @ 0x1C0246808 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0246A98 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BC0C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025DD00 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PushW32ThreadLock(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v9, v8, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v15),
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
