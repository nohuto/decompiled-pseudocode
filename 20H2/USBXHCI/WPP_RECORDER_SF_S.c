/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0036A40
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0036A40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0036A40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0036A40: mov     rax, rsp
 * 00000001C0036A43: mov     [rax+8], rbx
 * 00000001C0036A47: mov     [rax+10h], rsi
 * 00000001C0036A4B: mov     [rax+18h], rdi
 * 00000001C0036A4F: mov     [rax+20h], r12
 * 00000001C0036A53: push    r15
 * 00000001C0036A55: sub     rsp, 40h
 * 00000001C0036A59: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0036A60: lea     r15, aNull; "NULL"
 * 00000001C0036A67: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0036A6C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0036A70: mov     rsi, rcx
 * 00000001C0036A73: mov     r12d, 0E6h
 * 00000001C0036A79: mov     eax, [rdx+2Ch]
 * 00000001C0036A7C: test    al, 8
 * 00000001C0036A7E: jz      short loc_1C0036AE3
 * 00000001C0036A80: cmp     byte ptr [rdx+29h], 2
 * 00000001C0036A84: jb      short loc_1C0036AE3
 * 00000001C0036A86: test    rdi, rdi
 * 00000001C0036A89: jz      short loc_1C0036A9C
 * 00000001C0036A8B: mov     rdx, rbx
 * 00000001C0036A8E: inc     rdx
 * 00000001C0036A91: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0036A95: jnz     short loc_1C0036A8E
 * 00000001C0036A97: inc     rdx
 * 00000001C0036A9A: jmp     short loc_1C0036AA1
 * 00000001C0036A9C: mov     edx, 5
 * 00000001C0036AA1: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0036AA8: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0036AAF: test    rdi, rdi
 * 00000001C0036AB2: movzx   r9d, r12w
 * 00000001C0036AB6: mov     rcx, rdi
 * 00000001C0036AB9: cmovz   rcx, r15
 * 00000001C0036ABD: and     [rsp+48h+var_18], 0
 * 00000001C0036AC3: mov     [rsp+48h+var_20], rdx
 * 00000001C0036AC8: mov     edx, 2Bh ; '+'
 * 00000001C0036ACD: mov     [rsp+48h+var_28], rcx
 * 00000001C0036AD2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0036AD9: mov     rcx, [rcx+18h]
 * 00000001C0036ADD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036AE3: test    rdi, rdi
 * 00000001C0036AE6: jz      short loc_1C0036AF6
 * 00000001C0036AE8: inc     rbx
 * 00000001C0036AEB: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0036AEF: jnz     short loc_1C0036AE8
 * 00000001C0036AF1: inc     rbx
 * 00000001C0036AF4: jmp     short loc_1C0036AFB
 * 00000001C0036AF6: mov     ebx, 5
 * 00000001C0036AFB: test    rdi, rdi
 * 00000001C0036AFE: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0036B05: mov     edx, 2
 * 00000001C0036B0A: mov     rcx, rsi
 * 00000001C0036B0D: cmovz   rdi, r15
 * 00000001C0036B11: and     [rsp+48h+var_10], 0
 * 00000001C0036B17: mov     [rsp+48h+var_18], rbx
 * 00000001C0036B1C: mov     [rsp+48h+var_20], rdi
 * 00000001C0036B21: lea     r8d, [rdx+2]
 * 00000001C0036B25: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C0036B2B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0036B32: nop     dword ptr [rax+rax+00h]
 * 00000001C0036B37: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0036B3C: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0036B41: mov     rdi, [rsp+48h+arg_10]
 * 00000001C0036B46: mov     r12, [rsp+48h+arg_18]
 * 00000001C0036B4B: add     rsp, 40h
 * 00000001C0036B4F: pop     r15
 * 00000001C0036B51: retn
 */
