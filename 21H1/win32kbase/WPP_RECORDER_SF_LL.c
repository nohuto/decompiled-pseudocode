/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C01A45B0
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01947A0 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C019495C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0195948 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0195E58 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0195FE0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0199060 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019FD74 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01A3024 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C01A45B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A45B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A45B0: mov     r11, rsp
 * 00000001C01A45B3: mov     [r11+8], rbx
 * 00000001C01A45B7: mov     [r11+10h], rbp
 * 00000001C01A45BB: mov     [r11+18h], rsi
 * 00000001C01A45BF: push    rdi
 * 00000001C01A45C0: sub     rsp, 50h
 * 00000001C01A45C4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A45CB: mov     ebp, 4
 * 00000001C01A45D0: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01A45D7: movzx   edi, r9w
 * 00000001C01A45DB: movzx   ebx, dl
 * 00000001C01A45DE: mov     eax, [rcx+2Ch]
 * 00000001C01A45E1: test    al, 40h
 * 00000001C01A45E3: jz      short loc_1C01A4625
 * 00000001C01A45E5: cmp     [rcx+29h], bl
 * 00000001C01A45E8: jb      short loc_1C01A4625
 * 00000001C01A45EA: and     qword ptr [r11-18h], 0
 * 00000001C01A45EF: lea     rdx, [r11+38h]
 * 00000001C01A45F3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A45FA: lea     r8, WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids
 * 00000001C01A4601: mov     rcx, [rcx+18h]
 * 00000001C01A4605: mov     r9d, edi
 * 00000001C01A4608: mov     [r11-20h], rbp
 * 00000001C01A460C: mov     [r11-28h], rdx
 * 00000001C01A4610: lea     rdx, [r11+30h]
 * 00000001C01A4614: mov     [r11-30h], rbp
 * 00000001C01A4618: mov     [r11-38h], rdx
 * 00000001C01A461C: lea     edx, [rbp+27h]
 * 00000001C01A461F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A4625: and     [rsp+58h+var_10], 0
 * 00000001C01A462B: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A4633: mov     [rsp+58h+var_18], rbp
 * 00000001C01A4638: lea     r9, WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids
 * 00000001C01A463F: mov     [rsp+58h+var_20], rax
 * 00000001C01A4644: mov     r8d, 7
 * 00000001C01A464A: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A4652: mov     [rsp+58h+var_28], rbp
 * 00000001C01A4657: mov     [rsp+58h+var_30], rax
 * 00000001C01A465C: mov     edx, ebx
 * 00000001C01A465E: mov     rcx, rsi
 * 00000001C01A4661: mov     [rsp+58h+var_38], di
 * 00000001C01A4666: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A466D: nop     dword ptr [rax+rax+00h]
 * 00000001C01A4672: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A4677: mov     rbp, [rsp+58h+arg_8]
 * 00000001C01A467C: mov     rsi, [rsp+58h+arg_10]
 * 00000001C01A4681: add     rsp, 50h
 * 00000001C01A4685: pop     rdi
 * 00000001C01A4686: retn
 */
