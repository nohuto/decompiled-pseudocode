/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C003EC50
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000F220 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002B96C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002CF0C (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     CancelForegroundActivate @ 0x1C003E2C0 (CancelForegroundActivate.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C003E904 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C003FFD4 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00D799C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     UserJobCallout @ 0x1C010AAA0 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C010AC60 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C010ACE4 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C010B000 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C01177E0 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C011B100 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D1E50 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     zzzShowStartGlass @ 0x1C01D2E90 (zzzShowStartGlass.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020F6A4 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021ACE8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B300 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C021B71C (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B9A4 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021BC98 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BCF8 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C021C840 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C8A4 (xxxDDETrackGetMessageHook.c)
 *     xxxFreeDdeConv @ 0x1C021D2F8 (xxxFreeDdeConv.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023D2AC (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023D34C (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023D3A8 (_anonymous_namespace_--WindowSizingUpdate.c)
 *     xxxHardErrorControl @ 0x1C0241A0C (xxxHardErrorControl.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C003EC50
 * Reason: Hex-Rays returned no pseudocode for 0x1C003EC50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003EC50: mov     [rsp+arg_0], rbx
 * 00000001C003EC55: mov     [rsp+arg_8], rbp
 * 00000001C003EC5A: mov     [rsp+arg_10], rsi
 * 00000001C003EC5F: push    rdi
 * 00000001C003EC60: sub     rsp, 40h
 * 00000001C003EC64: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C003EC6B: mov     esi, r8d
 * 00000001C003EC6E: mov     r11d, r8d
 * 00000001C003EC71: shr     r11, 10h
 * 00000001C003EC75: movzx   edi, r9w
 * 00000001C003EC79: lea     r10d, [rsi-1]
 * 00000001C003EC7D: movzx   ebx, dl
 * 00000001C003EC80: mov     ecx, r10d
 * 00000001C003EC83: and     r10d, 1Fh
 * 00000001C003EC87: shr     rcx, 5
 * 00000001C003EC8B: lea     rax, [r11+r11*4]
 * 00000001C003EC8F: and     ecx, 7FFh
 * 00000001C003EC95: lea     r9, [rcx+rax*4]
 * 00000001C003EC99: mov     ecx, r10d
 * 00000001C003EC9C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C003ECA3: mov     eax, [r10+r9*4+2Ch]
 * 00000001C003ECA8: bt      eax, ecx
 * 00000001C003ECAB: jb      loc_1C0174034
 * 00000001C003ECB1: and     [rsp+48h+var_10], 0
 * 00000001C003ECB7: lea     rax, [rsp+48h+arg_28]
 * 00000001C003ECBC: mov     r9, [rsp+48h+arg_20]
 * 00000001C003ECC1: mov     r8d, esi
 * 00000001C003ECC4: mov     [rsp+48h+var_18], 8
 * 00000001C003ECCD: mov     edx, ebx
 * 00000001C003ECCF: mov     [rsp+48h+var_20], rax
 * 00000001C003ECD4: mov     rcx, rbp
 * 00000001C003ECD7: mov     word ptr [rsp+48h+var_28], di
 * 00000001C003ECDC: call    cs:__imp_WppAutoLogTrace
 * 00000001C003ECE3: nop     dword ptr [rax+rax+00h]
 * 00000001C003ECE8: mov     rbx, [rsp+48h+arg_0]
 * 00000001C003ECED: mov     rbp, [rsp+48h+arg_8]
 * 00000001C003ECF2: mov     rsi, [rsp+48h+arg_10]
 * 00000001C003ECF7: add     rsp, 40h
 * 00000001C003ECFB: pop     rdi
 * 00000001C003ECFC: retn
 * 00000001C0174034: lea     rcx, [r11+r11*4]
 * 00000001C0174038: add     rcx, rcx
 * 00000001C017403B: cmp     [r10+rcx*8+29h], bl
 * 00000001C0174040: jb      loc_1C003ECB1
 * 00000001C0174046: and     [rsp+48h+var_18], 0
 * 00000001C017404C: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0174051: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174058: mov     r9d, edi
 * 00000001C017405B: mov     r8, [rsp+48h+arg_20]
 * 00000001C0174060: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0174065: mov     [rsp+48h+var_20], 8
 * 00000001C017406E: mov     [rsp+48h+var_28], rdx
 * 00000001C0174073: mov     edx, 2Bh ; '+'
 * 00000001C0174078: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017407E: nop
 * 00000001C017407F: jmp     loc_1C003ECB1
 */
