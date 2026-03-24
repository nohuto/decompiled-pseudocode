/*
 * XREFs of WPP_RECORDER_SF_DDDqdD @ 0x1C000C1EC
 * Callers:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C000C050 (Bulk_Transfer_PrepareForCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqdD @ 0x1C000C1EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C1EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C1EC: mov     rax, rsp
 * 00000001C000C1EF: mov     [rax+8], rbx
 * 00000001C000C1F3: mov     [rax+10h], rdi
 * 00000001C000C1F7: mov     [rax+18h], r14
 * 00000001C000C1FB: push    rbp
 * 00000001C000C1FC: lea     rbp, [rax-27h]
 * 00000001C000C200: sub     rsp, 90h
 * 00000001C000C207: mov     rbx, rcx
 * 00000001C000C20A: mov     edi, 4
 * 00000001C000C20F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000C216: lea     r14d, [rdi+25h]
 * 00000001C000C21A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000C221: jnz     loc_1C001C760
 * 00000001C000C227: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C000C230: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C000C234: mov     [rsp+90h+var_10], rdi
 * 00000001C000C23C: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C000C243: mov     [rsp+90h+var_18], rax
 * 00000001C000C248: mov     r8d, 0Eh
 * 00000001C000C24E: mov     [rsp+90h+var_20], rdi
 * 00000001C000C253: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C000C257: mov     [rsp+90h+var_28], rax
 * 00000001C000C25C: mov     edx, edi
 * 00000001C000C25E: mov     [rsp+90h+var_30], 8
 * 00000001C000C267: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C000C26B: mov     [rsp+90h+var_38], rax
 * 00000001C000C270: mov     rcx, rbx
 * 00000001C000C273: mov     [rsp+90h+var_40], rdi
 * 00000001C000C278: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C000C27C: mov     [rsp+90h+var_48], rax
 * 00000001C000C281: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C000C285: mov     [rsp+90h+var_50], rdi
 * 00000001C000C28A: mov     [rsp+90h+var_58], rax
 * 00000001C000C28F: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C000C293: mov     [rsp+90h+var_60], rdi
 * 00000001C000C298: mov     [rsp+90h+var_68], rax
 * 00000001C000C29D: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C000C2A3: call    cs:__imp_WppAutoLogTrace
 * 00000001C000C2AA: nop     dword ptr [rax+rax+00h]
 * 00000001C000C2AF: lea     r11, [rsp+90h+var_s0]
 * 00000001C000C2B7: mov     rbx, [r11+10h]
 * 00000001C000C2BB: mov     rdi, [r11+18h]
 * 00000001C000C2BF: mov     r14, [r11+20h]
 * 00000001C000C2C3: mov     rsp, r11
 * 00000001C000C2C6: pop     rbp
 * 00000001C000C2C7: retn
 * 00000001C001C760: cmp     [rcx+29h], dil
 * 00000001C001C764: jb      loc_1C000C227
 * 00000001C001C76A: and     [rsp+90h+var_10], 0
 * 00000001C001C773: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C001C777: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001C77E: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C001C785: mov     rcx, [rcx+18h]
 * 00000001C001C789: mov     [rsp+90h+var_18], rdi
 * 00000001C001C78E: mov     [rsp+90h+var_20], rdx
 * 00000001C001C793: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C001C797: mov     [rsp+90h+var_28], rdi
 * 00000001C001C79C: mov     [rsp+90h+var_30], rdx
 * 00000001C001C7A1: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C001C7A5: mov     [rsp+90h+var_38], 8
 * 00000001C001C7AE: mov     [rsp+90h+var_40], rdx
 * 00000001C001C7B3: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C001C7B7: mov     [rsp+90h+var_48], rdi
 * 00000001C001C7BC: mov     [rsp+90h+var_50], rdx
 * 00000001C001C7C1: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C001C7C5: mov     [rsp+90h+var_58], rdi
 * 00000001C001C7CA: mov     [rsp+90h+var_60], rdx
 * 00000001C001C7CF: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C001C7D3: mov     [rsp+90h+var_68], rdi
 * 00000001C001C7D8: mov     [rsp+90h+var_70], rdx
 * 00000001C001C7DD: mov     edx, 2Bh ; '+'
 * 00000001C001C7E2: movzx   r9d, r14w
 * 00000001C001C7E6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001C7EC: nop
 * 00000001C001C7ED: jmp     loc_1C000C227
 */
