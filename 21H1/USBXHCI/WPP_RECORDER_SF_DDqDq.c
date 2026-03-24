/*
 * XREFs of WPP_RECORDER_SF_DDqDq @ 0x1C00051EC
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C0003D90 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDq @ 0x1C00051EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00051EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00051EC: mov     [rsp+arg_0], rbx
 * 00000001C00051F1: mov     [rsp+arg_8], rbp
 * 00000001C00051F6: mov     [rsp+arg_10], rsi
 * 00000001C00051FB: push    rdi
 * 00000001C00051FC: sub     rsp, 80h
 * 00000001C0005203: mov     edi, 4
 * 00000001C0005208: mov     rbx, rcx
 * 00000001C000520B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005212: lea     ebp, [rdi+21h]
 * 00000001C0005215: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000521C: lea     esi, [rdi+4]
 * 00000001C000521F: jnz     loc_1C001B2DA
 * 00000001C0005225: and     [rsp+88h+var_10], 0
 * 00000001C000522B: lea     rax, [rsp+88h+arg_48]
 * 00000001C0005233: mov     [rsp+88h+var_18], rsi
 * 00000001C0005238: lea     r9, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C000523F: mov     [rsp+88h+var_20], rax
 * 00000001C0005244: mov     r8d, 0Eh
 * 00000001C000524A: mov     [rsp+88h+var_28], rdi
 * 00000001C000524F: lea     rax, [rsp+88h+arg_40]
 * 00000001C0005257: mov     [rsp+88h+var_30], rax
 * 00000001C000525C: mov     edx, edi
 * 00000001C000525E: mov     [rsp+88h+var_38], rsi
 * 00000001C0005263: lea     rax, [rsp+88h+arg_38]
 * 00000001C000526B: mov     [rsp+88h+var_40], rax
 * 00000001C0005270: mov     rcx, rbx
 * 00000001C0005273: mov     [rsp+88h+var_48], rdi
 * 00000001C0005278: lea     rax, [rsp+88h+arg_30]
 * 00000001C0005280: mov     [rsp+88h+var_50], rax
 * 00000001C0005285: lea     rax, [rsp+88h+arg_28]
 * 00000001C000528D: mov     [rsp+88h+var_58], rdi
 * 00000001C0005292: mov     [rsp+88h+var_60], rax
 * 00000001C0005297: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C000529C: call    cs:__imp_WppAutoLogTrace
 * 00000001C00052A3: nop     dword ptr [rax+rax+00h]
 * 00000001C00052A8: lea     r11, [rsp+88h+var_8]
 * 00000001C00052B0: mov     rbx, [r11+10h]
 * 00000001C00052B4: mov     rbp, [r11+18h]
 * 00000001C00052B8: mov     rsi, [r11+20h]
 * 00000001C00052BC: mov     rsp, r11
 * 00000001C00052BF: pop     rdi
 * 00000001C00052C0: retn
 * 00000001C001B2DA: cmp     [rcx+29h], dil
 * 00000001C001B2DE: jb      loc_1C0005225
 * 00000001C001B2E4: and     [rsp+88h+var_18], 0
 * 00000001C001B2EA: lea     rdx, [rsp+88h+arg_48]
 * 00000001C001B2F2: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001B2F9: lea     r8, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C001B300: mov     rcx, [rcx+18h]
 * 00000001C001B304: mov     [rsp+88h+var_20], rsi
 * 00000001C001B309: mov     [rsp+88h+var_28], rdx
 * 00000001C001B30E: lea     rdx, [rsp+88h+arg_40]
 * 00000001C001B316: mov     [rsp+88h+var_30], rdi
 * 00000001C001B31B: mov     [rsp+88h+var_38], rdx
 * 00000001C001B320: lea     rdx, [rsp+88h+arg_38]
 * 00000001C001B328: mov     [rsp+88h+var_40], rsi
 * 00000001C001B32D: mov     [rsp+88h+var_48], rdx
 * 00000001C001B332: lea     rdx, [rsp+88h+arg_30]
 * 00000001C001B33A: mov     [rsp+88h+var_50], rdi
 * 00000001C001B33F: mov     [rsp+88h+var_58], rdx
 * 00000001C001B344: lea     rdx, [rsp+88h+arg_28]
 * 00000001C001B34C: mov     [rsp+88h+var_60], rdi
 * 00000001C001B351: mov     [rsp+88h+var_68], rdx
 * 00000001C001B356: mov     edx, 2Bh ; '+'
 * 00000001C001B35B: movzx   r9d, bp
 * 00000001C001B35F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001B365: nop
 * 00000001C001B366: jmp     loc_1C0005225
 */
