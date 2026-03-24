/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x1C00AE190
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00C2204 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sq @ 0x1C00AE190
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AE190
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AE190: mov     rax, rsp
 * 00000001C00AE193: mov     [rax+8], rbx
 * 00000001C00AE197: mov     [rax+10h], rsi
 * 00000001C00AE19B: mov     [rax+18h], rdi
 * 00000001C00AE19F: mov     [rax+20h], r12
 * 00000001C00AE1A3: push    r13
 * 00000001C00AE1A5: sub     rsp, 50h
 * 00000001C00AE1A9: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00AE1B0: lea     r12, aNull; "NULL"
 * 00000001C00AE1B7: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C00AE1BE: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00AE1C2: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00AE1CA: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C00AE1D1: lea     r13d, [rbx+14h]
 * 00000001C00AE1D5: jnz     loc_1C011132C
 * 00000001C00AE1DB: test    rdi, rdi
 * 00000001C00AE1DE: jz      loc_1C01113AF
 * 00000001C00AE1E4: inc     rbx
 * 00000001C00AE1E7: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00AE1EB: jnz     short loc_1C00AE1E4
 * 00000001C00AE1ED: inc     rbx
 * 00000001C00AE1F0: test    rdi, rdi
 * 00000001C00AE1F3: lea     rax, [rsp+58h+arg_30]
 * 00000001C00AE1FB: mov     edx, 4
 * 00000001C00AE200: lea     r9, WPP_15558b1eb0723b696cc38695125fa388_Traceguids
 * 00000001C00AE207: cmovz   rdi, r12
 * 00000001C00AE20B: mov     rcx, rsi
 * 00000001C00AE20E: and     [rsp+58h+var_10], 0
 * 00000001C00AE214: mov     [rsp+58h+var_18], 8
 * 00000001C00AE21D: mov     [rsp+58h+var_20], rax
 * 00000001C00AE222: lea     r8d, [rdx+9]
 * 00000001C00AE226: mov     [rsp+58h+var_28], rbx
 * 00000001C00AE22B: mov     [rsp+58h+var_30], rdi
 * 00000001C00AE230: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C00AE236: call    cs:__imp_WppAutoLogTrace
 * 00000001C00AE23D: nop     dword ptr [rax+rax+00h]
 * 00000001C00AE242: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00AE247: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00AE24C: mov     rdi, [rsp+58h+arg_10]
 * 00000001C00AE251: mov     r12, [rsp+58h+arg_18]
 * 00000001C00AE256: add     rsp, 50h
 * 00000001C00AE25A: pop     r13
 * 00000001C00AE25C: retn
 * 00000001C011132C: cmp     byte ptr [rcx+29h], 4
 * 00000001C0111330: jb      loc_1C00AE1DB
 * 00000001C0111336: test    rdi, rdi
 * 00000001C0111339: jz      short loc_1C011134C
 * 00000001C011133B: mov     rdx, rbx
 * 00000001C011133E: inc     rdx
 * 00000001C0111341: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0111345: jnz     short loc_1C011133E
 * 00000001C0111347: inc     rdx
 * 00000001C011134A: jmp     short loc_1C0111351
 * 00000001C011134C: mov     edx, 5
 * 00000001C0111351: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0111358: lea     r8, [rsp+58h+arg_30]
 * 00000001C0111360: test    rdi, rdi
 * 00000001C0111363: movzx   r9d, r13w
 * 00000001C0111367: mov     rcx, rdi
 * 00000001C011136A: cmovz   rcx, r12
 * 00000001C011136E: and     [rsp+58h+var_18], 0
 * 00000001C0111374: mov     [rsp+58h+var_20], 8
 * 00000001C011137D: mov     [rsp+58h+var_28], r8
 * 00000001C0111382: lea     r8, WPP_15558b1eb0723b696cc38695125fa388_Traceguids
 * 00000001C0111389: mov     [rsp+58h+var_30], rdx
 * 00000001C011138E: mov     edx, 2Bh ; '+'
 * 00000001C0111393: mov     [rsp+58h+var_38], rcx
 * 00000001C0111398: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C011139F: mov     rcx, [rcx+18h]
 * 00000001C01113A3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01113A9: nop
 * 00000001C01113AA: jmp     loc_1C00AE1DB
 * 00000001C01113AF: mov     ebx, 5
 * 00000001C01113B4: jmp     loc_1C00AE1F0
 */
