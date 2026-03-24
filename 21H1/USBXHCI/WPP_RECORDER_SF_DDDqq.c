/*
 * XREFs of WPP_RECORDER_SF_DDDqq @ 0x1C000C6E8
 * Callers:
 *     Bulk_FindStage @ 0x1C000B440 (Bulk_FindStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C000C480 (Bulk_RetrieveNextStage.c)
 *     Bulk_Stage_AcquireMdl @ 0x1C0043DB8 (Bulk_Stage_AcquireMdl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqq @ 0x1C000C6E8
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C6E8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C6E8: mov     rax, rsp
 * 00000001C000C6EB: mov     [rax+8], rbx
 * 00000001C000C6EF: mov     [rax+10h], rbp
 * 00000001C000C6F3: mov     [rax+18h], rsi
 * 00000001C000C6F7: mov     [rax+20h], rdi
 * 00000001C000C6FB: push    r14
 * 00000001C000C6FD: sub     rsp, 80h
 * 00000001C000C704: mov     rsi, rcx
 * 00000001C000C707: movzx   edi, r9w
 * 00000001C000C70B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000C712: mov     ebp, 4
 * 00000001C000C717: movzx   ebx, dl
 * 00000001C000C71A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000C721: lea     r14d, [rbp+4]
 * 00000001C000C725: jnz     loc_1C001CC74
 * 00000001C000C72B: and     [rsp+88h+var_10], 0
 * 00000001C000C731: lea     rax, [rsp+88h+arg_48]
 * 00000001C000C739: mov     [rsp+88h+var_18], r14
 * 00000001C000C73E: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C000C745: mov     [rsp+88h+var_20], rax
 * 00000001C000C74A: mov     r8d, 0Eh
 * 00000001C000C750: mov     [rsp+88h+var_28], r14
 * 00000001C000C755: lea     rax, [rsp+88h+arg_40]
 * 00000001C000C75D: mov     [rsp+88h+var_30], rax
 * 00000001C000C762: mov     edx, ebx
 * 00000001C000C764: mov     [rsp+88h+var_38], rbp
 * 00000001C000C769: lea     rax, [rsp+88h+arg_38]
 * 00000001C000C771: mov     [rsp+88h+var_40], rax
 * 00000001C000C776: mov     rcx, rsi
 * 00000001C000C779: mov     [rsp+88h+var_48], rbp
 * 00000001C000C77E: lea     rax, [rsp+88h+arg_30]
 * 00000001C000C786: mov     [rsp+88h+var_50], rax
 * 00000001C000C78B: lea     rax, [rsp+88h+arg_28]
 * 00000001C000C793: mov     [rsp+88h+var_58], rbp
 * 00000001C000C798: mov     [rsp+88h+var_60], rax
 * 00000001C000C79D: mov     word ptr [rsp+88h+var_68], di
 * 00000001C000C7A2: call    cs:__imp_WppAutoLogTrace
 * 00000001C000C7A9: nop     dword ptr [rax+rax+00h]
 * 00000001C000C7AE: lea     r11, [rsp+88h+var_8]
 * 00000001C000C7B6: mov     rbx, [r11+10h]
 * 00000001C000C7BA: mov     rbp, [r11+18h]
 * 00000001C000C7BE: mov     rsi, [r11+20h]
 * 00000001C000C7C2: mov     rdi, [r11+28h]
 * 00000001C000C7C6: mov     rsp, r11
 * 00000001C000C7C9: pop     r14
 * 00000001C000C7CB: retn
 * 00000001C001CC74: cmp     [rcx+29h], bl
 * 00000001C001CC77: jb      loc_1C000C72B
 * 00000001C001CC7D: and     [rsp+88h+var_18], 0
 * 00000001C001CC83: lea     rdx, [rsp+88h+arg_48]
 * 00000001C001CC8B: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001CC92: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C001CC99: mov     rcx, [rcx+18h]
 * 00000001C001CC9D: mov     r9d, edi
 * 00000001C001CCA0: mov     [rsp+88h+var_20], r14
 * 00000001C001CCA5: mov     [rsp+88h+var_28], rdx
 * 00000001C001CCAA: lea     rdx, [rsp+88h+arg_40]
 * 00000001C001CCB2: mov     [rsp+88h+var_30], r14
 * 00000001C001CCB7: mov     [rsp+88h+var_38], rdx
 * 00000001C001CCBC: lea     rdx, [rsp+88h+arg_38]
 * 00000001C001CCC4: mov     [rsp+88h+var_40], rbp
 * 00000001C001CCC9: mov     [rsp+88h+var_48], rdx
 * 00000001C001CCCE: lea     rdx, [rsp+88h+arg_30]
 * 00000001C001CCD6: mov     [rsp+88h+var_50], rbp
 * 00000001C001CCDB: mov     [rsp+88h+var_58], rdx
 * 00000001C001CCE0: lea     rdx, [rsp+88h+arg_28]
 * 00000001C001CCE8: mov     [rsp+88h+var_60], rbp
 * 00000001C001CCED: mov     [rsp+88h+var_68], rdx
 * 00000001C001CCF2: mov     edx, 2Bh ; '+'
 * 00000001C001CCF7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001CCFD: nop
 * 00000001C001CCFE: jmp     loc_1C000C72B
 */
