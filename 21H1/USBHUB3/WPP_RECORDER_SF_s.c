/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00314D8
 * Callers:
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C0031948 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C00314D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00314D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00314D8: mov     rax, rsp
 * 00000001C00314DB: mov     [rax+8], rbx
 * 00000001C00314DF: mov     [rax+10h], rbp
 * 00000001C00314E3: mov     [rax+18h], rsi
 * 00000001C00314E7: mov     [rax+20h], rdi
 * 00000001C00314EB: push    r12
 * 00000001C00314ED: push    r14
 * 00000001C00314EF: push    r15
 * 00000001C00314F1: sub     rsp, 40h
 * 00000001C00314F5: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00314FC: lea     rbp, aNull_1; "NULL"
 * 00000001C0031503: mov     rbx, [rsp+58h+arg_28]
 * 00000001C003150B: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C003150F: xor     r12d, r12d
 * 00000001C0031512: movzx   r14d, r9w
 * 00000001C0031516: mov     r15, rcx
 * 00000001C0031519: mov     eax, [rdx+2Ch]
 * 00000001C003151C: lea     esi, [rdi+0Bh]
 * 00000001C003151F: test    al, 10h
 * 00000001C0031521: jz      short loc_1C0031588
 * 00000001C0031523: cmp     byte ptr [rdx+29h], 2
 * 00000001C0031527: jb      short loc_1C0031588
 * 00000001C0031529: test    rbx, rbx
 * 00000001C003152C: jz      short loc_1C0031545
 * 00000001C003152E: mov     rax, rdi
 * 00000001C0031531: inc     rax
 * 00000001C0031534: cmp     [rbx+rax*2], r12w
 * 00000001C0031539: jnz     short loc_1C0031531
 * 00000001C003153B: lea     rdx, ds:2[rax*2]
 * 00000001C0031543: jmp     short loc_1C0031548
 * 00000001C0031545: mov     rdx, rsi
 * 00000001C0031548: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003154F: lea     r8, WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids
 * 00000001C0031556: test    rbx, rbx
 * 00000001C0031559: mov     [rsp+58h+var_28], r12
 * 00000001C003155E: mov     [rsp+58h+var_30], rdx
 * 00000001C0031563: mov     rcx, rbp
 * 00000001C0031566: cmovnz  rcx, rbx
 * 00000001C003156A: mov     r9d, r14d
 * 00000001C003156D: mov     [rsp+58h+var_38], rcx
 * 00000001C0031572: mov     edx, 2Bh ; '+'
 * 00000001C0031577: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003157E: mov     rcx, [rcx+18h]
 * 00000001C0031582: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0031588: test    rbx, rbx
 * 00000001C003158B: jz      short loc_1C00315A2
 * 00000001C003158D: inc     rdi
 * 00000001C0031590: cmp     [rbx+rdi*2], r12w
 * 00000001C0031595: jnz     short loc_1C003158D
 * 00000001C0031597: lea     rsi, ds:2[rdi*2]
 * 00000001C003159F: test    rbx, rbx
 * 00000001C00315A2: mov     [rsp+58h+var_20], r12
 * 00000001C00315A7: lea     r9, WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids
 * 00000001C00315AE: mov     edx, 2
 * 00000001C00315B3: mov     [rsp+58h+var_28], rsi
 * 00000001C00315B8: cmovnz  rbp, rbx
 * 00000001C00315BC: mov     rcx, r15
 * 00000001C00315BF: mov     [rsp+58h+var_30], rbp
 * 00000001C00315C4: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C00315CA: lea     r8d, [rdx+3]
 * 00000001C00315CE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00315D5: nop     dword ptr [rax+rax+00h]
 * 00000001C00315DA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00315DF: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00315E4: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00315E9: mov     rdi, [rsp+58h+arg_18]
 * 00000001C00315EE: add     rsp, 40h
 * 00000001C00315F2: pop     r15
 * 00000001C00315F4: pop     r14
 * 00000001C00315F6: pop     r12
 * 00000001C00315F8: retn
 */
