/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00B1838
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0006E1C (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     CancelForegroundActivate @ 0x1C0025F90 (CancelForegroundActivate.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0028258 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     CheckAllowForeground @ 0x1C0028550 (CheckAllowForeground.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002C684 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002FDD8 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002FFBC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C00303A4 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     PostShellHookMessagesEx @ 0x1C0033A88 (PostShellHookMessagesEx.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     NtUserSendInput @ 0x1C003A7E0 (NtUserSendInput.c)
 *     xxxInternalKeyEventDirect @ 0x1C003AC50 (xxxInternalKeyEventDirect.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C003B2AC (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     NtUserEnableIAMAccess @ 0x1C0062800 (NtUserEnableIAMAccess.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B0CEC (xxxDCompSpeedHitTest.c)
 *     NtUserProcessConnect @ 0x1C00B1050 (NtUserProcessConnect.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00B1574 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00BFF3C (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00C02E4 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     EditionDeactivateMitInput @ 0x1C01035F0 (EditionDeactivateMitInput.c)
 *     UserJobCallout @ 0x1C0109910 (UserJobCallout.c)
 *     xxxFullScreenCleanup @ 0x1C0110080 (xxxFullScreenCleanup.c)
 *     xxxRemoteDisconnect @ 0x1C011E080 (xxxRemoteDisconnect.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C011E450 (xxxRemoteStopScreenUpdates.c)
 *     RemoteDisableScreen @ 0x1C011E640 (RemoteDisableScreen.c)
 *     EditionUnloadCursorsAndIcons @ 0x1C01219F0 (EditionUnloadCursorsAndIcons.c)
 *     InitClipFormatExceptionList @ 0x1C0123970 (InitClipFormatExceptionList.c)
 *     xxxConnectService @ 0x1C0124554 (xxxConnectService.c)
 *     NtUserAcquireIAMKey @ 0x1C0128E80 (NtUserAcquireIAMKey.c)
 *     InitClipboardILDef @ 0x1C0129280 (InitClipboardILDef.c)
 *     xxxRemoteReconnect @ 0x1C01541B0 (xxxRemoteReconnect.c)
 *     RemoteRedrawScreen @ 0x1C01551C4 (RemoteRedrawScreen.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D2C60 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     _AllowForegroundActivation @ 0x1C01D3A10 (_AllowForegroundActivation.c)
 *     zzzShowStartGlass @ 0x1C01D3CA0 (zzzShowStartGlass.c)
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EFD44 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01F0934 (_DelegateCapturePointers.c)
 *     NtUserInjectTouchInput @ 0x1C01FE850 (NtUserInjectTouchInput.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020F900 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C021BA34 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C021BAA0 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C021BB0C (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BCB8 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BDD0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BF18 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C190 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C7B0 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C834 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C9F0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CC5C (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CE00 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CF70 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021D260 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021D31C (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021D400 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021D734 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C021DACC (xxxDDETrackPostHook.c)
 *     RemoteRedrawRectangle @ 0x1C021EFCC (RemoteRedrawRectangle.c)
 *     xxxbFullscreenSwitch @ 0x1C021F2EC (xxxbFullscreenSwitch.c)
 *     CtxDisplayIOCtl @ 0x1C0226C44 (CtxDisplayIOCtl.c)
 *     RemoteLogoff @ 0x1C0226D60 (RemoteLogoff.c)
 *     RemotePassthruDisable @ 0x1C0226DE0 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0226EE0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02270B0 (RemoteShadowStart.c)
 *     RemoteThinwireStats @ 0x1C0227260 (RemoteThinwireStats.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C02273F0 (xxxRemoteConsoleShadowStart.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0227910 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0227C00 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0227D70 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0227DF0 (xxxRemoteShadowStop.c)
 *     InitMessageTables @ 0x1C0394BA0 (InitMessageTables.c)
 *     InitFunctionTables @ 0x1C0395680 (InitFunctionTables.c)
 *     InitOLEFormats @ 0x1C0395AF0 (InitOLEFormats.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C00B1838
 * Reason: Hex-Rays returned no pseudocode for 0x1C00B1838
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00B1838: mov     [rsp+arg_0], rbx
 * 00000001C00B183D: mov     [rsp+arg_8], rbp
 * 00000001C00B1842: mov     [rsp+arg_10], rsi
 * 00000001C00B1847: push    rdi
 * 00000001C00B1848: sub     rsp, 30h
 * 00000001C00B184C: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C00B1853: mov     esi, r8d
 * 00000001C00B1856: mov     r11d, r8d
 * 00000001C00B1859: shr     r11, 10h
 * 00000001C00B185D: movzx   edi, r9w
 * 00000001C00B1861: lea     r10d, [rsi-1]
 * 00000001C00B1865: movzx   ebx, dl
 * 00000001C00B1868: mov     ecx, r10d
 * 00000001C00B186B: and     r10d, 1Fh
 * 00000001C00B186F: shr     rcx, 5
 * 00000001C00B1873: lea     rax, [r11+r11*4]
 * 00000001C00B1877: and     ecx, 7FFh
 * 00000001C00B187D: lea     r9, [rcx+rax*4]
 * 00000001C00B1881: mov     ecx, r10d
 * 00000001C00B1884: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00B188B: mov     eax, [r10+r9*4+2Ch]
 * 00000001C00B1890: bt      eax, ecx
 * 00000001C00B1893: jb      loc_1C019979C
 * 00000001C00B1899: and     [rsp+38h+var_10], 0
 * 00000001C00B189F: mov     r8d, esi
 * 00000001C00B18A2: mov     r9, [rsp+38h+arg_20]
 * 00000001C00B18A7: mov     edx, ebx
 * 00000001C00B18A9: mov     rcx, rbp
 * 00000001C00B18AC: mov     word ptr [rsp+38h+var_18], di
 * 00000001C00B18B1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00B18B8: nop     dword ptr [rax+rax+00h]
 * 00000001C00B18BD: mov     rbx, [rsp+38h+arg_0]
 * 00000001C00B18C2: mov     rbp, [rsp+38h+arg_8]
 * 00000001C00B18C7: mov     rsi, [rsp+38h+arg_10]
 * 00000001C00B18CC: add     rsp, 30h
 * 00000001C00B18D0: pop     rdi
 * 00000001C00B18D1: retn
 * 00000001C019979C: lea     rcx, [r11+r11*4]
 * 00000001C01997A0: add     rcx, rcx
 * 00000001C01997A3: cmp     [r10+rcx*8+29h], bl
 * 00000001C01997A8: jb      loc_1C00B1899
 * 00000001C01997AE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01997B5: mov     r9d, edi
 * 00000001C01997B8: and     [rsp+38h+var_18], 0
 * 00000001C01997BE: mov     edx, 2Bh ; '+'
 * 00000001C01997C3: mov     r8, [rsp+38h+arg_20]
 * 00000001C01997C8: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01997CD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01997D3: nop
 * 00000001C01997D4: jmp     loc_1C00B1899
 */
