/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C7F0 (EditionCreateWindowStationEntryPoint.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0022710 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00228B0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C0022A08 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
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
 *     NtUserCreateWindowEx @ 0x1C00B92A0 (NtUserCreateWindowEx.c)
 *     NtUserGetClassInfoEx @ 0x1C00B9B70 (NtUserGetClassInfoEx.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00BDD10 (EditionHandleAndPostKeyEvent.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00FF080 (NtUserRegisterRawInputDevices.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C01127F0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0116820 (NtUserfnINDEVICECHANGE.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C011A8C4 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1C01213A0 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     xxxImmLoadLayout @ 0x1C012543C (xxxImmLoadLayout.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     xxxClientExtTextOutW @ 0x1C014E060 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C014EFC4 (ClientGetListboxString.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0157AC0 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01DDF80 (xxxGetDeviceChangeInfo.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01F7580 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F7F30 (NtUserDrawCaptionTemp.c)
 *     NtUserResolveDesktopForWOW @ 0x1C0200E10 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C0204A50 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C0205290 (NtUserfnINLPHLPSTRUCT.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D1FC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C02178C4 (xxxPointerWindowHitTest.c)
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
 *     xxxClientFindMnemChar @ 0x1C0232400 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232AEC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232F54 (xxxClientPSMTextOut.c)
 *     xxxCsEvent @ 0x1C0246808 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0246A98 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BC0C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v11; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v11),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *(_QWORD *)(v3 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
