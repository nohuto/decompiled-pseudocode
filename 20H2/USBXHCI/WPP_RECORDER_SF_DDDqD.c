/*
 * XREFs of WPP_RECORDER_SF_DDDqd @ 0x1C0045E68
 * Callers:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000C124 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_CompleteTransfers @ 0x1C000C2F0 (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqd @ 0x1C0045E68
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045E68
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045E68: mov     r11, rsp
 * 00000001C0045E6B: mov     [r11+8], rbx
 * 00000001C0045E6F: mov     [r11+10h], rbp
 * 00000001C0045E73: mov     [r11+18h], rsi
 * 00000001C0045E77: push    rdi
 * 00000001C0045E78: sub     rsp, 80h
 * 00000001C0045E7F: mov     rsi, rcx
 * 00000001C0045E82: movzx   edi, r9w
 * 00000001C0045E86: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0045E8D: mov     ebp, 4
 * 00000001C0045E92: movzx   ebx, dl
 * 00000001C0045E95: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0045E9C: jz      short loc_1C0045F06
 * 00000001C0045E9E: cmp     [rcx+29h], bl
 * 00000001C0045EA1: jb      short loc_1C0045F06
 * 00000001C0045EA3: and     qword ptr [r11-18h], 0
 * 00000001C0045EA8: lea     rdx, [r11+50h]
 * 00000001C0045EAC: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0045EB3: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0045EBA: mov     rcx, [rcx+18h]
 * 00000001C0045EBE: mov     r9d, edi
 * 00000001C0045EC1: mov     [r11-20h], rbp
 * 00000001C0045EC5: mov     [r11-28h], rdx
 * 00000001C0045EC9: lea     rdx, [r11+48h]
 * 00000001C0045ECD: mov     qword ptr [r11-30h], 8
 * 00000001C0045ED5: mov     [r11-38h], rdx
 * 00000001C0045ED9: lea     rdx, [r11+40h]
 * 00000001C0045EDD: mov     [r11-40h], rbp
 * 00000001C0045EE1: mov     [r11-48h], rdx
 * 00000001C0045EE5: lea     rdx, [r11+38h]
 * 00000001C0045EE9: mov     [r11-50h], rbp
 * 00000001C0045EED: mov     [r11-58h], rdx
 * 00000001C0045EF1: lea     rdx, [r11+30h]
 * 00000001C0045EF5: mov     [r11-60h], rbp
 * 00000001C0045EF9: mov     [r11-68h], rdx
 * 00000001C0045EFD: lea     edx, [rbp+27h]
 * 00000001C0045F00: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045F06: and     [rsp+88h+var_10], 0
 * 00000001C0045F0C: lea     rax, [rsp+88h+arg_48]
 * 00000001C0045F14: mov     [rsp+88h+var_18], rbp
 * 00000001C0045F19: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0045F20: mov     [rsp+88h+var_20], rax
 * 00000001C0045F25: mov     r8d, 0Eh
 * 00000001C0045F2B: mov     [rsp+88h+var_28], 8
 * 00000001C0045F34: lea     rax, [rsp+88h+arg_40]
 * 00000001C0045F3C: mov     [rsp+88h+var_30], rax
 * 00000001C0045F41: mov     edx, ebx
 * 00000001C0045F43: mov     [rsp+88h+var_38], rbp
 * 00000001C0045F48: lea     rax, [rsp+88h+arg_38]
 * 00000001C0045F50: mov     [rsp+88h+var_40], rax
 * 00000001C0045F55: mov     rcx, rsi
 * 00000001C0045F58: mov     [rsp+88h+var_48], rbp
 * 00000001C0045F5D: lea     rax, [rsp+88h+arg_30]
 * 00000001C0045F65: mov     [rsp+88h+var_50], rax
 * 00000001C0045F6A: lea     rax, [rsp+88h+arg_28]
 * 00000001C0045F72: mov     [rsp+88h+var_58], rbp
 * 00000001C0045F77: mov     [rsp+88h+var_60], rax
 * 00000001C0045F7C: mov     [rsp+88h+var_68], di
 * 00000001C0045F81: call    cs:__imp_WppAutoLogTrace
 * 00000001C0045F88: nop     dword ptr [rax+rax+00h]
 * 00000001C0045F8D: lea     r11, [rsp+88h+var_8]
 * 00000001C0045F95: mov     rbx, [r11+10h]
 * 00000001C0045F99: mov     rbp, [r11+18h]
 * 00000001C0045F9D: mov     rsi, [r11+20h]
 * 00000001C0045FA1: mov     rsp, r11
 * 00000001C0045FA4: pop     rdi
 * 00000001C0045FA5: retn
 */
