/*
 * XREFs of WPP_RECORDER_SF_qLq @ 0x1C0006D28
 * Callers:
 *     Command_InternalSendCommand @ 0x1C00069D8 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLq @ 0x1C0006D28
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006D28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006D28: mov     [rsp+arg_0], rbx
 * 00000001C0006D2D: mov     [rsp+arg_8], rbp
 * 00000001C0006D32: push    rdi
 * 00000001C0006D33: sub     rsp, 60h
 * 00000001C0006D37: mov     rdi, rcx
 * 00000001C0006D3A: movzx   ebx, r9w
 * 00000001C0006D3E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006D45: mov     ebp, 8
 * 00000001C0006D4A: mov     eax, [rcx+2Ch]
 * 00000001C0006D4D: test    al, 40h
 * 00000001C0006D4F: jnz     loc_1C0021F12
 * 00000001C0006D55: and     [rsp+68h+var_10], 0
 * 00000001C0006D5B: lea     rax, [rsp+68h+arg_38]
 * 00000001C0006D63: mov     [rsp+68h+var_18], rbp
 * 00000001C0006D68: lea     r9, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C0006D6F: mov     [rsp+68h+var_20], rax
 * 00000001C0006D74: mov     edx, 4
 * 00000001C0006D79: mov     [rsp+68h+var_28], 4
 * 00000001C0006D82: lea     rax, [rsp+68h+arg_30]
 * 00000001C0006D8A: mov     [rsp+68h+var_30], rax
 * 00000001C0006D8F: mov     rcx, rdi
 * 00000001C0006D92: lea     rax, [rsp+68h+arg_28]
 * 00000001C0006D9A: mov     [rsp+68h+var_38], rbp
 * 00000001C0006D9F: mov     [rsp+68h+var_40], rax
 * 00000001C0006DA4: lea     r8d, [rdx+3]
 * 00000001C0006DA8: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C0006DAD: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006DB4: nop     dword ptr [rax+rax+00h]
 * 00000001C0006DB9: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0006DBE: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0006DC3: add     rsp, 60h
 * 00000001C0006DC7: pop     rdi
 * 00000001C0006DC8: retn
 * 00000001C0021F12: cmp     byte ptr [rcx+29h], 4
 * 00000001C0021F16: jb      loc_1C0006D55
 * 00000001C0021F1C: and     [rsp+68h+var_18], 0
 * 00000001C0021F22: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0021F2A: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0021F31: lea     r8, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C0021F38: mov     rcx, [rcx+18h]
 * 00000001C0021F3C: mov     r9d, ebx
 * 00000001C0021F3F: mov     [rsp+68h+var_20], rbp
 * 00000001C0021F44: mov     [rsp+68h+var_28], rdx
 * 00000001C0021F49: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0021F51: mov     [rsp+68h+var_30], 4
 * 00000001C0021F5A: mov     [rsp+68h+var_38], rdx
 * 00000001C0021F5F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0021F67: mov     [rsp+68h+var_40], rbp
 * 00000001C0021F6C: mov     [rsp+68h+var_48], rdx
 * 00000001C0021F71: mov     edx, 2Bh ; '+'
 * 00000001C0021F76: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0021F7C: nop
 * 00000001C0021F7D: jmp     loc_1C0006D55
 */
