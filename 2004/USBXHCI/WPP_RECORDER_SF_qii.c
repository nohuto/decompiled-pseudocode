/*
 * XREFs of WPP_RECORDER_SF_qii @ 0x1C002EE28
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006588 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qii @ 0x1C002EE28
 * Reason: Hex-Rays returned no pseudocode for 0x1C002EE28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002EE28: mov     r11, rsp
 * 00000001C002EE2B: mov     [r11+8], rbx
 * 00000001C002EE2F: mov     [r11+10h], rsi
 * 00000001C002EE33: push    rdi
 * 00000001C002EE34: sub     rsp, 60h
 * 00000001C002EE38: mov     rbx, rcx
 * 00000001C002EE3B: mov     esi, 2Ch ; ','
 * 00000001C002EE40: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002EE47: lea     edi, [rsi-24h]
 * 00000001C002EE4A: mov     eax, [rcx+2Ch]
 * 00000001C002EE4D: test    al, 40h
 * 00000001C002EE4F: jz      short loc_1C002EE9F
 * 00000001C002EE51: cmp     byte ptr [rcx+29h], 5
 * 00000001C002EE55: jb      short loc_1C002EE9F
 * 00000001C002EE57: and     qword ptr [r11-18h], 0
 * 00000001C002EE5C: lea     rdx, [r11+40h]
 * 00000001C002EE60: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002EE67: lea     r8, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C002EE6E: mov     rcx, [rcx+18h]
 * 00000001C002EE72: mov     [r11-20h], rdi
 * 00000001C002EE76: mov     [r11-28h], rdx
 * 00000001C002EE7A: lea     rdx, [r11+38h]
 * 00000001C002EE7E: mov     [r11-30h], rdi
 * 00000001C002EE82: mov     [r11-38h], rdx
 * 00000001C002EE86: lea     rdx, [r11+30h]
 * 00000001C002EE8A: mov     [r11-40h], rdi
 * 00000001C002EE8E: mov     [r11-48h], rdx
 * 00000001C002EE92: lea     edx, [rsi-1]
 * 00000001C002EE95: movzx   r9d, si
 * 00000001C002EE99: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002EE9F: and     [rsp+68h+var_10], 0
 * 00000001C002EEA5: lea     rax, [rsp+68h+arg_38]
 * 00000001C002EEAD: mov     [rsp+68h+var_18], rdi
 * 00000001C002EEB2: lea     r9, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C002EEB9: mov     [rsp+68h+var_20], rax
 * 00000001C002EEBE: mov     edx, 5
 * 00000001C002EEC3: mov     [rsp+68h+var_28], rdi
 * 00000001C002EEC8: lea     rax, [rsp+68h+arg_30]
 * 00000001C002EED0: mov     [rsp+68h+var_30], rax
 * 00000001C002EED5: mov     rcx, rbx
 * 00000001C002EED8: lea     rax, [rsp+68h+arg_28]
 * 00000001C002EEE0: mov     [rsp+68h+var_38], rdi
 * 00000001C002EEE5: mov     [rsp+68h+var_40], rax
 * 00000001C002EEEA: lea     r8d, [rdx+2]
 * 00000001C002EEEE: mov     [rsp+68h+var_48], si
 * 00000001C002EEF3: call    cs:__imp_WppAutoLogTrace
 * 00000001C002EEFA: nop     dword ptr [rax+rax+00h]
 * 00000001C002EEFF: mov     rbx, [rsp+68h+arg_0]
 * 00000001C002EF04: mov     rsi, [rsp+68h+arg_8]
 * 00000001C002EF09: add     rsp, 60h
 * 00000001C002EF0D: pop     rdi
 * 00000001C002EF0E: retn
 */
