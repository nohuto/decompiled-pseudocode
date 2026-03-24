/*
 * XREFs of WPP_RECORDER_SF_dqq @ 0x1C0010C04
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C0007D58 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_SetAddress @ 0x1C001086C (UsbDevice_SetAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqq @ 0x1C0010C04
 * Reason: Hex-Rays returned no pseudocode for 0x1C0010C04
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0010C04: mov     [rsp+arg_0], rbx
 * 00000001C0010C09: mov     [rsp+arg_8], rbp
 * 00000001C0010C0E: push    rdi
 * 00000001C0010C0F: sub     rsp, 60h
 * 00000001C0010C13: mov     rdi, rcx
 * 00000001C0010C16: movzx   ebx, r9w
 * 00000001C0010C1A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0010C21: mov     ebp, 8
 * 00000001C0010C26: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0010C2D: jnz     loc_1C0025C1C
 * 00000001C0010C33: and     [rsp+68h+var_10], 0
 * 00000001C0010C39: lea     rax, [rsp+68h+arg_38]
 * 00000001C0010C41: mov     [rsp+68h+var_18], rbp
 * 00000001C0010C46: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0010C4D: mov     [rsp+68h+var_20], rax
 * 00000001C0010C52: mov     edx, 4
 * 00000001C0010C57: mov     [rsp+68h+var_28], rbp
 * 00000001C0010C5C: lea     rax, [rsp+68h+arg_30]
 * 00000001C0010C64: mov     [rsp+68h+var_30], rax
 * 00000001C0010C69: mov     rcx, rdi
 * 00000001C0010C6C: lea     rax, [rsp+68h+arg_28]
 * 00000001C0010C74: mov     [rsp+68h+var_38], 4
 * 00000001C0010C7D: mov     [rsp+68h+var_40], rax
 * 00000001C0010C82: lea     r8d, [rdx+8]
 * 00000001C0010C86: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C0010C8B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0010C92: nop     dword ptr [rax+rax+00h]
 * 00000001C0010C97: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0010C9C: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0010CA1: add     rsp, 60h
 * 00000001C0010CA5: pop     rdi
 * 00000001C0010CA6: retn
 * 00000001C0025C1C: cmp     byte ptr [rcx+29h], 4
 * 00000001C0025C20: jb      loc_1C0010C33
 * 00000001C0025C26: and     [rsp+68h+var_18], 0
 * 00000001C0025C2C: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0025C34: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0025C3B: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0025C42: mov     rcx, [rcx+18h]
 * 00000001C0025C46: mov     r9d, ebx
 * 00000001C0025C49: mov     [rsp+68h+var_20], rbp
 * 00000001C0025C4E: mov     [rsp+68h+var_28], rdx
 * 00000001C0025C53: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0025C5B: mov     [rsp+68h+var_30], rbp
 * 00000001C0025C60: mov     [rsp+68h+var_38], rdx
 * 00000001C0025C65: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0025C6D: mov     [rsp+68h+var_40], 4
 * 00000001C0025C76: mov     [rsp+68h+var_48], rdx
 * 00000001C0025C7B: mov     edx, 2Bh ; '+'
 * 00000001C0025C80: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0025C86: nop
 * 00000001C0025C87: jmp     loc_1C0010C33
 */
