/*
 * XREFs of _WPP_RECORDER_SF_@20 @ 0x1B668
 * Callers:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     ?CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z @ 0x19546 (-CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1A052 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1A0DC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     ?xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1AC7E (-xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     _CheckAllowForeground@4 @ 0x1AE3E (_CheckAllowForeground@4.c)
 *     ?InitMapSharedSection@@YGJPAU_EPROCESS@@PAU_USERCONNECT@@@Z @ 0x1B10E (-InitMapSharedSection@@YGJPAU_EPROCESS@@PAU_USERCONNECT@@@Z.c)
 *     _NtUserProcessConnect@8 @ 0x1B300 (_NtUserProcessConnect@8.c)
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 *     ?zzzSetCursorPos@@YG_NHH@Z @ 0x7C9A8 (-zzzSetCursorPos@@YG_NHH@Z.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _xxxConnectService@12 @ 0x8168A (_xxxConnectService@12.c)
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     _xxxFullScreenCleanup@0 @ 0xA7816 (_xxxFullScreenCleanup@0.c)
 *     _CancelForegroundActivate@0 @ 0xAC494 (_CancelForegroundActivate@0.c)
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     _NtUserSendInput@12 @ 0xAF922 (_NtUserSendInput@12.c)
 *     _xxxInternalKeyEventDirect@20 @ 0xAFD06 (_xxxInternalKeyEventDirect@20.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     ?TerminateDesktopThreads@@YGXXZ @ 0xCCBCA (-TerminateDesktopThreads@@YGXXZ.c)
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _xxxRemoteStopScreenUpdates@0 @ 0xD1646 (_xxxRemoteStopScreenUpdates@0.c)
 *     _RemoteDisableScreen@16 @ 0xD17D8 (_RemoteDisableScreen@16.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 *     _EditionUnloadCursorsAndIcons@0 @ 0xD301E (_EditionUnloadCursorsAndIcons@0.c)
 *     _EditionDeactivateMitInput@0 @ 0xD3BD6 (_EditionDeactivateMitInput@0.c)
 *     _InitClipFormatExceptionList@0 @ 0xE8670 (_InitClipFormatExceptionList@0.c)
 *     _NtUserAcquireIAMKey@4 @ 0xE87FA (_NtUserAcquireIAMKey@4.c)
 *     _InitClipboardILDef@0 @ 0xEB65C (_InitClipboardILDef@0.c)
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     _NtUserEnableIAMAccess@8 @ 0xF2AAE (_NtUserEnableIAMAccess@8.c)
 *     ?_LockSetForegroundWindow@@YGHI@Z @ 0x141663 (-_LockSetForegroundWindow@@YGHI@Z.c)
 *     __AllowForegroundActivation@0 @ 0x1420A9 (__AllowForegroundActivation@0.c)
 *     _zzzShowStartGlass@4 @ 0x142781 (_zzzShowStartGlass@4.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     __DelegateCapturePointers@8 @ 0x15A503 (__DelegateCapturePointers@8.c)
 *     ?ClearStaleEntries@@YGXPAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x15E31A (-ClearStaleEntries@@YGXPAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     _NtUserInjectTouchInput@8 @ 0x165800 (_NtUserInjectTouchInput@8.c)
 *     ?xxxMS_FlushWigglies@@YGXXZ @ 0x1746F4 (-xxxMS_FlushWigglies@@YGXXZ.c)
 *     ?Request@@YGKPAUtagDDECONV@@@Z @ 0x17EBEA (-Request@@YGKPAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YGKPAKPAUtagDDECONV@@@Z @ 0x17EC27 (-SpontaneousTerminate@@YGKPAKPAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YGKPAUtagDDECONV@@@Z @ 0x17EC69 (-Unadvise@@YGKPAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17ED57 (-xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EE02 (-xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7 (-xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F516 (-xxxDupConvTerminate@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F55E (-xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F68D (-xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F882 (-xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F9C5 (-xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FD40 (-xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 *     _RemoteRedrawRectangle@4 @ 0x1814F1 (_RemoteRedrawRectangle@4.c)
 *     _xxxbFullscreenSwitch@8 @ 0x181710 (_xxxbFullscreenSwitch@8.c)
 *     _CtxDisplayIOCtl@12 @ 0x1879E1 (_CtxDisplayIOCtl@12.c)
 *     _RemoteLogoff@0 @ 0x187A90 (_RemoteLogoff@0.c)
 *     _RemotePassthruDisable@0 @ 0x187AD9 (_RemotePassthruDisable@0.c)
 *     _RemoteShadowCleanup@8 @ 0x187B8D (_RemoteShadowCleanup@8.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 *     _RemoteThinwireStats@4 @ 0x187E11 (_RemoteThinwireStats@4.c)
 *     _xxxRemoteConsoleShadowStart@12 @ 0x187F2C (_xxxRemoteConsoleShadowStart@12.c)
 *     _xxxRemoteConsoleShadowStop@0 @ 0x1882F1 (_xxxRemoteConsoleShadowStop@0.c)
 *     _xxxRemotePassthruEnable@0 @ 0x188512 (_xxxRemotePassthruEnable@0.c)
 *     _xxxRemoteShadowSetup@0 @ 0x1885FB (_xxxRemoteShadowSetup@0.c)
 *     _xxxRemoteShadowStop@0 @ 0x188650 (_xxxRemoteShadowStop@0.c)
 *     _InitMessageTables@0 @ 0x292A20 (_InitMessageTables@0.c)
 *     _InitFunctionTables@0 @ 0x292F86 (_InitFunctionTables@0.c)
 *     _InitOLEFormats@0 @ 0x2930E4 (_InitOLEFormats@0.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for _WPP_RECORDER_SF_@20 @ 0x1B668
 * Reason: Hex-Rays returned no pseudocode for 0x1B668
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000001B668: mov     edi, edi
 * 000000000001B66A: push    ebp
 * 000000000001B66B: mov     ebp, esp
 * 000000000001B66D: push    ecx
 * 000000000001B66E: mov     eax, ?gFullLog@@3PAURECORDER_LOG__@@A; RECORDER_LOG__ * gFullLog
 * 000000000001B673: push    ebx
 * 000000000001B674: push    esi
 * 000000000001B675: push    edi
 * 000000000001B676: mov     edi, [ebp+arg_0]
 * 000000000001B679: mov     ebx, edx
 * 000000000001B67B: mov     [ebp+var_4], eax
 * 000000000001B67E: mov     edx, edi
 * 000000000001B680: shr     edx, 10h
 * 000000000001B683: imul    eax, edx, 0Eh
 * 000000000001B686: lea     esi, [edi-1]
 * 000000000001B689: shr     esi, 5
 * 000000000001B68C: lea     ecx, [edi-1]
 * 000000000001B68F: and     esi, 7FFh
 * 000000000001B695: and     ecx, 1Fh
 * 000000000001B698: add     esi, eax
 * 000000000001B69A: xor     eax, eax
 * 000000000001B69C: inc     eax
 * 000000000001B69D: shl     eax, cl
 * 000000000001B69F: mov     ecx, _WPP_GLOBAL_Control
 * 000000000001B6A5: test    [ecx+esi*4+20h], eax
 * 000000000001B6A9: jnz     loc_106C74
 * 000000000001B6AF: push    0
 * 000000000001B6B1: push    [ebp+arg_4]
 * 000000000001B6B4: push    [ebp+arg_8]
 * 000000000001B6B7: push    edi
 * 000000000001B6B8: push    ebx
 * 000000000001B6B9: push    [ebp+var_4]
 * 000000000001B6BC: call    ds:__imp__WppAutoLogTrace
 * 000000000001B6C2: add     esp, 18h
 * 000000000001B6C5: pop     edi
 * 000000000001B6C6: pop     esi
 * 000000000001B6C7: pop     ebx
 * 000000000001B6C8: leave
 * 000000000001B6C9: retn    0Ch
 * 0000000000106C74: imul    eax, edx, 38h ; '8'
 * 0000000000106C77: cmp     [eax+ecx+1Dh], bl
 * 0000000000106C7B: jb      loc_1B6AF
 * 0000000000106C81: push    0
 * 0000000000106C83: push    [ebp+arg_4]
 * 0000000000106C86: push    [ebp+arg_8]
 * 0000000000106C89: push    2Bh ; '+'
 * 0000000000106C8B: push    dword ptr [eax+ecx+14h]
 * 0000000000106C8F: push    dword ptr [eax+ecx+10h]
 * 0000000000106C93: call    _pfnWppTraceMessage
 * 0000000000106C99: add     esp, 18h
 * 0000000000106C9C: jmp     loc_1B6AF
 */
