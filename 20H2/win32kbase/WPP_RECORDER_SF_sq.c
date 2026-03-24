/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x1C006355C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00BFFB4 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sq @ 0x1C006355C
 * Reason: Hex-Rays returned no pseudocode for 0x1C006355C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006355C: mov     rax, rsp
 * 00000001C006355F: mov     [rax+8], rbx
 * 00000001C0063563: mov     [rax+10h], rsi
 * 00000001C0063567: mov     [rax+18h], rdi
 * 00000001C006356B: mov     [rax+20h], r12
 * 00000001C006356F: push    r13
 * 00000001C0063571: sub     rsp, 50h
 * 00000001C0063575: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C006357C: lea     r12, aNull; "NULL"
 * 00000001C0063583: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C006358A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C006358E: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0063596: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C006359D: lea     r13d, [rbx+14h]
 * 00000001C00635A1: jnz     loc_1C00F885C
 * 00000001C00635A7: test    rdi, rdi
 * 00000001C00635AA: jz      loc_1C00F88DF
 * 00000001C00635B0: inc     rbx
 * 00000001C00635B3: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00635B7: jnz     short loc_1C00635B0
 * 00000001C00635B9: inc     rbx
 * 00000001C00635BC: test    rdi, rdi
 * 00000001C00635BF: lea     rax, [rsp+58h+arg_30]
 * 00000001C00635C7: mov     edx, 4
 * 00000001C00635CC: lea     r9, WPP_15558b1eb0723b696cc38695125fa388_Traceguids
 * 00000001C00635D3: cmovz   rdi, r12
 * 00000001C00635D7: mov     rcx, rsi
 * 00000001C00635DA: and     [rsp+58h+var_10], 0
 * 00000001C00635E0: mov     [rsp+58h+var_18], 8
 * 00000001C00635E9: mov     [rsp+58h+var_20], rax
 * 00000001C00635EE: lea     r8d, [rdx+9]
 * 00000001C00635F2: mov     [rsp+58h+var_28], rbx
 * 00000001C00635F7: mov     [rsp+58h+var_30], rdi
 * 00000001C00635FC: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0063602: call    cs:__imp_WppAutoLogTrace
 * 00000001C0063609: nop     dword ptr [rax+rax+00h]
 * 00000001C006360E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0063613: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0063618: mov     rdi, [rsp+58h+arg_10]
 * 00000001C006361D: mov     r12, [rsp+58h+arg_18]
 * 00000001C0063622: add     rsp, 50h
 * 00000001C0063626: pop     r13
 * 00000001C0063628: retn
 * 00000001C00F885C: cmp     byte ptr [rcx+29h], 4
 * 00000001C00F8860: jb      loc_1C00635A7
 * 00000001C00F8866: test    rdi, rdi
 * 00000001C00F8869: jz      short loc_1C00F887C
 * 00000001C00F886B: mov     rdx, rbx
 * 00000001C00F886E: inc     rdx
 * 00000001C00F8871: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00F8875: jnz     short loc_1C00F886E
 * 00000001C00F8877: inc     rdx
 * 00000001C00F887A: jmp     short loc_1C00F8881
 * 00000001C00F887C: mov     edx, 5
 * 00000001C00F8881: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00F8888: lea     r8, [rsp+58h+arg_30]
 * 00000001C00F8890: test    rdi, rdi
 * 00000001C00F8893: movzx   r9d, r13w
 * 00000001C00F8897: mov     rcx, rdi
 * 00000001C00F889A: cmovz   rcx, r12
 * 00000001C00F889E: and     [rsp+58h+var_18], 0
 * 00000001C00F88A4: mov     [rsp+58h+var_20], 8
 * 00000001C00F88AD: mov     [rsp+58h+var_28], r8
 * 00000001C00F88B2: lea     r8, WPP_15558b1eb0723b696cc38695125fa388_Traceguids
 * 00000001C00F88B9: mov     [rsp+58h+var_30], rdx
 * 00000001C00F88BE: mov     edx, 2Bh ; '+'
 * 00000001C00F88C3: mov     [rsp+58h+var_38], rcx
 * 00000001C00F88C8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00F88CF: mov     rcx, [rcx+18h]
 * 00000001C00F88D3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00F88D9: nop
 * 00000001C00F88DA: jmp     loc_1C00635A7
 * 00000001C00F88DF: mov     ebx, 5
 * 00000001C00F88E4: jmp     loc_1C00635BC
 */
