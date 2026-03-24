/*
 * XREFs of WPP_RECORDER_SF_hD @ 0x1C008A02C
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0089BE0 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01AC380 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hD @ 0x1C008A02C
 * Reason: Hex-Rays returned no pseudocode for 0x1C008A02C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C008A02C: mov     [rsp+arg_0], rbx
 * 00000001C008A031: push    rdi
 * 00000001C008A032: sub     rsp, 50h
 * 00000001C008A036: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C008A03D: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C008A044: movzx   ebx, r9w
 * 00000001C008A048: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C008A04F: jnz     loc_1C0105ACA
 * 00000001C008A055: and     [rsp+58h+var_10], 0
 * 00000001C008A05B: lea     rax, [rsp+58h+arg_30]
 * 00000001C008A063: mov     [rsp+58h+var_18], 4
 * 00000001C008A06C: lea     r9, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C008A073: mov     [rsp+58h+var_20], rax
 * 00000001C008A078: mov     edx, 4
 * 00000001C008A07D: lea     rax, [rsp+58h+arg_28]
 * 00000001C008A085: mov     [rsp+58h+var_28], 2
 * 00000001C008A08E: mov     [rsp+58h+var_30], rax
 * 00000001C008A093: mov     rcx, rdi
 * 00000001C008A096: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C008A09B: lea     r8d, [rdx+0Ch]
 * 00000001C008A09F: call    cs:__imp_WppAutoLogTrace
 * 00000001C008A0A6: nop     dword ptr [rax+rax+00h]
 * 00000001C008A0AB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C008A0B0: add     rsp, 50h
 * 00000001C008A0B4: pop     rdi
 * 00000001C008A0B5: retn
 * 00000001C0105ACA: cmp     byte ptr [rcx+29h], 4
 * 00000001C0105ACE: jb      loc_1C008A055
 * 00000001C0105AD4: and     [rsp+58h+var_18], 0
 * 00000001C0105ADA: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0105AE2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0105AE9: lea     r8, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C0105AF0: mov     rcx, [rcx+18h]
 * 00000001C0105AF4: mov     r9d, ebx
 * 00000001C0105AF7: mov     [rsp+58h+var_20], 4
 * 00000001C0105B00: mov     [rsp+58h+var_28], rdx
 * 00000001C0105B05: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0105B0D: mov     [rsp+58h+var_30], 2
 * 00000001C0105B16: mov     [rsp+58h+var_38], rdx
 * 00000001C0105B1B: mov     edx, 2Bh ; '+'
 * 00000001C0105B20: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0105B26: nop
 * 00000001C0105B27: jmp     loc_1C008A055
 */
