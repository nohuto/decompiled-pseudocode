/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C019E850
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018EAA0 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018EC5C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C018FC48 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0190158 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01902E0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0193360 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019A084 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019D2C4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C019E850
 * Reason: Hex-Rays returned no pseudocode for 0x1C019E850
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C019E850: mov     r11, rsp
 * 00000001C019E853: mov     [r11+8], rbx
 * 00000001C019E857: mov     [r11+10h], rbp
 * 00000001C019E85B: mov     [r11+18h], rsi
 * 00000001C019E85F: push    rdi
 * 00000001C019E860: sub     rsp, 50h
 * 00000001C019E864: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C019E86B: mov     ebp, 4
 * 00000001C019E870: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C019E877: movzx   edi, r9w
 * 00000001C019E87B: movzx   ebx, dl
 * 00000001C019E87E: mov     eax, [rcx+2Ch]
 * 00000001C019E881: test    al, 40h
 * 00000001C019E883: jz      short loc_1C019E8C5
 * 00000001C019E885: cmp     [rcx+29h], bl
 * 00000001C019E888: jb      short loc_1C019E8C5
 * 00000001C019E88A: and     qword ptr [r11-18h], 0
 * 00000001C019E88F: lea     rdx, [r11+38h]
 * 00000001C019E893: mov     rax, cs:pfnWppTraceMessage
 * 00000001C019E89A: lea     r8, WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids
 * 00000001C019E8A1: mov     rcx, [rcx+18h]
 * 00000001C019E8A5: mov     r9d, edi
 * 00000001C019E8A8: mov     [r11-20h], rbp
 * 00000001C019E8AC: mov     [r11-28h], rdx
 * 00000001C019E8B0: lea     rdx, [r11+30h]
 * 00000001C019E8B4: mov     [r11-30h], rbp
 * 00000001C019E8B8: mov     [r11-38h], rdx
 * 00000001C019E8BC: lea     edx, [rbp+27h]
 * 00000001C019E8BF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C019E8C5: and     [rsp+58h+var_10], 0
 * 00000001C019E8CB: lea     rax, [rsp+58h+arg_30]
 * 00000001C019E8D3: mov     [rsp+58h+var_18], rbp
 * 00000001C019E8D8: lea     r9, WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids
 * 00000001C019E8DF: mov     [rsp+58h+var_20], rax
 * 00000001C019E8E4: mov     r8d, 7
 * 00000001C019E8EA: lea     rax, [rsp+58h+arg_28]
 * 00000001C019E8F2: mov     [rsp+58h+var_28], rbp
 * 00000001C019E8F7: mov     [rsp+58h+var_30], rax
 * 00000001C019E8FC: mov     edx, ebx
 * 00000001C019E8FE: mov     rcx, rsi
 * 00000001C019E901: mov     [rsp+58h+var_38], di
 * 00000001C019E906: call    cs:__imp_WppAutoLogTrace
 * 00000001C019E90D: nop     dword ptr [rax+rax+00h]
 * 00000001C019E912: mov     rbx, [rsp+58h+arg_0]
 * 00000001C019E917: mov     rbp, [rsp+58h+arg_8]
 * 00000001C019E91C: mov     rsi, [rsp+58h+arg_10]
 * 00000001C019E921: add     rsp, 50h
 * 00000001C019E925: pop     rdi
 * 00000001C019E926: retn
 */
