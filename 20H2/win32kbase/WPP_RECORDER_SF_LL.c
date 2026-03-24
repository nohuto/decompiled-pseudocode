/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C019C350
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018C580 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018C73C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C018D728 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C018DC38 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018DDC0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0190E30 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0197B54 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019ADC4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C019C350
 * Reason: Hex-Rays returned no pseudocode for 0x1C019C350
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C019C350: mov     r11, rsp
 * 00000001C019C353: mov     [r11+8], rbx
 * 00000001C019C357: mov     [r11+10h], rbp
 * 00000001C019C35B: mov     [r11+18h], rsi
 * 00000001C019C35F: push    rdi
 * 00000001C019C360: sub     rsp, 50h
 * 00000001C019C364: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C019C36B: mov     ebp, 4
 * 00000001C019C370: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C019C377: movzx   edi, r9w
 * 00000001C019C37B: movzx   ebx, dl
 * 00000001C019C37E: mov     eax, [rcx+2Ch]
 * 00000001C019C381: test    al, 40h
 * 00000001C019C383: jz      short loc_1C019C3C5
 * 00000001C019C385: cmp     [rcx+29h], bl
 * 00000001C019C388: jb      short loc_1C019C3C5
 * 00000001C019C38A: and     qword ptr [r11-18h], 0
 * 00000001C019C38F: lea     rdx, [r11+38h]
 * 00000001C019C393: mov     rax, cs:pfnWppTraceMessage
 * 00000001C019C39A: lea     r8, WPP_50814762fbc63e38c7e5eacf83347307_Traceguids
 * 00000001C019C3A1: mov     rcx, [rcx+18h]
 * 00000001C019C3A5: mov     r9d, edi
 * 00000001C019C3A8: mov     [r11-20h], rbp
 * 00000001C019C3AC: mov     [r11-28h], rdx
 * 00000001C019C3B0: lea     rdx, [r11+30h]
 * 00000001C019C3B4: mov     [r11-30h], rbp
 * 00000001C019C3B8: mov     [r11-38h], rdx
 * 00000001C019C3BC: lea     edx, [rbp+27h]
 * 00000001C019C3BF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C019C3C5: and     [rsp+58h+var_10], 0
 * 00000001C019C3CB: lea     rax, [rsp+58h+arg_30]
 * 00000001C019C3D3: mov     [rsp+58h+var_18], rbp
 * 00000001C019C3D8: lea     r9, WPP_50814762fbc63e38c7e5eacf83347307_Traceguids
 * 00000001C019C3DF: mov     [rsp+58h+var_20], rax
 * 00000001C019C3E4: mov     r8d, 7
 * 00000001C019C3EA: lea     rax, [rsp+58h+arg_28]
 * 00000001C019C3F2: mov     [rsp+58h+var_28], rbp
 * 00000001C019C3F7: mov     [rsp+58h+var_30], rax
 * 00000001C019C3FC: mov     edx, ebx
 * 00000001C019C3FE: mov     rcx, rsi
 * 00000001C019C401: mov     [rsp+58h+var_38], di
 * 00000001C019C406: call    cs:__imp_WppAutoLogTrace
 * 00000001C019C40D: nop     dword ptr [rax+rax+00h]
 * 00000001C019C412: mov     rbx, [rsp+58h+arg_0]
 * 00000001C019C417: mov     rbp, [rsp+58h+arg_8]
 * 00000001C019C41C: mov     rsi, [rsp+58h+arg_10]
 * 00000001C019C421: add     rsp, 50h
 * 00000001C019C425: pop     rdi
 * 00000001C019C426: retn
 */
