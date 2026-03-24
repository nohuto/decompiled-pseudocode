/*
 * XREFs of WPP_RECORDER_SF_qLq @ 0x1C0007294
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLq @ 0x1C0007294
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007294
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007294: mov     [rsp+arg_0], rbx
 * 00000001C0007299: mov     [rsp+arg_8], rbp
 * 00000001C000729E: push    rdi
 * 00000001C000729F: sub     rsp, 60h
 * 00000001C00072A3: mov     rdi, rcx
 * 00000001C00072A6: movzx   ebx, r9w
 * 00000001C00072AA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00072B1: mov     ebp, 8
 * 00000001C00072B6: mov     eax, [rcx+2Ch]
 * 00000001C00072B9: test    al, 40h
 * 00000001C00072BB: jnz     loc_1C0023870
 * 00000001C00072C1: and     [rsp+68h+var_10], 0
 * 00000001C00072C7: lea     rax, [rsp+68h+arg_38]
 * 00000001C00072CF: mov     [rsp+68h+var_18], rbp
 * 00000001C00072D4: lea     r9, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C00072DB: mov     [rsp+68h+var_20], rax
 * 00000001C00072E0: mov     edx, 4
 * 00000001C00072E5: mov     [rsp+68h+var_28], 4
 * 00000001C00072EE: lea     rax, [rsp+68h+arg_30]
 * 00000001C00072F6: mov     [rsp+68h+var_30], rax
 * 00000001C00072FB: mov     rcx, rdi
 * 00000001C00072FE: lea     rax, [rsp+68h+arg_28]
 * 00000001C0007306: mov     [rsp+68h+var_38], rbp
 * 00000001C000730B: mov     [rsp+68h+var_40], rax
 * 00000001C0007310: lea     r8d, [rdx+3]
 * 00000001C0007314: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C0007319: call    cs:__imp_WppAutoLogTrace
 * 00000001C0007320: nop     dword ptr [rax+rax+00h]
 * 00000001C0007325: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000732A: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000732F: add     rsp, 60h
 * 00000001C0007333: pop     rdi
 * 00000001C0007334: retn
 * 00000001C0023870: cmp     byte ptr [rcx+29h], 4
 * 00000001C0023874: jb      loc_1C00072C1
 * 00000001C002387A: and     [rsp+68h+var_18], 0
 * 00000001C0023880: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0023888: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002388F: lea     r8, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C0023896: mov     rcx, [rcx+18h]
 * 00000001C002389A: mov     r9d, ebx
 * 00000001C002389D: mov     [rsp+68h+var_20], rbp
 * 00000001C00238A2: mov     [rsp+68h+var_28], rdx
 * 00000001C00238A7: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00238AF: mov     [rsp+68h+var_30], 4
 * 00000001C00238B8: mov     [rsp+68h+var_38], rdx
 * 00000001C00238BD: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00238C5: mov     [rsp+68h+var_40], rbp
 * 00000001C00238CA: mov     [rsp+68h+var_48], rdx
 * 00000001C00238CF: mov     edx, 2Bh ; '+'
 * 00000001C00238D4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00238DA: nop
 * 00000001C00238DB: jmp     loc_1C00072C1
 */
