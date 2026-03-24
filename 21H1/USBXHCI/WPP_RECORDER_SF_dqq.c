/*
 * XREFs of WPP_RECORDER_SF_dqq @ 0x1C0010178
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00077E4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_SetAddress @ 0x1C000FDE0 (UsbDevice_SetAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqq @ 0x1C0010178
 * Reason: Hex-Rays returned no pseudocode for 0x1C0010178
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0010178: mov     [rsp+arg_0], rbx
 * 00000001C001017D: mov     [rsp+arg_8], rbp
 * 00000001C0010182: push    rdi
 * 00000001C0010183: sub     rsp, 60h
 * 00000001C0010187: mov     rdi, rcx
 * 00000001C001018A: movzx   ebx, r9w
 * 00000001C001018E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0010195: mov     ebp, 8
 * 00000001C001019A: test    dword ptr [rcx+2Ch], 800h
 * 00000001C00101A1: jnz     loc_1C0023ABA
 * 00000001C00101A7: and     [rsp+68h+var_10], 0
 * 00000001C00101AD: lea     rax, [rsp+68h+arg_38]
 * 00000001C00101B5: mov     [rsp+68h+var_18], rbp
 * 00000001C00101BA: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C00101C1: mov     [rsp+68h+var_20], rax
 * 00000001C00101C6: mov     edx, 4
 * 00000001C00101CB: mov     [rsp+68h+var_28], rbp
 * 00000001C00101D0: lea     rax, [rsp+68h+arg_30]
 * 00000001C00101D8: mov     [rsp+68h+var_30], rax
 * 00000001C00101DD: mov     rcx, rdi
 * 00000001C00101E0: lea     rax, [rsp+68h+arg_28]
 * 00000001C00101E8: mov     [rsp+68h+var_38], 4
 * 00000001C00101F1: mov     [rsp+68h+var_40], rax
 * 00000001C00101F6: lea     r8d, [rdx+8]
 * 00000001C00101FA: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C00101FF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0010206: nop     dword ptr [rax+rax+00h]
 * 00000001C001020B: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0010210: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0010215: add     rsp, 60h
 * 00000001C0010219: pop     rdi
 * 00000001C001021A: retn
 * 00000001C0023ABA: cmp     byte ptr [rcx+29h], 4
 * 00000001C0023ABE: jb      loc_1C00101A7
 * 00000001C0023AC4: and     [rsp+68h+var_18], 0
 * 00000001C0023ACA: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0023AD2: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0023AD9: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0023AE0: mov     rcx, [rcx+18h]
 * 00000001C0023AE4: mov     r9d, ebx
 * 00000001C0023AE7: mov     [rsp+68h+var_20], rbp
 * 00000001C0023AEC: mov     [rsp+68h+var_28], rdx
 * 00000001C0023AF1: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0023AF9: mov     [rsp+68h+var_30], rbp
 * 00000001C0023AFE: mov     [rsp+68h+var_38], rdx
 * 00000001C0023B03: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0023B0B: mov     [rsp+68h+var_40], 4
 * 00000001C0023B14: mov     [rsp+68h+var_48], rdx
 * 00000001C0023B19: mov     edx, 2Bh ; '+'
 * 00000001C0023B1E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0023B24: nop
 * 00000001C0023B25: jmp     loc_1C00101A7
 */
