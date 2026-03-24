/*
 * XREFs of WPP_RECORDER_SF_hD @ 0x1C00594AC
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0059060 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01B4460 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hD @ 0x1C00594AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00594AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00594AC: mov     [rsp+arg_0], rbx
 * 00000001C00594B1: push    rdi
 * 00000001C00594B2: sub     rsp, 50h
 * 00000001C00594B6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00594BD: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C00594C4: movzx   ebx, r9w
 * 00000001C00594C8: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C00594CF: jnz     loc_1C00F6CB2
 * 00000001C00594D5: and     [rsp+58h+var_10], 0
 * 00000001C00594DB: lea     rax, [rsp+58h+arg_30]
 * 00000001C00594E3: mov     [rsp+58h+var_18], 4
 * 00000001C00594EC: lea     r9, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C00594F3: mov     [rsp+58h+var_20], rax
 * 00000001C00594F8: mov     edx, 4
 * 00000001C00594FD: lea     rax, [rsp+58h+arg_28]
 * 00000001C0059505: mov     [rsp+58h+var_28], 2
 * 00000001C005950E: mov     [rsp+58h+var_30], rax
 * 00000001C0059513: mov     rcx, rdi
 * 00000001C0059516: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C005951B: lea     r8d, [rdx+0Ch]
 * 00000001C005951F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0059526: nop     dword ptr [rax+rax+00h]
 * 00000001C005952B: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0059530: add     rsp, 50h
 * 00000001C0059534: pop     rdi
 * 00000001C0059535: retn
 * 00000001C00F6CB2: cmp     byte ptr [rcx+29h], 4
 * 00000001C00F6CB6: jb      loc_1C00594D5
 * 00000001C00F6CBC: and     [rsp+58h+var_18], 0
 * 00000001C00F6CC2: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00F6CCA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00F6CD1: lea     r8, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C00F6CD8: mov     rcx, [rcx+18h]
 * 00000001C00F6CDC: mov     r9d, ebx
 * 00000001C00F6CDF: mov     [rsp+58h+var_20], 4
 * 00000001C00F6CE8: mov     [rsp+58h+var_28], rdx
 * 00000001C00F6CED: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00F6CF5: mov     [rsp+58h+var_30], 2
 * 00000001C00F6CFE: mov     [rsp+58h+var_38], rdx
 * 00000001C00F6D03: mov     edx, 2Bh ; '+'
 * 00000001C00F6D08: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00F6D0E: nop
 * 00000001C00F6D0F: jmp     loc_1C00594D5
 */
