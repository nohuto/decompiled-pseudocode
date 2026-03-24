/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0026844
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0003060 (EditionUpdateInputTransformFromHitTest.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0025CC8 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     RemoveProcessFromJob @ 0x1C0026210 (RemoveProcessFromJob.c)
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00265D4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00266E4 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00390C4 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00B3070 (DestroyThreadsMessages.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     UserJobCallout @ 0x1C0109910 (UserJobCallout.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C0109B54 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0109C3C (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0109C84 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0116290 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E1280 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1DB4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EFD44 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C021B6D4 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021D734 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackSendHook @ 0x1C021DDFC (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C021DF78 (xxxDDETrackWindowDying.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0026844
 * Reason: Hex-Rays returned no pseudocode for 0x1C0026844
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0026844: mov     rax, rsp
 * 00000001C0026847: mov     [rax+8], rbx
 * 00000001C002684B: mov     [rax+10h], rbp
 * 00000001C002684F: mov     [rax+18h], rsi
 * 00000001C0026853: mov     [rax+20h], rdi
 * 00000001C0026857: push    r14
 * 00000001C0026859: sub     rsp, 50h
 * 00000001C002685D: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C0026864: mov     r14d, 8
 * 00000001C002686A: mov     esi, r8d
 * 00000001C002686D: mov     r11d, r8d
 * 00000001C0026870: shr     r11, 10h
 * 00000001C0026874: movzx   edi, r9w
 * 00000001C0026878: lea     r10d, [rsi-1]
 * 00000001C002687C: movzx   ebx, dl
 * 00000001C002687F: mov     ecx, r10d
 * 00000001C0026882: and     r10d, 1Fh
 * 00000001C0026886: shr     rcx, 5
 * 00000001C002688A: lea     rax, [r11+r11*4]
 * 00000001C002688E: and     ecx, 7FFh
 * 00000001C0026894: lea     r9, [rcx+rax*4]
 * 00000001C0026898: mov     ecx, r10d
 * 00000001C002689B: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00268A2: mov     eax, [r10+r9*4+2Ch]
 * 00000001C00268A7: bt      eax, ecx
 * 00000001C00268AA: jb      loc_1C016985C
 * 00000001C00268B0: and     [rsp+58h+var_10], 0
 * 00000001C00268B6: lea     rax, [rsp+58h+arg_30]
 * 00000001C00268BE: mov     r9, [rsp+58h+arg_20]
 * 00000001C00268C6: mov     r8d, esi
 * 00000001C00268C9: mov     [rsp+58h+var_18], r14
 * 00000001C00268CE: mov     edx, ebx
 * 00000001C00268D0: mov     [rsp+58h+var_20], rax
 * 00000001C00268D5: mov     rcx, rbp
 * 00000001C00268D8: lea     rax, [rsp+58h+arg_28]
 * 00000001C00268E0: mov     [rsp+58h+var_28], r14
 * 00000001C00268E5: mov     [rsp+58h+var_30], rax
 * 00000001C00268EA: mov     word ptr [rsp+58h+var_38], di
 * 00000001C00268EF: call    cs:__imp_WppAutoLogTrace
 * 00000001C00268F6: nop     dword ptr [rax+rax+00h]
 * 00000001C00268FB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0026900: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0026905: mov     rsi, [rsp+58h+arg_10]
 * 00000001C002690A: mov     rdi, [rsp+58h+arg_18]
 * 00000001C002690F: add     rsp, 50h
 * 00000001C0026913: pop     r14
 * 00000001C0026915: retn
 * 00000001C016985C: lea     rcx, [r11+r11*4]
 * 00000001C0169860: add     rcx, rcx
 * 00000001C0169863: cmp     [r10+rcx*8+29h], bl
 * 00000001C0169868: jb      loc_1C00268B0
 * 00000001C016986E: and     [rsp+58h+var_18], 0
 * 00000001C0169874: lea     rdx, [rsp+58h+arg_30]
 * 00000001C016987C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0169883: mov     r9d, edi
 * 00000001C0169886: mov     r8, [rsp+58h+arg_20]
 * 00000001C016988E: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0169893: mov     [rsp+58h+var_20], r14
 * 00000001C0169898: mov     [rsp+58h+var_28], rdx
 * 00000001C016989D: lea     rdx, [rsp+58h+arg_28]
 * 00000001C01698A5: mov     [rsp+58h+var_30], r14
 * 00000001C01698AA: mov     [rsp+58h+var_38], rdx
 * 00000001C01698AF: mov     edx, 2Bh ; '+'
 * 00000001C01698B4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01698BA: nop
 * 00000001C01698BB: jmp     loc_1C00268B0
 */
