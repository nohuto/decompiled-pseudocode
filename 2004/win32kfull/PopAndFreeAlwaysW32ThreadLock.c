/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C001DF70 (NtUserGetClassInfoEx.c)
 *     xxxClientLoadMenu @ 0x1C0030C0C (xxxClientLoadMenu.c)
 *     xxxBroadcastMessageEx @ 0x1C0035B10 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
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
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0056C74 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     NtUserCreateWindowEx @ 0x1C00A6060 (NtUserCreateWindowEx.c)
 *     NtUserQueryInformationThread @ 0x1C00BC350 (NtUserQueryInformationThread.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1C00C14E0 (EditionCreateWindowStationEntryPoint.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00F7EB0 (NtUserRegisterRawInputDevices.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F9270 (EditionHandleAndPostKeyEvent.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C01114C0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0115290 (NtUserfnINDEVICECHANGE.c)
 *     SfnINSTRING @ 0x1C0118960 (SfnINSTRING.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1C011FF70 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxImmLoadLayout @ 0x1C012414C (xxxImmLoadLayout.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     xxxClientExtTextOutW @ 0x1C014B850 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C014C7B4 (ClientGetListboxString.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0155160 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01DEC40 (xxxGetDeviceChangeInfo.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01F83F0 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F8DA0 (NtUserDrawCaptionTemp.c)
 *     NtUserResolveDesktopForWOW @ 0x1C0201C80 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C02058C0 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C0206100 (NtUserfnINLPHLPSTRUCT.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020E07C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C0218754 (xxxPointerWindowHitTest.c)
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
 *     xxxClientFindMnemChar @ 0x1C0233290 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C023397C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233DE4 (xxxClientPSMTextOut.c)
 *     xxxCsEvent @ 0x1C0247DB8 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0248048 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024D214 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0261844 (xxxPSMGetTextExtent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *(_QWORD *)(v3 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
