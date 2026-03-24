/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x1C00A04A0
 * Callers:
 *     xxxInitProcessInfo @ 0x1C006A66C (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sq @ 0x1C00A04A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00A04A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00A04A0: mov     rax, rsp
 * 00000001C00A04A3: mov     [rax+8], rbx
 * 00000001C00A04A7: mov     [rax+10h], rsi
 * 00000001C00A04AB: mov     [rax+18h], rdi
 * 00000001C00A04AF: mov     [rax+20h], r12
 * 00000001C00A04B3: push    r13
 * 00000001C00A04B5: sub     rsp, 50h
 * 00000001C00A04B9: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00A04C0: lea     r12, aNull; "NULL"
 * 00000001C00A04C7: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C00A04CE: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00A04D2: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00A04DA: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C00A04E1: lea     r13d, [rbx+14h]
 * 00000001C00A04E5: jnz     loc_1C0116DF6
 * 00000001C00A04EB: test    rdi, rdi
 * 00000001C00A04EE: jz      loc_1C0116E79
 * 00000001C00A04F4: inc     rbx
 * 00000001C00A04F7: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00A04FB: jnz     short loc_1C00A04F4
 * 00000001C00A04FD: inc     rbx
 * 00000001C00A0500: test    rdi, rdi
 * 00000001C00A0503: lea     rax, [rsp+58h+arg_30]
 * 00000001C00A050B: mov     edx, 4
 * 00000001C00A0510: lea     r9, WPP_b90bd84c38ec3dda007edf3579337c68_Traceguids
 * 00000001C00A0517: cmovz   rdi, r12
 * 00000001C00A051B: mov     rcx, rsi
 * 00000001C00A051E: and     [rsp+58h+var_10], 0
 * 00000001C00A0524: mov     [rsp+58h+var_18], 8
 * 00000001C00A052D: mov     [rsp+58h+var_20], rax
 * 00000001C00A0532: lea     r8d, [rdx+9]
 * 00000001C00A0536: mov     [rsp+58h+var_28], rbx
 * 00000001C00A053B: mov     [rsp+58h+var_30], rdi
 * 00000001C00A0540: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C00A0546: call    cs:__imp_WppAutoLogTrace
 * 00000001C00A054D: nop     dword ptr [rax+rax+00h]
 * 00000001C00A0552: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00A0557: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00A055C: mov     rdi, [rsp+58h+arg_10]
 * 00000001C00A0561: mov     r12, [rsp+58h+arg_18]
 * 00000001C00A0566: add     rsp, 50h
 * 00000001C00A056A: pop     r13
 * 00000001C00A056C: retn
 * 00000001C0116DF6: cmp     byte ptr [rcx+29h], 4
 * 00000001C0116DFA: jb      loc_1C00A04EB
 * 00000001C0116E00: test    rdi, rdi
 * 00000001C0116E03: jz      short loc_1C0116E16
 * 00000001C0116E05: mov     rdx, rbx
 * 00000001C0116E08: inc     rdx
 * 00000001C0116E0B: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0116E0F: jnz     short loc_1C0116E08
 * 00000001C0116E11: inc     rdx
 * 00000001C0116E14: jmp     short loc_1C0116E1B
 * 00000001C0116E16: mov     edx, 5
 * 00000001C0116E1B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0116E22: lea     r8, [rsp+58h+arg_30]
 * 00000001C0116E2A: test    rdi, rdi
 * 00000001C0116E2D: movzx   r9d, r13w
 * 00000001C0116E31: mov     rcx, rdi
 * 00000001C0116E34: cmovz   rcx, r12
 * 00000001C0116E38: and     [rsp+58h+var_18], 0
 * 00000001C0116E3E: mov     [rsp+58h+var_20], 8
 * 00000001C0116E47: mov     [rsp+58h+var_28], r8
 * 00000001C0116E4C: lea     r8, WPP_b90bd84c38ec3dda007edf3579337c68_Traceguids
 * 00000001C0116E53: mov     [rsp+58h+var_30], rdx
 * 00000001C0116E58: mov     edx, 2Bh ; '+'
 * 00000001C0116E5D: mov     [rsp+58h+var_38], rcx
 * 00000001C0116E62: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0116E69: mov     rcx, [rcx+18h]
 * 00000001C0116E6D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0116E73: nop
 * 00000001C0116E74: jmp     loc_1C00A04EB
 * 00000001C0116E79: mov     ebx, 5
 * 00000001C0116E7E: jmp     loc_1C00A0500
 */
