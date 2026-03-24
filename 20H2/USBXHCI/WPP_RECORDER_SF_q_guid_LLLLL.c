/*
 * XREFs of WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C00367A0
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C00700B8 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C00367A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00367A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00367A0: mov     r11, rsp
 * 00000001C00367A3: mov     [r11+8], rbx
 * 00000001C00367A7: mov     [r11+10h], rsi
 * 00000001C00367AB: mov     [r11+18h], rdi
 * 00000001C00367AF: mov     [r11+20h], r12
 * 00000001C00367B3: push    rbp
 * 00000001C00367B4: lea     rbp, [r11-1Fh]
 * 00000001C00367B8: sub     rsp, 0A0h
 * 00000001C00367BF: mov     rbx, [rbp+17h+arg_30]
 * 00000001C00367C3: mov     rdi, rcx
 * 00000001C00367C6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00367CD: mov     esi, 4
 * 00000001C00367D2: mov     r12d, 101h
 * 00000001C00367D8: mov     eax, [rcx+2Ch]
 * 00000001C00367DB: test    al, 8
 * 00000001C00367DD: jz      loc_1C0036866
 * 00000001C00367E3: cmp     [rcx+29h], sil
 * 00000001C00367E7: jb      short loc_1C0036866
 * 00000001C00367E9: and     qword ptr [r11-18h], 0
 * 00000001C00367EE: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00367F2: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00367F9: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0036800: mov     rcx, [rcx+18h]
 * 00000001C0036804: mov     [r11-20h], rsi
 * 00000001C0036808: mov     [r11-28h], rdx
 * 00000001C003680C: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0036810: mov     [r11-30h], rsi
 * 00000001C0036814: mov     [r11-38h], rdx
 * 00000001C0036818: lea     rdx, [rbp+17h+arg_48]
 * 00000001C003681C: mov     [r11-40h], rsi
 * 00000001C0036820: mov     [r11-48h], rdx
 * 00000001C0036824: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0036828: mov     [r11-50h], rsi
 * 00000001C003682C: mov     [r11-58h], rdx
 * 00000001C0036830: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0036834: mov     [r11-60h], rsi
 * 00000001C0036838: mov     [r11-68h], rdx
 * 00000001C003683C: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0036840: mov     qword ptr [r11-70h], 10h
 * 00000001C0036848: mov     [r11-78h], rbx
 * 00000001C003684C: mov     qword ptr [r11-80h], 8
 * 00000001C0036854: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0036859: lea     edx, [rsi+27h]
 * 00000001C003685C: movzx   r9d, r12w
 * 00000001C0036860: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036866: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C003686F: lea     rax, [rbp+17h+arg_58]
 * 00000001C0036873: mov     [rsp+0A0h+var_10], rsi
 * 00000001C003687B: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0036882: mov     [rsp+0A0h+var_18], rax
 * 00000001C003688A: mov     r8d, esi
 * 00000001C003688D: mov     [rsp+0A0h+var_20], rsi
 * 00000001C0036895: lea     rax, [rbp+17h+arg_50]
 * 00000001C0036899: mov     [rsp+0A0h+var_28], rax
 * 00000001C003689E: mov     edx, esi
 * 00000001C00368A0: mov     [rsp+0A0h+var_30], rsi
 * 00000001C00368A5: lea     rax, [rbp+17h+arg_48]
 * 00000001C00368A9: mov     [rsp+0A0h+var_38], rax
 * 00000001C00368AE: mov     rcx, rdi
 * 00000001C00368B1: mov     [rsp+0A0h+var_40], rsi
 * 00000001C00368B6: lea     rax, [rbp+17h+arg_40]
 * 00000001C00368BA: mov     [rsp+0A0h+var_48], rax
 * 00000001C00368BF: lea     rax, [rbp+17h+arg_38]
 * 00000001C00368C3: mov     [rsp+0A0h+var_50], rsi
 * 00000001C00368C8: mov     [rsp+0A0h+var_58], rax
 * 00000001C00368CD: lea     rax, [rbp+17h+arg_28]
 * 00000001C00368D1: mov     [rsp+0A0h+var_60], 10h
 * 00000001C00368DA: mov     [rsp+0A0h+var_68], rbx
 * 00000001C00368DF: mov     [rsp+0A0h+var_70], 8
 * 00000001C00368E8: mov     [rsp+0A0h+var_78], rax
 * 00000001C00368ED: mov     word ptr [rsp+0A0h+var_80], r12w
 * 00000001C00368F3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00368FA: nop     dword ptr [rax+rax+00h]
 * 00000001C00368FF: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0036907: mov     rbx, [r11+10h]
 * 00000001C003690B: mov     rsi, [r11+18h]
 * 00000001C003690F: mov     rdi, [r11+20h]
 * 00000001C0036913: mov     r12, [r11+28h]
 * 00000001C0036917: mov     rsp, r11
 * 00000001C003691A: pop     rbp
 * 00000001C003691B: retn
 */
