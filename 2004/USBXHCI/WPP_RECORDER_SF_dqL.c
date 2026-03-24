/*
 * XREFs of WPP_RECORDER_SF_dqL @ 0x1C0008B30
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C000F9F0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045554 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqL @ 0x1C0008B30
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008B30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008B30: mov     [rsp+arg_0], rbx
 * 00000001C0008B35: mov     [rsp+arg_8], rbp
 * 00000001C0008B3A: mov     [rsp+arg_10], rsi
 * 00000001C0008B3F: push    rdi
 * 00000001C0008B40: sub     rsp, 60h
 * 00000001C0008B44: mov     rsi, rcx
 * 00000001C0008B47: movzx   edi, r9w
 * 00000001C0008B4B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0008B52: mov     ebp, 4
 * 00000001C0008B57: movzx   ebx, dl
 * 00000001C0008B5A: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0008B61: jnz     loc_1C0023B2A
 * 00000001C0008B67: and     [rsp+68h+var_10], 0
 * 00000001C0008B6D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0008B75: mov     [rsp+68h+var_18], rbp
 * 00000001C0008B7A: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0008B81: mov     [rsp+68h+var_20], rax
 * 00000001C0008B86: mov     r8d, 0Ch
 * 00000001C0008B8C: mov     [rsp+68h+var_28], 8
 * 00000001C0008B95: lea     rax, [rsp+68h+arg_30]
 * 00000001C0008B9D: mov     [rsp+68h+var_30], rax
 * 00000001C0008BA2: mov     edx, ebx
 * 00000001C0008BA4: lea     rax, [rsp+68h+arg_28]
 * 00000001C0008BAC: mov     [rsp+68h+var_38], rbp
 * 00000001C0008BB1: mov     [rsp+68h+var_40], rax
 * 00000001C0008BB6: mov     rcx, rsi
 * 00000001C0008BB9: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0008BBE: call    cs:__imp_WppAutoLogTrace
 * 00000001C0008BC5: nop     dword ptr [rax+rax+00h]
 * 00000001C0008BCA: lea     r11, [rsp+68h+var_8]
 * 00000001C0008BCF: mov     rbx, [r11+10h]
 * 00000001C0008BD3: mov     rbp, [r11+18h]
 * 00000001C0008BD7: mov     rsi, [r11+20h]
 * 00000001C0008BDB: mov     rsp, r11
 * 00000001C0008BDE: pop     rdi
 * 00000001C0008BDF: retn
 * 00000001C0023B2A: cmp     [rcx+29h], bl
 * 00000001C0023B2D: jb      loc_1C0008B67
 * 00000001C0023B33: and     [rsp+68h+var_18], 0
 * 00000001C0023B39: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0023B41: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0023B48: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0023B4F: mov     rcx, [rcx+18h]
 * 00000001C0023B53: mov     r9d, edi
 * 00000001C0023B56: mov     [rsp+68h+var_20], rbp
 * 00000001C0023B5B: mov     [rsp+68h+var_28], rdx
 * 00000001C0023B60: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0023B68: mov     [rsp+68h+var_30], 8
 * 00000001C0023B71: mov     [rsp+68h+var_38], rdx
 * 00000001C0023B76: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0023B7E: mov     [rsp+68h+var_40], rbp
 * 00000001C0023B83: mov     [rsp+68h+var_48], rdx
 * 00000001C0023B88: mov     edx, 2Bh ; '+'
 * 00000001C0023B8D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0023B93: nop
 * 00000001C0023B94: jmp     loc_1C0008B67
 */
