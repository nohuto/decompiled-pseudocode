/*
 * XREFs of WPP_RECORDER_SF_HL @ 0x1C019C084
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018D968 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C018DF78 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_HL @ 0x1C019C084
 * Reason: Hex-Rays returned no pseudocode for 0x1C019C084
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C019C084: mov     r11, rsp
 * 00000001C019C087: mov     [r11+8], rbx
 * 00000001C019C08B: push    rdi
 * 00000001C019C08C: sub     rsp, 50h
 * 00000001C019C090: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C019C097: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C019C09E: movzx   ebx, r9w
 * 00000001C019C0A2: mov     eax, [rcx+2Ch]
 * 00000001C019C0A5: test    al, 40h
 * 00000001C019C0A7: jz      short loc_1C019C0F4
 * 00000001C019C0A9: cmp     byte ptr [rcx+29h], 2
 * 00000001C019C0AD: jb      short loc_1C019C0F4
 * 00000001C019C0AF: and     qword ptr [r11-18h], 0
 * 00000001C019C0B4: lea     rdx, [r11+38h]
 * 00000001C019C0B8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C019C0BF: lea     r8, WPP_50814762fbc63e38c7e5eacf83347307_Traceguids
 * 00000001C019C0C6: mov     rcx, [rcx+18h]
 * 00000001C019C0CA: mov     r9d, ebx
 * 00000001C019C0CD: mov     qword ptr [r11-20h], 4
 * 00000001C019C0D5: mov     [r11-28h], rdx
 * 00000001C019C0D9: lea     rdx, [r11+30h]
 * 00000001C019C0DD: mov     qword ptr [r11-30h], 2
 * 00000001C019C0E5: mov     [r11-38h], rdx
 * 00000001C019C0E9: mov     edx, 2Bh ; '+'
 * 00000001C019C0EE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C019C0F4: and     [rsp+58h+var_10], 0
 * 00000001C019C0FA: lea     rax, [rsp+58h+arg_30]
 * 00000001C019C102: mov     [rsp+58h+var_18], 4
 * 00000001C019C10B: lea     r9, WPP_50814762fbc63e38c7e5eacf83347307_Traceguids
 * 00000001C019C112: mov     [rsp+58h+var_20], rax
 * 00000001C019C117: mov     edx, 2
 * 00000001C019C11C: lea     rax, [rsp+58h+arg_28]
 * 00000001C019C124: mov     [rsp+58h+var_28], 2
 * 00000001C019C12D: mov     [rsp+58h+var_30], rax
 * 00000001C019C132: mov     rcx, rdi
 * 00000001C019C135: mov     [rsp+58h+var_38], bx
 * 00000001C019C13A: lea     r8d, [rdx+5]
 * 00000001C019C13E: call    cs:__imp_WppAutoLogTrace
 * 00000001C019C145: nop     dword ptr [rax+rax+00h]
 * 00000001C019C14A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C019C14F: add     rsp, 50h
 * 00000001C019C153: pop     rdi
 * 00000001C019C154: retn
 */
