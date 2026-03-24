/*
 * XREFs of WPP_RECORDER_SF_DDDqq @ 0x1C000CFB8
 * Callers:
 *     Bulk_FindStage @ 0x1C000BD10 (Bulk_FindStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 *     Bulk_Stage_AcquireMdl @ 0x1C00452A8 (Bulk_Stage_AcquireMdl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqq @ 0x1C000CFB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CFB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CFB8: mov     rax, rsp
 * 00000001C000CFBB: mov     [rax+8], rbx
 * 00000001C000CFBF: mov     [rax+10h], rbp
 * 00000001C000CFC3: mov     [rax+18h], rsi
 * 00000001C000CFC7: mov     [rax+20h], rdi
 * 00000001C000CFCB: push    r14
 * 00000001C000CFCD: sub     rsp, 80h
 * 00000001C000CFD4: mov     rsi, rcx
 * 00000001C000CFD7: movzx   edi, r9w
 * 00000001C000CFDB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000CFE2: mov     ebp, 4
 * 00000001C000CFE7: movzx   ebx, dl
 * 00000001C000CFEA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000CFF1: lea     r14d, [rbp+4]
 * 00000001C000CFF5: jnz     loc_1C001F79E
 * 00000001C000CFFB: and     [rsp+88h+var_10], 0
 * 00000001C000D001: lea     rax, [rsp+88h+arg_48]
 * 00000001C000D009: mov     [rsp+88h+var_18], r14
 * 00000001C000D00E: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C000D015: mov     [rsp+88h+var_20], rax
 * 00000001C000D01A: mov     r8d, 0Eh
 * 00000001C000D020: mov     [rsp+88h+var_28], r14
 * 00000001C000D025: lea     rax, [rsp+88h+arg_40]
 * 00000001C000D02D: mov     [rsp+88h+var_30], rax
 * 00000001C000D032: mov     edx, ebx
 * 00000001C000D034: mov     [rsp+88h+var_38], rbp
 * 00000001C000D039: lea     rax, [rsp+88h+arg_38]
 * 00000001C000D041: mov     [rsp+88h+var_40], rax
 * 00000001C000D046: mov     rcx, rsi
 * 00000001C000D049: mov     [rsp+88h+var_48], rbp
 * 00000001C000D04E: lea     rax, [rsp+88h+arg_30]
 * 00000001C000D056: mov     [rsp+88h+var_50], rax
 * 00000001C000D05B: lea     rax, [rsp+88h+arg_28]
 * 00000001C000D063: mov     [rsp+88h+var_58], rbp
 * 00000001C000D068: mov     [rsp+88h+var_60], rax
 * 00000001C000D06D: mov     word ptr [rsp+88h+var_68], di
 * 00000001C000D072: call    cs:__imp_WppAutoLogTrace
 * 00000001C000D079: nop     dword ptr [rax+rax+00h]
 * 00000001C000D07E: lea     r11, [rsp+88h+var_8]
 * 00000001C000D086: mov     rbx, [r11+10h]
 * 00000001C000D08A: mov     rbp, [r11+18h]
 * 00000001C000D08E: mov     rsi, [r11+20h]
 * 00000001C000D092: mov     rdi, [r11+28h]
 * 00000001C000D096: mov     rsp, r11
 * 00000001C000D099: pop     r14
 * 00000001C000D09B: retn
 * 00000001C001F79E: cmp     [rcx+29h], bl
 * 00000001C001F7A1: jb      loc_1C000CFFB
 * 00000001C001F7A7: and     [rsp+88h+var_18], 0
 * 00000001C001F7AD: lea     rdx, [rsp+88h+arg_48]
 * 00000001C001F7B5: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C001F7BC: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C001F7C3: mov     rcx, [rcx+18h]
 * 00000001C001F7C7: mov     r9d, edi
 * 00000001C001F7CA: mov     [rsp+88h+var_20], r14
 * 00000001C001F7CF: mov     [rsp+88h+var_28], rdx
 * 00000001C001F7D4: lea     rdx, [rsp+88h+arg_40]
 * 00000001C001F7DC: mov     [rsp+88h+var_30], r14
 * 00000001C001F7E1: mov     [rsp+88h+var_38], rdx
 * 00000001C001F7E6: lea     rdx, [rsp+88h+arg_38]
 * 00000001C001F7EE: mov     [rsp+88h+var_40], rbp
 * 00000001C001F7F3: mov     [rsp+88h+var_48], rdx
 * 00000001C001F7F8: lea     rdx, [rsp+88h+arg_30]
 * 00000001C001F800: mov     [rsp+88h+var_50], rbp
 * 00000001C001F805: mov     [rsp+88h+var_58], rdx
 * 00000001C001F80A: lea     rdx, [rsp+88h+arg_28]
 * 00000001C001F812: mov     [rsp+88h+var_60], rbp
 * 00000001C001F817: mov     [rsp+88h+var_68], rdx
 * 00000001C001F81C: mov     edx, 2Bh ; '+'
 * 00000001C001F821: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001F827: nop
 * 00000001C001F828: jmp     loc_1C000CFFB
 */
