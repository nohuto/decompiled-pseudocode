/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0040298
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0006CBC (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C000B46C (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000B814 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002B96C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002BACC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002CB24 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002CF0C (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C002D0F0 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C002E0F8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003B498 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     CheckAllowForeground @ 0x1C003B790 (CheckAllowForeground.c)
 *     CancelForegroundActivate @ 0x1C003E2C0 (CancelForegroundActivate.c)
 *     xxxDCompSpeedHitTest @ 0x1C003F74C (xxxDCompSpeedHitTest.c)
 *     NtUserProcessConnect @ 0x1C003FAB0 (NtUserProcessConnect.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C003FFD4 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserEnableIAMAccess @ 0x1C008EDD0 (NtUserEnableIAMAccess.c)
 *     NtUserSendInput @ 0x1C00BA360 (NtUserSendInput.c)
 *     xxxInternalKeyEventDirect @ 0x1C00BA7D0 (xxxInternalKeyEventDirect.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00BF158 (PostShellHookMessagesEx.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00D799C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     EditionDeactivateMitInput @ 0x1C0103CF0 (EditionDeactivateMitInput.c)
 *     UserJobCallout @ 0x1C010AAA0 (UserJobCallout.c)
 *     xxxFullScreenCleanup @ 0x1C0111200 (xxxFullScreenCleanup.c)
 *     xxxRemoteDisconnect @ 0x1C011F7E0 (xxxRemoteDisconnect.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C011FBB0 (xxxRemoteStopScreenUpdates.c)
 *     RemoteDisableScreen @ 0x1C011FDA0 (RemoteDisableScreen.c)
 *     EditionUnloadCursorsAndIcons @ 0x1C0122960 (EditionUnloadCursorsAndIcons.c)
 *     InitClipFormatExceptionList @ 0x1C0124C60 (InitClipFormatExceptionList.c)
 *     xxxConnectService @ 0x1C0125844 (xxxConnectService.c)
 *     NtUserAcquireIAMKey @ 0x1C012AE80 (NtUserAcquireIAMKey.c)
 *     InitClipboardILDef @ 0x1C012B2D0 (InitClipboardILDef.c)
 *     xxxRemoteReconnect @ 0x1C0156B10 (xxxRemoteReconnect.c)
 *     RemoteRedrawScreen @ 0x1C0157B24 (RemoteRedrawScreen.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D1E50 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     _AllowForegroundActivation @ 0x1C01D2C00 (_AllowForegroundActivation.c)
 *     zzzShowStartGlass @ 0x1C01D2E90 (zzzShowStartGlass.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF0D4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01EFCC4 (_DelegateCapturePointers.c)
 *     NtUserInjectTouchInput @ 0x1C01FD9E0 (NtUserInjectTouchInput.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020EA80 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C021ABA4 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C021AC10 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C021AC7C (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021AE28 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021AF40 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B088 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B300 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B920 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B9A4 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BB60 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BDCC (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BF70 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C0E0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C3D0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C48C (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C570 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C8A4 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C021CC3C (xxxDDETrackPostHook.c)
 *     RemoteRedrawRectangle @ 0x1C021E13C (RemoteRedrawRectangle.c)
 *     xxxbFullscreenSwitch @ 0x1C021E45C (xxxbFullscreenSwitch.c)
 *     CtxDisplayIOCtl @ 0x1C0225DB4 (CtxDisplayIOCtl.c)
 *     RemoteLogoff @ 0x1C0225ED0 (RemoteLogoff.c)
 *     RemotePassthruDisable @ 0x1C0225F50 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0226050 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0226220 (RemoteShadowStart.c)
 *     RemoteThinwireStats @ 0x1C02263D0 (RemoteThinwireStats.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C0226560 (xxxRemoteConsoleShadowStart.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0226A80 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0226D70 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0226EE0 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0226F60 (xxxRemoteShadowStop.c)
 *     InitMessageTables @ 0x1C0393BA0 (InitMessageTables.c)
 *     InitFunctionTables @ 0x1C0394680 (InitFunctionTables.c)
 *     InitOLEFormats @ 0x1C0394AF0 (InitOLEFormats.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0040298
 * Reason: Hex-Rays returned no pseudocode for 0x1C0040298
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0040298: mov     [rsp+arg_0], rbx
 * 00000001C004029D: mov     [rsp+arg_8], rbp
 * 00000001C00402A2: mov     [rsp+arg_10], rsi
 * 00000001C00402A7: push    rdi
 * 00000001C00402A8: sub     rsp, 30h
 * 00000001C00402AC: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C00402B3: mov     esi, r8d
 * 00000001C00402B6: mov     r11d, r8d
 * 00000001C00402B9: shr     r11, 10h
 * 00000001C00402BD: movzx   edi, r9w
 * 00000001C00402C1: lea     r10d, [rsi-1]
 * 00000001C00402C5: movzx   ebx, dl
 * 00000001C00402C8: mov     ecx, r10d
 * 00000001C00402CB: and     r10d, 1Fh
 * 00000001C00402CF: shr     rcx, 5
 * 00000001C00402D3: lea     rax, [r11+r11*4]
 * 00000001C00402D7: and     ecx, 7FFh
 * 00000001C00402DD: lea     r9, [rcx+rax*4]
 * 00000001C00402E1: mov     ecx, r10d
 * 00000001C00402E4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00402EB: mov     eax, [r10+r9*4+2Ch]
 * 00000001C00402F0: bt      eax, ecx
 * 00000001C00402F3: jb      loc_1C01744FC
 * 00000001C00402F9: and     [rsp+38h+var_10], 0
 * 00000001C00402FF: mov     r8d, esi
 * 00000001C0040302: mov     r9, [rsp+38h+arg_20]
 * 00000001C0040307: mov     edx, ebx
 * 00000001C0040309: mov     rcx, rbp
 * 00000001C004030C: mov     word ptr [rsp+38h+var_18], di
 * 00000001C0040311: call    cs:__imp_WppAutoLogTrace
 * 00000001C0040318: nop     dword ptr [rax+rax+00h]
 * 00000001C004031D: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0040322: mov     rbp, [rsp+38h+arg_8]
 * 00000001C0040327: mov     rsi, [rsp+38h+arg_10]
 * 00000001C004032C: add     rsp, 30h
 * 00000001C0040330: pop     rdi
 * 00000001C0040331: retn
 * 00000001C01744FC: lea     rcx, [r11+r11*4]
 * 00000001C0174500: add     rcx, rcx
 * 00000001C0174503: cmp     [r10+rcx*8+29h], bl
 * 00000001C0174508: jb      loc_1C00402F9
 * 00000001C017450E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174515: mov     r9d, edi
 * 00000001C0174518: and     [rsp+38h+var_18], 0
 * 00000001C017451E: mov     edx, 2Bh ; '+'
 * 00000001C0174523: mov     r8, [rsp+38h+arg_20]
 * 00000001C0174528: mov     rcx, [r10+rcx*8+18h]
 * 00000001C017452D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0174533: nop
 * 00000001C0174534: jmp     loc_1C00402F9
 */
