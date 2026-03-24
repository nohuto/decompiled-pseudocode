/*
 * XREFs of WPP_RECORDER_SF_DDDqdD @ 0x1C000CABC
 * Callers:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C000C920 (Bulk_Transfer_PrepareForCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqdD @ 0x1C000CABC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CABC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CABC: mov     rax, rsp
 * 00000001C000CABF: mov     [rax+8], rbx
 * 00000001C000CAC3: mov     [rax+10h], rdi
 * 00000001C000CAC7: mov     [rax+18h], r14
 * 00000001C000CACB: push    rbp
 * 00000001C000CACC: lea     rbp, [rax-27h]
 * 00000001C000CAD0: sub     rsp, 90h
 * 00000001C000CAD7: mov     rbx, rcx
 * 00000001C000CADA: mov     edi, 4
 * 00000001C000CADF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000CAE6: lea     r14d, [rdi+25h]
 * 00000001C000CAEA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000CAF1: jnz     loc_1C001F28A
 * 00000001C000CAF7: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C000CB00: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C000CB04: mov     [rsp+90h+var_10], rdi
 * 00000001C000CB0C: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C000CB13: mov     [rsp+90h+var_18], rax
 * 00000001C000CB18: mov     r8d, 0Eh
 * 00000001C000CB1E: mov     [rsp+90h+var_20], rdi
 * 00000001C000CB23: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C000CB27: mov     [rsp+90h+var_28], rax
 * 00000001C000CB2C: mov     edx, edi
 * 00000001C000CB2E: mov     [rsp+90h+var_30], 8
 * 00000001C000CB37: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C000CB3B: mov     [rsp+90h+var_38], rax
 * 00000001C000CB40: mov     rcx, rbx
 * 00000001C000CB43: mov     [rsp+90h+var_40], rdi
 * 00000001C000CB48: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C000CB4C: mov     [rsp+90h+var_48], rax
 * 00000001C000CB51: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C000CB55: mov     [rsp+90h+var_50], rdi
 * 00000001C000CB5A: mov     [rsp+90h+var_58], rax
 * 00000001C000CB5F: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C000CB63: mov     [rsp+90h+var_60], rdi
 * 00000001C000CB68: mov     [rsp+90h+var_68], rax
 * 00000001C000CB6D: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C000CB73: call    cs:__imp_WppAutoLogTrace
 * 00000001C000CB7A: nop     dword ptr [rax+rax+00h]
 * 00000001C000CB7F: lea     r11, [rsp+90h+var_s0]
 * 00000001C000CB87: mov     rbx, [r11+10h]
 * 00000001C000CB8B: mov     rdi, [r11+18h]
 * 00000001C000CB8F: mov     r14, [r11+20h]
 * 00000001C000CB93: mov     rsp, r11
 * 00000001C000CB96: pop     rbp
 * 00000001C000CB97: retn
 * 00000001C001F28A: cmp     [rcx+29h], dil
 * 00000001C001F28E: jb      loc_1C000CAF7
 * 00000001C001F294: and     [rsp+90h+var_10], 0
 * 00000001C001F29D: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C001F2A1: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C001F2A8: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C001F2AF: mov     rcx, [rcx+18h]
 * 00000001C001F2B3: mov     [rsp+90h+var_18], rdi
 * 00000001C001F2B8: mov     [rsp+90h+var_20], rdx
 * 00000001C001F2BD: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C001F2C1: mov     [rsp+90h+var_28], rdi
 * 00000001C001F2C6: mov     [rsp+90h+var_30], rdx
 * 00000001C001F2CB: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C001F2CF: mov     [rsp+90h+var_38], 8
 * 00000001C001F2D8: mov     [rsp+90h+var_40], rdx
 * 00000001C001F2DD: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C001F2E1: mov     [rsp+90h+var_48], rdi
 * 00000001C001F2E6: mov     [rsp+90h+var_50], rdx
 * 00000001C001F2EB: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C001F2EF: mov     [rsp+90h+var_58], rdi
 * 00000001C001F2F4: mov     [rsp+90h+var_60], rdx
 * 00000001C001F2F9: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C001F2FD: mov     [rsp+90h+var_68], rdi
 * 00000001C001F302: mov     [rsp+90h+var_70], rdx
 * 00000001C001F307: mov     edx, 2Bh ; '+'
 * 00000001C001F30C: movzx   r9d, r14w
 * 00000001C001F310: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001F316: nop
 * 00000001C001F317: jmp     loc_1C000CAF7
 */
