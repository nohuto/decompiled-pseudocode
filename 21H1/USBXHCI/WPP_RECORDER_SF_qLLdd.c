/*
 * XREFs of WPP_RECORDER_SF_qLLdd @ 0x1C0006E44
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006588 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLLdd @ 0x1C0006E44
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006E44
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006E44: mov     [rsp+arg_0], rbx
 * 00000001C0006E49: mov     [rsp+arg_8], rbp
 * 00000001C0006E4E: push    rdi
 * 00000001C0006E4F: sub     rsp, 80h
 * 00000001C0006E56: mov     rbx, rcx
 * 00000001C0006E59: mov     edi, 4
 * 00000001C0006E5E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006E65: lea     ebp, [rdi+2Bh]
 * 00000001C0006E68: mov     eax, [rcx+2Ch]
 * 00000001C0006E6B: test    al, 40h
 * 00000001C0006E6D: jnz     loc_1C002204E
 * 00000001C0006E73: and     [rsp+88h+var_10], 0
 * 00000001C0006E79: lea     rax, [rsp+88h+arg_48]
 * 00000001C0006E81: mov     [rsp+88h+var_18], rdi
 * 00000001C0006E86: lea     r9, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C0006E8D: mov     [rsp+88h+var_20], rax
 * 00000001C0006E92: mov     r8d, 7
 * 00000001C0006E98: mov     [rsp+88h+var_28], rdi
 * 00000001C0006E9D: lea     rax, [rsp+88h+arg_40]
 * 00000001C0006EA5: mov     [rsp+88h+var_30], rax
 * 00000001C0006EAA: mov     edx, edi
 * 00000001C0006EAC: mov     [rsp+88h+var_38], rdi
 * 00000001C0006EB1: lea     rax, [rsp+88h+arg_38]
 * 00000001C0006EB9: mov     [rsp+88h+var_40], rax
 * 00000001C0006EBE: mov     rcx, rbx
 * 00000001C0006EC1: mov     [rsp+88h+var_48], rdi
 * 00000001C0006EC6: lea     rax, [rsp+88h+arg_30]
 * 00000001C0006ECE: mov     [rsp+88h+var_50], rax
 * 00000001C0006ED3: lea     rax, [rsp+88h+arg_28]
 * 00000001C0006EDB: mov     [rsp+88h+var_58], 8
 * 00000001C0006EE4: mov     [rsp+88h+var_60], rax
 * 00000001C0006EE9: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C0006EEE: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006EF5: nop     dword ptr [rax+rax+00h]
 * 00000001C0006EFA: lea     r11, [rsp+88h+var_8]
 * 00000001C0006F02: mov     rbx, [r11+10h]
 * 00000001C0006F06: mov     rbp, [r11+18h]
 * 00000001C0006F0A: mov     rsp, r11
 * 00000001C0006F0D: pop     rdi
 * 00000001C0006F0E: retn
 * 00000001C002204E: cmp     [rcx+29h], dil
 * 00000001C0022052: jb      loc_1C0006E73
 * 00000001C0022058: and     [rsp+88h+var_18], 0
 * 00000001C002205E: lea     rdx, [rsp+88h+arg_48]
 * 00000001C0022066: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002206D: lea     r8, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C0022074: mov     rcx, [rcx+18h]
 * 00000001C0022078: mov     [rsp+88h+var_20], rdi
 * 00000001C002207D: mov     [rsp+88h+var_28], rdx
 * 00000001C0022082: lea     rdx, [rsp+88h+arg_40]
 * 00000001C002208A: mov     [rsp+88h+var_30], rdi
 * 00000001C002208F: mov     [rsp+88h+var_38], rdx
 * 00000001C0022094: lea     rdx, [rsp+88h+arg_38]
 * 00000001C002209C: mov     [rsp+88h+var_40], rdi
 * 00000001C00220A1: mov     [rsp+88h+var_48], rdx
 * 00000001C00220A6: lea     rdx, [rsp+88h+arg_30]
 * 00000001C00220AE: mov     [rsp+88h+var_50], rdi
 * 00000001C00220B3: mov     [rsp+88h+var_58], rdx
 * 00000001C00220B8: lea     rdx, [rsp+88h+arg_28]
 * 00000001C00220C0: mov     [rsp+88h+var_60], 8
 * 00000001C00220C9: mov     [rsp+88h+var_68], rdx
 * 00000001C00220CE: mov     edx, 2Bh ; '+'
 * 00000001C00220D3: movzx   r9d, bp
 * 00000001C00220D7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00220DD: nop
 * 00000001C00220DE: jmp     loc_1C0006E73
 */
