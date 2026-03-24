/*
 * XREFs of WPP_RECORDER_SF_qLLdd @ 0x1C00073B4
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLLdd @ 0x1C00073B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00073B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00073B4: mov     [rsp+arg_0], rbx
 * 00000001C00073B9: mov     [rsp+arg_8], rbp
 * 00000001C00073BE: push    rdi
 * 00000001C00073BF: sub     rsp, 80h
 * 00000001C00073C6: mov     rbx, rcx
 * 00000001C00073C9: mov     edi, 4
 * 00000001C00073CE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00073D5: lea     ebp, [rdi+2Bh]
 * 00000001C00073D8: mov     eax, [rcx+2Ch]
 * 00000001C00073DB: test    al, 40h
 * 00000001C00073DD: jnz     loc_1C00246AC
 * 00000001C00073E3: and     [rsp+88h+var_10], 0
 * 00000001C00073E9: lea     rax, [rsp+88h+arg_48]
 * 00000001C00073F1: mov     [rsp+88h+var_18], rdi
 * 00000001C00073F6: lea     r9, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C00073FD: mov     [rsp+88h+var_20], rax
 * 00000001C0007402: mov     r8d, 7
 * 00000001C0007408: mov     [rsp+88h+var_28], rdi
 * 00000001C000740D: lea     rax, [rsp+88h+arg_40]
 * 00000001C0007415: mov     [rsp+88h+var_30], rax
 * 00000001C000741A: mov     edx, edi
 * 00000001C000741C: mov     [rsp+88h+var_38], rdi
 * 00000001C0007421: lea     rax, [rsp+88h+arg_38]
 * 00000001C0007429: mov     [rsp+88h+var_40], rax
 * 00000001C000742E: mov     rcx, rbx
 * 00000001C0007431: mov     [rsp+88h+var_48], rdi
 * 00000001C0007436: lea     rax, [rsp+88h+arg_30]
 * 00000001C000743E: mov     [rsp+88h+var_50], rax
 * 00000001C0007443: lea     rax, [rsp+88h+arg_28]
 * 00000001C000744B: mov     [rsp+88h+var_58], 8
 * 00000001C0007454: mov     [rsp+88h+var_60], rax
 * 00000001C0007459: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C000745E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0007465: nop     dword ptr [rax+rax+00h]
 * 00000001C000746A: lea     r11, [rsp+88h+var_8]
 * 00000001C0007472: mov     rbx, [r11+10h]
 * 00000001C0007476: mov     rbp, [r11+18h]
 * 00000001C000747A: mov     rsp, r11
 * 00000001C000747D: pop     rdi
 * 00000001C000747E: retn
 * 00000001C00246AC: cmp     [rcx+29h], dil
 * 00000001C00246B0: jb      loc_1C00073E3
 * 00000001C00246B6: and     [rsp+88h+var_18], 0
 * 00000001C00246BC: lea     rdx, [rsp+88h+arg_48]
 * 00000001C00246C4: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00246CB: lea     r8, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C00246D2: mov     rcx, [rcx+18h]
 * 00000001C00246D6: mov     [rsp+88h+var_20], rdi
 * 00000001C00246DB: mov     [rsp+88h+var_28], rdx
 * 00000001C00246E0: lea     rdx, [rsp+88h+arg_40]
 * 00000001C00246E8: mov     [rsp+88h+var_30], rdi
 * 00000001C00246ED: mov     [rsp+88h+var_38], rdx
 * 00000001C00246F2: lea     rdx, [rsp+88h+arg_38]
 * 00000001C00246FA: mov     [rsp+88h+var_40], rdi
 * 00000001C00246FF: mov     [rsp+88h+var_48], rdx
 * 00000001C0024704: lea     rdx, [rsp+88h+arg_30]
 * 00000001C002470C: mov     [rsp+88h+var_50], rdi
 * 00000001C0024711: mov     [rsp+88h+var_58], rdx
 * 00000001C0024716: lea     rdx, [rsp+88h+arg_28]
 * 00000001C002471E: mov     [rsp+88h+var_60], 8
 * 00000001C0024727: mov     [rsp+88h+var_68], rdx
 * 00000001C002472C: mov     edx, 2Bh ; '+'
 * 00000001C0024731: movzx   r9d, bp
 * 00000001C0024735: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002473B: nop
 * 00000001C002473C: jmp     loc_1C00073E3
 */
