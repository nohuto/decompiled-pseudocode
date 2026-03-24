/*
 * XREFs of WPP_RECORDER_SF_HL @ 0x1C019E584
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018FE88 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0190498 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019605C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_HL @ 0x1C019E584
 * Reason: Hex-Rays returned no pseudocode for 0x1C019E584
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C019E584: mov     r11, rsp
 * 00000001C019E587: mov     [r11+8], rbx
 * 00000001C019E58B: push    rdi
 * 00000001C019E58C: sub     rsp, 50h
 * 00000001C019E590: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C019E597: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C019E59E: movzx   ebx, r9w
 * 00000001C019E5A2: mov     eax, [rcx+2Ch]
 * 00000001C019E5A5: test    al, 40h
 * 00000001C019E5A7: jz      short loc_1C019E5F4
 * 00000001C019E5A9: cmp     byte ptr [rcx+29h], 2
 * 00000001C019E5AD: jb      short loc_1C019E5F4
 * 00000001C019E5AF: and     qword ptr [r11-18h], 0
 * 00000001C019E5B4: lea     rdx, [r11+38h]
 * 00000001C019E5B8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C019E5BF: lea     r8, WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids
 * 00000001C019E5C6: mov     rcx, [rcx+18h]
 * 00000001C019E5CA: mov     r9d, ebx
 * 00000001C019E5CD: mov     qword ptr [r11-20h], 4
 * 00000001C019E5D5: mov     [r11-28h], rdx
 * 00000001C019E5D9: lea     rdx, [r11+30h]
 * 00000001C019E5DD: mov     qword ptr [r11-30h], 2
 * 00000001C019E5E5: mov     [r11-38h], rdx
 * 00000001C019E5E9: mov     edx, 2Bh ; '+'
 * 00000001C019E5EE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C019E5F4: and     [rsp+58h+var_10], 0
 * 00000001C019E5FA: lea     rax, [rsp+58h+arg_30]
 * 00000001C019E602: mov     [rsp+58h+var_18], 4
 * 00000001C019E60B: lea     r9, WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids
 * 00000001C019E612: mov     [rsp+58h+var_20], rax
 * 00000001C019E617: mov     edx, 2
 * 00000001C019E61C: lea     rax, [rsp+58h+arg_28]
 * 00000001C019E624: mov     [rsp+58h+var_28], 2
 * 00000001C019E62D: mov     [rsp+58h+var_30], rax
 * 00000001C019E632: mov     rcx, rdi
 * 00000001C019E635: mov     [rsp+58h+var_38], bx
 * 00000001C019E63A: lea     r8d, [rdx+5]
 * 00000001C019E63E: call    cs:__imp_WppAutoLogTrace
 * 00000001C019E645: nop     dword ptr [rax+rax+00h]
 * 00000001C019E64A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C019E64F: add     rsp, 50h
 * 00000001C019E653: pop     rdi
 * 00000001C019E654: retn
 */
