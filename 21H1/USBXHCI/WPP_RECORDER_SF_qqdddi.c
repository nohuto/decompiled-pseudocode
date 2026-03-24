/*
 * XREFs of WPP_RECORDER_SF_qqdddi @ 0x1C000EDF4
 * Callers:
 *     Interrupter_D0ExitStopped @ 0x1C000AE9C (Interrupter_D0ExitStopped.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C001349C (Interrupter_InterrupterRegisterIntialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqdddi @ 0x1C000EDF4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000EDF4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000EDF4: mov     rax, rsp
 * 00000001C000EDF7: mov     [rax+8], rbx
 * 00000001C000EDFB: mov     [rax+10h], rsi
 * 00000001C000EDFF: mov     [rax+18h], rdi
 * 00000001C000EE03: mov     [rax+20h], r14
 * 00000001C000EE07: push    rbp
 * 00000001C000EE08: lea     rbp, [rax-27h]
 * 00000001C000EE0C: sub     rsp, 90h
 * 00000001C000EE13: mov     rdi, rcx
 * 00000001C000EE16: movzx   ebx, r9w
 * 00000001C000EE1A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000EE21: mov     esi, 4
 * 00000001C000EE26: test    dword ptr [rcx+2Ch], 100h
 * 00000001C000EE2D: lea     r14d, [rsi+4]
 * 00000001C000EE31: jnz     loc_1C001F934
 * 00000001C000EE37: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C000EE40: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C000EE44: mov     [rsp+90h+var_10], r14
 * 00000001C000EE4C: lea     r9, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C000EE53: mov     [rsp+90h+var_18], rax
 * 00000001C000EE58: mov     r8d, 9
 * 00000001C000EE5E: mov     [rsp+90h+var_20], rsi
 * 00000001C000EE63: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C000EE67: mov     [rsp+90h+var_28], rax
 * 00000001C000EE6C: mov     edx, esi
 * 00000001C000EE6E: mov     [rsp+90h+var_30], rsi
 * 00000001C000EE73: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C000EE77: mov     [rsp+90h+var_38], rax
 * 00000001C000EE7C: mov     rcx, rdi
 * 00000001C000EE7F: mov     [rsp+90h+var_40], rsi
 * 00000001C000EE84: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C000EE88: mov     [rsp+90h+var_48], rax
 * 00000001C000EE8D: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C000EE91: mov     [rsp+90h+var_50], r14
 * 00000001C000EE96: mov     [rsp+90h+var_58], rax
 * 00000001C000EE9B: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C000EE9F: mov     [rsp+90h+var_60], r14
 * 00000001C000EEA4: mov     [rsp+90h+var_68], rax
 * 00000001C000EEA9: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C000EEAE: call    cs:__imp_WppAutoLogTrace
 * 00000001C000EEB5: nop     dword ptr [rax+rax+00h]
 * 00000001C000EEBA: lea     r11, [rsp+90h+var_s0]
 * 00000001C000EEC2: mov     rbx, [r11+10h]
 * 00000001C000EEC6: mov     rsi, [r11+18h]
 * 00000001C000EECA: mov     rdi, [r11+20h]
 * 00000001C000EECE: mov     r14, [r11+28h]
 * 00000001C000EED2: mov     rsp, r11
 * 00000001C000EED5: pop     rbp
 * 00000001C000EED6: retn
 * 00000001C001F934: cmp     [rcx+29h], sil
 * 00000001C001F938: jb      loc_1C000EE37
 * 00000001C001F93E: and     [rsp+90h+var_10], 0
 * 00000001C001F947: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C001F94B: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001F952: lea     r8, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C001F959: mov     rcx, [rcx+18h]
 * 00000001C001F95D: mov     r9d, ebx
 * 00000001C001F960: mov     [rsp+90h+var_18], r14
 * 00000001C001F965: mov     [rsp+90h+var_20], rdx
 * 00000001C001F96A: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C001F96E: mov     [rsp+90h+var_28], rsi
 * 00000001C001F973: mov     [rsp+90h+var_30], rdx
 * 00000001C001F978: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C001F97C: mov     [rsp+90h+var_38], rsi
 * 00000001C001F981: mov     [rsp+90h+var_40], rdx
 * 00000001C001F986: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C001F98A: mov     [rsp+90h+var_48], rsi
 * 00000001C001F98F: mov     [rsp+90h+var_50], rdx
 * 00000001C001F994: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C001F998: mov     [rsp+90h+var_58], r14
 * 00000001C001F99D: mov     [rsp+90h+var_60], rdx
 * 00000001C001F9A2: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C001F9A6: mov     [rsp+90h+var_68], r14
 * 00000001C001F9AB: mov     [rsp+90h+var_70], rdx
 * 00000001C001F9B0: mov     edx, 2Bh ; '+'
 * 00000001C001F9B5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001F9BB: nop
 * 00000001C001F9BC: jmp     loc_1C000EE37
 */
