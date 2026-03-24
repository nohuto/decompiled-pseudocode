/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0026920
 * Callers:
 *     CancelForegroundActivate @ 0x1C0025F90 (CancelForegroundActivate.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00265D4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002FDD8 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C00582F4 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00B1574 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00F5A1C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     UserJobCallout @ 0x1C0109910 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C0109AD0 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C0109B54 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C0109E70 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0116290 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D2C60 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     zzzShowStartGlass @ 0x1C01D3CA0 (zzzShowStartGlass.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0210524 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021BB78 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C190 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C021C5AC (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C834 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021CB28 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021CB88 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C021D6D0 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021D734 (xxxDDETrackGetMessageHook.c)
 *     xxxFreeDdeConv @ 0x1C021E188 (xxxFreeDdeConv.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023E54C (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023E5EC (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023E648 (_anonymous_namespace_--WindowSizingUpdate.c)
 *     xxxHardErrorControl @ 0x1C0242CAC (xxxHardErrorControl.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0026920
 * Reason: Hex-Rays returned no pseudocode for 0x1C0026920
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0026920: mov     [rsp+arg_0], rbx
 * 00000001C0026925: mov     [rsp+arg_8], rbp
 * 00000001C002692A: mov     [rsp+arg_10], rsi
 * 00000001C002692F: push    rdi
 * 00000001C0026930: sub     rsp, 40h
 * 00000001C0026934: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C002693B: mov     esi, r8d
 * 00000001C002693E: mov     r11d, r8d
 * 00000001C0026941: shr     r11, 10h
 * 00000001C0026945: movzx   edi, r9w
 * 00000001C0026949: lea     r10d, [rsi-1]
 * 00000001C002694D: movzx   ebx, dl
 * 00000001C0026950: mov     ecx, r10d
 * 00000001C0026953: and     r10d, 1Fh
 * 00000001C0026957: shr     rcx, 5
 * 00000001C002695B: lea     rax, [r11+r11*4]
 * 00000001C002695F: and     ecx, 7FFh
 * 00000001C0026965: lea     r9, [rcx+rax*4]
 * 00000001C0026969: mov     ecx, r10d
 * 00000001C002696C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0026973: mov     eax, [r10+r9*4+2Ch]
 * 00000001C0026978: bt      eax, ecx
 * 00000001C002697B: jb      loc_1C01698C0
 * 00000001C0026981: and     [rsp+48h+var_10], 0
 * 00000001C0026987: lea     rax, [rsp+48h+arg_28]
 * 00000001C002698C: mov     r9, [rsp+48h+arg_20]
 * 00000001C0026991: mov     r8d, esi
 * 00000001C0026994: mov     [rsp+48h+var_18], 8
 * 00000001C002699D: mov     edx, ebx
 * 00000001C002699F: mov     [rsp+48h+var_20], rax
 * 00000001C00269A4: mov     rcx, rbp
 * 00000001C00269A7: mov     word ptr [rsp+48h+var_28], di
 * 00000001C00269AC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00269B3: nop     dword ptr [rax+rax+00h]
 * 00000001C00269B8: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00269BD: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00269C2: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00269C7: add     rsp, 40h
 * 00000001C00269CB: pop     rdi
 * 00000001C00269CC: retn
 * 00000001C01698C0: lea     rcx, [r11+r11*4]
 * 00000001C01698C4: add     rcx, rcx
 * 00000001C01698C7: cmp     [r10+rcx*8+29h], bl
 * 00000001C01698CC: jb      loc_1C0026981
 * 00000001C01698D2: and     [rsp+48h+var_18], 0
 * 00000001C01698D8: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01698DD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01698E4: mov     r9d, edi
 * 00000001C01698E7: mov     r8, [rsp+48h+arg_20]
 * 00000001C01698EC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01698F1: mov     [rsp+48h+var_20], 8
 * 00000001C01698FA: mov     [rsp+48h+var_28], rdx
 * 00000001C01698FF: mov     edx, 2Bh ; '+'
 * 00000001C0169904: call    cs:__guard_dispatch_icall_fptr
 * 00000001C016990A: nop
 * 00000001C016990B: jmp     loc_1C0026981
 */
