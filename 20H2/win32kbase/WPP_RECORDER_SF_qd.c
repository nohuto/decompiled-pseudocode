/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C017BF5C
 * Callers:
 *     rimObsUpdateInputObserverRegistration @ 0x1C017DE28 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C017BF5C
 * Reason: Hex-Rays returned no pseudocode for 0x1C017BF5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C017BF5C: mov     r11, rsp
 * 00000001C017BF5F: mov     [r11+8], rbx
 * 00000001C017BF63: push    rbp
 * 00000001C017BF64: sub     rsp, 50h
 * 00000001C017BF68: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C017BF6F: mov     ebp, 29h ; ')'
 * 00000001C017BF74: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C017BF7B: test    dword ptr [rcx+2Ch], 400000h
 * 00000001C017BF82: jz      short loc_1C017BFCE
 * 00000001C017BF84: cmp     byte ptr [rcx+29h], 4
 * 00000001C017BF88: jb      short loc_1C017BFCE
 * 00000001C017BF8A: and     qword ptr [r11-18h], 0
 * 00000001C017BF8F: lea     rdx, [r11+38h]
 * 00000001C017BF93: mov     rax, cs:pfnWppTraceMessage
 * 00000001C017BF9A: lea     r8, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C017BFA1: mov     rcx, [rcx+18h]
 * 00000001C017BFA5: mov     qword ptr [r11-20h], 4
 * 00000001C017BFAD: mov     [r11-28h], rdx
 * 00000001C017BFB1: lea     rdx, [r11+30h]
 * 00000001C017BFB5: mov     qword ptr [r11-30h], 8
 * 00000001C017BFBD: mov     [r11-38h], rdx
 * 00000001C017BFC1: lea     edx, [rbp+2]
 * 00000001C017BFC4: movzx   r9d, bp
 * 00000001C017BFC8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017BFCE: and     [rsp+58h+var_10], 0
 * 00000001C017BFD4: lea     rax, [rsp+58h+arg_30]
 * 00000001C017BFDC: mov     [rsp+58h+var_18], 4
 * 00000001C017BFE5: lea     r9, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C017BFEC: mov     [rsp+58h+var_20], rax
 * 00000001C017BFF1: mov     edx, 4
 * 00000001C017BFF6: lea     rax, [rsp+58h+arg_28]
 * 00000001C017BFFE: mov     [rsp+58h+var_28], 8
 * 00000001C017C007: mov     [rsp+58h+var_30], rax
 * 00000001C017C00C: mov     rcx, rbx
 * 00000001C017C00F: mov     [rsp+58h+var_38], bp
 * 00000001C017C014: lea     r8d, [rdx+13h]
 * 00000001C017C018: call    cs:__imp_WppAutoLogTrace
 * 00000001C017C01F: nop     dword ptr [rax+rax+00h]
 * 00000001C017C024: mov     rbx, [rsp+58h+arg_0]
 * 00000001C017C029: add     rsp, 50h
 * 00000001C017C02D: pop     rbp
 * 00000001C017C02E: retn
 */
