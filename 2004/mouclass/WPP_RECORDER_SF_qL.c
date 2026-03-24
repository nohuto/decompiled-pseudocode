/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C000595C
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0004BE0 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C000595C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000595C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000595C: mov     r11, rsp
 * 00000001C000595F: mov     [r11+8], rbx
 * 00000001C0005963: push    rbp
 * 00000001C0005964: sub     rsp, 50h
 * 00000001C0005968: mov     rbx, rcx
 * 00000001C000596B: mov     ebp, 35h ; '5'
 * 00000001C0005970: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005977: mov     eax, [rcx+2Ch]
 * 00000001C000597A: test    al, 4
 * 00000001C000597C: jz      short loc_1C00059C8
 * 00000001C000597E: cmp     byte ptr [rcx+29h], 5
 * 00000001C0005982: jb      short loc_1C00059C8
 * 00000001C0005984: and     qword ptr [r11-18h], 0
 * 00000001C0005989: lea     rdx, [r11+38h]
 * 00000001C000598D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005994: lea     r8, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C000599B: mov     rcx, [rcx+18h]
 * 00000001C000599F: mov     qword ptr [r11-20h], 4
 * 00000001C00059A7: mov     [r11-28h], rdx
 * 00000001C00059AB: lea     rdx, [r11+30h]
 * 00000001C00059AF: mov     qword ptr [r11-30h], 8
 * 00000001C00059B7: mov     [r11-38h], rdx
 * 00000001C00059BB: lea     edx, [rbp-0Ah]
 * 00000001C00059BE: movzx   r9d, bp
 * 00000001C00059C2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00059C8: and     [rsp+58h+var_10], 0
 * 00000001C00059CE: lea     rax, [rsp+58h+arg_30]
 * 00000001C00059D6: mov     [rsp+58h+var_18], 4
 * 00000001C00059DF: lea     r9, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C00059E6: mov     [rsp+58h+var_20], rax
 * 00000001C00059EB: mov     edx, 5
 * 00000001C00059F0: lea     rax, [rsp+58h+arg_28]
 * 00000001C00059F8: mov     [rsp+58h+var_28], 8
 * 00000001C0005A01: mov     [rsp+58h+var_30], rax
 * 00000001C0005A06: mov     rcx, rbx
 * 00000001C0005A09: mov     [rsp+58h+var_38], bp
 * 00000001C0005A0E: lea     r8d, [rdx-2]
 * 00000001C0005A12: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005A19: nop     dword ptr [rax+rax+00h]
 * 00000001C0005A1E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005A23: add     rsp, 50h
 * 00000001C0005A27: pop     rbp
 * 00000001C0005A28: retn
 */
