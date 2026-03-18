/*
 * XREFs of _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960
 * Callers:
 *     _ClientLoadLibrary@8 @ 0x16A64 (_ClientLoadLibrary@8.c)
 *     _xxxClientLoadMenu@8 @ 0x16C34 (_xxxClientLoadMenu@8.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _NtUserCreateWindowEx@68 @ 0x4221A (_NtUserCreateWindowEx@68.c)
 *     _SfnINLPCREATESTRUCT@32 @ 0x448FE (_SfnINLPCREATESTRUCT@32.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _NtUserRegisterClassExWOW@28 @ 0x6F44C (_NtUserRegisterClassExWOW@28.c)
 *     _NtUserGetClassInfoEx@20 @ 0x802EC (_NtUserGetClassInfoEx@20.c)
 *     _SfnOUTSTRING@32 @ 0x9DE4E (_SfnOUTSTRING@32.c)
 *     _SfnCOPYDATA@32 @ 0xA297A (_SfnCOPYDATA@32.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     _SfnINSTRINGNULL@32 @ 0xA436C (_SfnINSTRINGNULL@32.c)
 *     _NtUserfnPOWERBROADCAST@28 @ 0xA47CC (_NtUserfnPOWERBROADCAST@28.c)
 *     _SfnPOWERBROADCAST@32 @ 0xA4C38 (_SfnPOWERBROADCAST@32.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxClientExtTextOutW@32 @ 0xBC862 (_xxxClientExtTextOutW@32.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _SfnINDEVICECHANGE@32 @ 0xC8560 (_SfnINDEVICECHANGE@32.c)
 *     _fnHkINLPCBTCREATESTRUCT@20 @ 0xC8910 (_fnHkINLPCBTCREATESTRUCT@20.c)
 *     _NtUserRegisterRawInputDevices@12 @ 0xC95A2 (_NtUserRegisterRawInputDevices@12.c)
 *     _NtUserfnINDEVICECHANGE@28 @ 0xCB608 (_NtUserfnINDEVICECHANGE@28.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _NtUserQueryInformationThread@16 @ 0xCF6D0 (_NtUserQueryInformationThread@16.c)
 *     _xxxRestoreDesktopsMonitorsAndWindowsRects@8 @ 0xD23F0 (_xxxRestoreDesktopsMonitorsAndWindowsRects@8.c)
 *     ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z @ 0xD6F2C (-xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z @ 0xD7046 (-xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z.c)
 *     _xxxClientAddFontResourceW@12 @ 0xD719A (_xxxClientAddFontResourceW@12.c)
 *     _xxxClientLoadImage@28 @ 0xD94BC (_xxxClientLoadImage@28.c)
 *     _xxxClientExpandStringW@4 @ 0xD97D4 (_xxxClientExpandStringW@4.c)
 *     _xxxClientLoadStringW@12 @ 0xD9AD4 (_xxxClientLoadStringW@12.c)
 *     ?xxxFreeImeKeyboardLayouts@@YGXPAUtagWINDOWSTATION@@@Z @ 0xE7294 (-xxxFreeImeKeyboardLayouts@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     _xxxImmLoadLayout@4 @ 0xEA0CC (_xxxImmLoadLayout@4.c)
 *     _EditionCreateWindowStationEntryPoint@32 @ 0xF228C (_EditionCreateWindowStationEntryPoint@32.c)
 *     _xxxGetDeviceChangeInfo@0 @ 0x14B4F7 (_xxxGetDeviceChangeInfo@0.c)
 *     _NtUserCtxDisplayIOCtl@12 @ 0x1609A0 (_NtUserCtxDisplayIOCtl@12.c)
 *     _NtUserDrawCaptionTemp@28 @ 0x161080 (_NtUserDrawCaptionTemp@28.c)
 *     _NtUserResolveDesktopForWOW@4 @ 0x168441 (_NtUserResolveDesktopForWOW@4.c)
 *     _NtUserfnIMECONTROL@28 @ 0x16B7D6 (_NtUserfnIMECONTROL@28.c)
 *     _NtUserfnINLPHLPSTRUCT@28 @ 0x16BDBE (_NtUserfnINLPHLPSTRUCT@28.c)
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     _xxxPointerWindowHitTest@48 @ 0x17C5CD (_xxxPointerWindowHitTest@48.c)
 *     _xxxDeferredDesktopRotation@0 @ 0x1815B6 (_xxxDeferredDesktopRotation@0.c)
 *     ?xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z @ 0x182AF1 (-xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z @ 0x182BFB (-xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z.c)
 *     _ClientEventCallback@8 @ 0x189761 (_ClientEventCallback@8.c)
 *     _ClientGetListboxString@36 @ 0x189964 (_ClientGetListboxString@36.c)
 *     _SfnCOPYGLOBALDATA@32 @ 0x18A2D8 (_SfnCOPYGLOBALDATA@32.c)
 *     _SfnGETDBCSTEXTLENGTHS@32 @ 0x18AAE2 (_SfnGETDBCSTEXTLENGTHS@32.c)
 *     _SfnIMECONTROL@32 @ 0x18B448 (_SfnIMECONTROL@32.c)
 *     _SfnINCNTOUTSTRING@32 @ 0x18BE0A (_SfnINCNTOUTSTRING@32.c)
 *     _SfnINCNTOUTSTRINGNULL@32 @ 0x18C3A4 (_SfnINCNTOUTSTRINGNULL@32.c)
 *     _SfnINLPHELPINFOSTRUCT@32 @ 0x18D261 (_SfnINLPHELPINFOSTRUCT@32.c)
 *     _SfnINLPHLPSTRUCT@32 @ 0x18D5F5 (_SfnINLPHLPSTRUCT@32.c)
 *     _SfnINLPKDRAWSWITCHWND@32 @ 0x18D98D (_SfnINLPKDRAWSWITCHWND@32.c)
 *     _SfnINLPMDICREATESTRUCT@32 @ 0x18DE71 (_SfnINLPMDICREATESTRUCT@32.c)
 *     _SfnINPGESTURENOTIFYSTRUCT@32 @ 0x18FA31 (_SfnINPGESTURENOTIFYSTRUCT@32.c)
 *     _SfnINSTRING@32 @ 0x19002A (_SfnINSTRING@32.c)
 *     _SfnPOPTINLPUINT@32 @ 0x191A41 (_SfnPOPTINLPUINT@32.c)
 *     _SfnPOUTLPINT@32 @ 0x191E47 (_SfnPOUTLPINT@32.c)
 *     _SfnTOUCHHITTESTING@32 @ 0x1927E2 (_SfnTOUCHHITTESTING@32.c)
 *     _xxxClientFindMnemChar@16 @ 0x19406B (_xxxClientFindMnemChar@16.c)
 *     _xxxClientLpkDrawTextEx@40 @ 0x1945DA (_xxxClientLpkDrawTextEx@40.c)
 *     _xxxClientPSMTextOut@24 @ 0x19495D (_xxxClientPSMTextOut@24.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _xxxCsEvent@8 @ 0x1A4AB1 (_xxxCsEvent@8.c)
 *     _xxxMessageEvent@24 @ 0x1A4CAC (_xxxMessageEvent@24.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 *     _xxxPSMGetTextExtent@16 @ 0x1B98EB (_xxxPSMGetTextExtent@16.c)
 * Callees:
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __stdcall PopAndFreeAlwaysW32ThreadLock(int a1)
{
  PKTHREAD CurrentThread; // edi
  int v2; // esi
  int *ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  *(_DWORD *)(v2 + 8) = *(_DWORD *)a1;
  return (*(int (__stdcall **)(_DWORD))(a1 + 8))(*(_DWORD *)(a1 + 4));
}
