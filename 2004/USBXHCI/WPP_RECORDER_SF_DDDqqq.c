/*
 * XREFs of WPP_RECORDER_SF_DDDqqq @ 0x1C000D5B0
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000B5E4 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqq @ 0x1C000D5B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000D5B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000D5B0: mov     rax, rsp
 * 00000001C000D5B3: mov     [rax+8], rbx
 * 00000001C000D5B7: mov     [rax+10h], rsi
 * 00000001C000D5BB: mov     [rax+18h], rdi
 * 00000001C000D5BF: mov     [rax+20h], r14
 * 00000001C000D5C3: push    rbp
 * 00000001C000D5C4: lea     rbp, [rax-27h]
 * 00000001C000D5C8: sub     rsp, 90h
 * 00000001C000D5CF: mov     edi, 4
 * 00000001C000D5D4: mov     rbx, rcx
 * 00000001C000D5D7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000D5DE: lea     esi, [rdi+4]
 * 00000001C000D5E1: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000D5E8: lea     r14d, [rdi+35h]
 * 00000001C000D5EC: jnz     loc_1C001E16A
 * 00000001C000D5F2: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C000D5FB: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C000D5FF: mov     [rsp+90h+var_10], rsi
 * 00000001C000D607: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C000D60E: mov     [rsp+90h+var_18], rax
 * 00000001C000D613: mov     r8d, 0Eh
 * 00000001C000D619: mov     [rsp+90h+var_20], rsi
 * 00000001C000D61E: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C000D622: mov     [rsp+90h+var_28], rax
 * 00000001C000D627: mov     edx, edi
 * 00000001C000D629: mov     [rsp+90h+var_30], rsi
 * 00000001C000D62E: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C000D632: mov     [rsp+90h+var_38], rax
 * 00000001C000D637: mov     rcx, rbx
 * 00000001C000D63A: mov     [rsp+90h+var_40], rdi
 * 00000001C000D63F: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C000D643: mov     [rsp+90h+var_48], rax
 * 00000001C000D648: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C000D64C: mov     [rsp+90h+var_50], rdi
 * 00000001C000D651: mov     [rsp+90h+var_58], rax
 * 00000001C000D656: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C000D65A: mov     [rsp+90h+var_60], rdi
 * 00000001C000D65F: mov     [rsp+90h+var_68], rax
 * 00000001C000D664: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C000D66A: call    cs:__imp_WppAutoLogTrace
 * 00000001C000D671: nop     dword ptr [rax+rax+00h]
 * 00000001C000D676: lea     r11, [rsp+90h+var_s0]
 * 00000001C000D67E: mov     rbx, [r11+10h]
 * 00000001C000D682: mov     rsi, [r11+18h]
 * 00000001C000D686: mov     rdi, [r11+20h]
 * 00000001C000D68A: mov     r14, [r11+28h]
 * 00000001C000D68E: mov     rsp, r11
 * 00000001C000D691: pop     rbp
 * 00000001C000D692: retn
 * 00000001C001E16A: cmp     [rcx+29h], dil
 * 00000001C001E16E: jb      loc_1C000D5F2
 * 00000001C001E174: and     [rsp+90h+var_10], 0
 * 00000001C001E17D: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C001E181: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001E188: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C001E18F: mov     rcx, [rcx+18h]
 * 00000001C001E193: mov     [rsp+90h+var_18], rsi
 * 00000001C001E198: mov     [rsp+90h+var_20], rdx
 * 00000001C001E19D: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C001E1A1: mov     [rsp+90h+var_28], rsi
 * 00000001C001E1A6: mov     [rsp+90h+var_30], rdx
 * 00000001C001E1AB: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C001E1AF: mov     [rsp+90h+var_38], rsi
 * 00000001C001E1B4: mov     [rsp+90h+var_40], rdx
 * 00000001C001E1B9: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C001E1BD: mov     [rsp+90h+var_48], rdi
 * 00000001C001E1C2: mov     [rsp+90h+var_50], rdx
 * 00000001C001E1C7: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C001E1CB: mov     [rsp+90h+var_58], rdi
 * 00000001C001E1D0: mov     [rsp+90h+var_60], rdx
 * 00000001C001E1D5: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C001E1D9: mov     [rsp+90h+var_68], rdi
 * 00000001C001E1DE: mov     [rsp+90h+var_70], rdx
 * 00000001C001E1E3: mov     edx, 2Bh ; '+'
 * 00000001C001E1E8: movzx   r9d, r14w
 * 00000001C001E1EC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001E1F2: nop
 * 00000001C001E1F3: jmp     loc_1C000D5F2
 */
