/*
 * XREFs of WPP_RECORDER_SF_qdi @ 0x1C000F7BC
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000F6C4 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdi @ 0x1C000F7BC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F7BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F7BC: mov     [rsp+arg_0], rbx
 * 00000001C000F7C1: mov     [rsp+arg_8], rbp
 * 00000001C000F7C6: push    rsi
 * 00000001C000F7C7: sub     rsp, 60h
 * 00000001C000F7CB: mov     rbx, rcx
 * 00000001C000F7CE: mov     ebp, 0Bh
 * 00000001C000F7D3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000F7DA: lea     esi, [rbp-3]
 * 00000001C000F7DD: test    dword ptr [rcx+2Ch], 200h
 * 00000001C000F7E4: jnz     loc_1C002265E
 * 00000001C000F7EA: and     [rsp+68h+var_10], 0
 * 00000001C000F7F0: lea     rax, [rsp+68h+arg_38]
 * 00000001C000F7F8: mov     [rsp+68h+var_18], rsi
 * 00000001C000F7FD: lea     r9, WPP_57b4ec5b2a77395746dfb5e96c966fbd_Traceguids
 * 00000001C000F804: mov     [rsp+68h+var_20], rax
 * 00000001C000F809: mov     edx, 4
 * 00000001C000F80E: mov     [rsp+68h+var_28], 4
 * 00000001C000F817: lea     rax, [rsp+68h+arg_30]
 * 00000001C000F81F: mov     [rsp+68h+var_30], rax
 * 00000001C000F824: mov     rcx, rbx
 * 00000001C000F827: lea     rax, [rsp+68h+arg_28]
 * 00000001C000F82F: mov     [rsp+68h+var_38], rsi
 * 00000001C000F834: mov     [rsp+68h+var_40], rax
 * 00000001C000F839: lea     r8d, [rdx+6]
 * 00000001C000F83D: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C000F842: call    cs:__imp_WppAutoLogTrace
 * 00000001C000F849: nop     dword ptr [rax+rax+00h]
 * 00000001C000F84E: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000F853: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000F858: add     rsp, 60h
 * 00000001C000F85C: pop     rsi
 * 00000001C000F85D: retn
 * 00000001C002265E: cmp     byte ptr [rcx+29h], 4
 * 00000001C0022662: jb      loc_1C000F7EA
 * 00000001C0022668: and     [rsp+68h+var_18], 0
 * 00000001C002266E: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0022676: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C002267D: lea     r8, WPP_57b4ec5b2a77395746dfb5e96c966fbd_Traceguids
 * 00000001C0022684: mov     rcx, [rcx+18h]
 * 00000001C0022688: mov     [rsp+68h+var_20], rsi
 * 00000001C002268D: mov     [rsp+68h+var_28], rdx
 * 00000001C0022692: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002269A: mov     [rsp+68h+var_30], 4
 * 00000001C00226A3: mov     [rsp+68h+var_38], rdx
 * 00000001C00226A8: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00226B0: mov     [rsp+68h+var_40], rsi
 * 00000001C00226B5: mov     [rsp+68h+var_48], rdx
 * 00000001C00226BA: mov     edx, 2Bh ; '+'
 * 00000001C00226BF: movzx   r9d, bp
 * 00000001C00226C3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00226C9: nop
 * 00000001C00226CA: jmp     loc_1C000F7EA
 */
