/*
 * XREFs of WPP_RECORDER_SF_DDDq @ 0x1C000BEA4
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x1C000BD30 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_RetrieveNextStage @ 0x1C000C480 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDq @ 0x1C000BEA4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BEA4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BEA4: mov     [rsp+arg_0], rbx
 * 00000001C000BEA9: mov     [rsp+arg_8], rbp
 * 00000001C000BEAE: mov     [rsp+arg_10], rsi
 * 00000001C000BEB3: push    rdi
 * 00000001C000BEB4: sub     rsp, 70h
 * 00000001C000BEB8: mov     rsi, rcx
 * 00000001C000BEBB: movzx   edi, r9w
 * 00000001C000BEBF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000BEC6: mov     ebp, 4
 * 00000001C000BECB: movzx   ebx, dl
 * 00000001C000BECE: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000BED5: jnz     loc_1C001C5E8
 * 00000001C000BEDB: and     [rsp+78h+var_10], 0
 * 00000001C000BEE1: lea     rax, [rsp+78h+arg_40]
 * 00000001C000BEE9: mov     [rsp+78h+var_18], 8
 * 00000001C000BEF2: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C000BEF9: mov     [rsp+78h+var_20], rax
 * 00000001C000BEFE: mov     r8d, 0Eh
 * 00000001C000BF04: mov     [rsp+78h+var_28], rbp
 * 00000001C000BF09: lea     rax, [rsp+78h+arg_38]
 * 00000001C000BF11: mov     [rsp+78h+var_30], rax
 * 00000001C000BF16: mov     edx, ebx
 * 00000001C000BF18: mov     [rsp+78h+var_38], rbp
 * 00000001C000BF1D: lea     rax, [rsp+78h+arg_30]
 * 00000001C000BF25: mov     [rsp+78h+var_40], rax
 * 00000001C000BF2A: mov     rcx, rsi
 * 00000001C000BF2D: lea     rax, [rsp+78h+arg_28]
 * 00000001C000BF35: mov     [rsp+78h+var_48], rbp
 * 00000001C000BF3A: mov     [rsp+78h+var_50], rax
 * 00000001C000BF3F: mov     word ptr [rsp+78h+var_58], di
 * 00000001C000BF44: call    cs:__imp_WppAutoLogTrace
 * 00000001C000BF4B: nop     dword ptr [rax+rax+00h]
 * 00000001C000BF50: lea     r11, [rsp+78h+var_8]
 * 00000001C000BF55: mov     rbx, [r11+10h]
 * 00000001C000BF59: mov     rbp, [r11+18h]
 * 00000001C000BF5D: mov     rsi, [r11+20h]
 * 00000001C000BF61: mov     rsp, r11
 * 00000001C000BF64: pop     rdi
 * 00000001C000BF65: retn
 * 00000001C001C5E8: cmp     [rcx+29h], bl
 * 00000001C001C5EB: jb      loc_1C000BEDB
 * 00000001C001C5F1: and     [rsp+78h+var_18], 0
 * 00000001C001C5F7: lea     rdx, [rsp+78h+arg_40]
 * 00000001C001C5FF: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001C606: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C001C60D: mov     rcx, [rcx+18h]
 * 00000001C001C611: mov     r9d, edi
 * 00000001C001C614: mov     [rsp+78h+var_20], 8
 * 00000001C001C61D: mov     [rsp+78h+var_28], rdx
 * 00000001C001C622: lea     rdx, [rsp+78h+arg_38]
 * 00000001C001C62A: mov     [rsp+78h+var_30], rbp
 * 00000001C001C62F: mov     [rsp+78h+var_38], rdx
 * 00000001C001C634: lea     rdx, [rsp+78h+arg_30]
 * 00000001C001C63C: mov     [rsp+78h+var_40], rbp
 * 00000001C001C641: mov     [rsp+78h+var_48], rdx
 * 00000001C001C646: lea     rdx, [rsp+78h+arg_28]
 * 00000001C001C64E: mov     [rsp+78h+var_50], rbp
 * 00000001C001C653: mov     [rsp+78h+var_58], rdx
 * 00000001C001C658: mov     edx, 2Bh ; '+'
 * 00000001C001C65D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001C663: nop
 * 00000001C001C664: jmp     loc_1C000BEDB
 */
