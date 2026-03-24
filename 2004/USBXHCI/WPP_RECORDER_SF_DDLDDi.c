/*
 * XREFs of WPP_RECORDER_SF_DDLDDi @ 0x1C0042D78
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0041708 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLDDi @ 0x1C0042D78
 * Reason: Hex-Rays returned no pseudocode for 0x1C0042D78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0042D78: mov     r11, rsp
 * 00000001C0042D7B: mov     [r11+8], rbx
 * 00000001C0042D7F: mov     [r11+10h], rsi
 * 00000001C0042D83: mov     [r11+18h], rdi
 * 00000001C0042D87: mov     [r11+20h], r14
 * 00000001C0042D8B: push    rbp
 * 00000001C0042D8C: lea     rbp, [r11-27h]
 * 00000001C0042D90: sub     rsp, 90h
 * 00000001C0042D97: mov     rsi, rcx
 * 00000001C0042D9A: movzx   edi, r9w
 * 00000001C0042D9E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0042DA5: mov     r14d, 4
 * 00000001C0042DAB: movzx   ebx, dl
 * 00000001C0042DAE: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0042DB5: jz      short loc_1C0042E2C
 * 00000001C0042DB7: cmp     [rcx+29h], bl
 * 00000001C0042DBA: jb      short loc_1C0042E2C
 * 00000001C0042DBC: and     qword ptr [r11-18h], 0
 * 00000001C0042DC1: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0042DC5: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0042DCC: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042DD3: mov     rcx, [rcx+18h]
 * 00000001C0042DD7: mov     r9d, edi
 * 00000001C0042DDA: mov     qword ptr [r11-20h], 8
 * 00000001C0042DE2: mov     [r11-28h], rdx
 * 00000001C0042DE6: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0042DEA: mov     [r11-30h], r14
 * 00000001C0042DEE: mov     [r11-38h], rdx
 * 00000001C0042DF2: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0042DF6: mov     [r11-40h], r14
 * 00000001C0042DFA: mov     [r11-48h], rdx
 * 00000001C0042DFE: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0042E02: mov     [r11-50h], r14
 * 00000001C0042E06: mov     [r11-58h], rdx
 * 00000001C0042E0A: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0042E0E: mov     [r11-60h], r14
 * 00000001C0042E12: mov     [r11-68h], rdx
 * 00000001C0042E16: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0042E1A: mov     [r11-70h], r14
 * 00000001C0042E1E: mov     [r11-78h], rdx
 * 00000001C0042E22: lea     edx, [r14+27h]
 * 00000001C0042E26: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042E2C: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0042E35: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0042E39: mov     [rsp+90h+var_10], 8
 * 00000001C0042E45: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042E4C: mov     [rsp+90h+var_18], rax
 * 00000001C0042E51: mov     r8d, 0Eh
 * 00000001C0042E57: mov     [rsp+90h+var_20], r14
 * 00000001C0042E5C: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0042E60: mov     [rsp+90h+var_28], rax
 * 00000001C0042E65: mov     edx, ebx
 * 00000001C0042E67: mov     [rsp+90h+var_30], r14
 * 00000001C0042E6C: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0042E70: mov     [rsp+90h+var_38], rax
 * 00000001C0042E75: mov     rcx, rsi
 * 00000001C0042E78: mov     [rsp+90h+var_40], r14
 * 00000001C0042E7D: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0042E81: mov     [rsp+90h+var_48], rax
 * 00000001C0042E86: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0042E8A: mov     [rsp+90h+var_50], r14
 * 00000001C0042E8F: mov     [rsp+90h+var_58], rax
 * 00000001C0042E94: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0042E98: mov     [rsp+90h+var_60], r14
 * 00000001C0042E9D: mov     [rsp+90h+var_68], rax
 * 00000001C0042EA2: mov     word ptr [rsp+90h+var_70], di
 * 00000001C0042EA7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0042EAE: nop     dword ptr [rax+rax+00h]
 * 00000001C0042EB3: lea     r11, [rsp+90h+var_s0]
 * 00000001C0042EBB: mov     rbx, [r11+10h]
 * 00000001C0042EBF: mov     rsi, [r11+18h]
 * 00000001C0042EC3: mov     rdi, [r11+20h]
 * 00000001C0042EC7: mov     r14, [r11+28h]
 * 00000001C0042ECB: mov     rsp, r11
 * 00000001C0042ECE: pop     rbp
 * 00000001C0042ECF: retn
 */
