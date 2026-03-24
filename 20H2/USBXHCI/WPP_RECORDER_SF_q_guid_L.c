/*
 * XREFs of WPP_RECORDER_SF_q_guid_L @ 0x1C0036698
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C00700B8 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_L @ 0x1C0036698
 * Reason: Hex-Rays returned no pseudocode for 0x1C0036698
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0036698: mov     r11, rsp
 * 00000001C003669B: mov     [r11+8], rbx
 * 00000001C003669F: mov     [r11+10h], rsi
 * 00000001C00366A3: mov     [r11+18h], rdi
 * 00000001C00366A7: push    r15
 * 00000001C00366A9: sub     rsp, 60h
 * 00000001C00366AD: mov     rbx, [rsp+68h+arg_30]
 * 00000001C00366B5: mov     rdi, rcx
 * 00000001C00366B8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00366BF: mov     esi, 4
 * 00000001C00366C4: mov     r15d, 100h
 * 00000001C00366CA: mov     eax, [rcx+2Ch]
 * 00000001C00366CD: test    al, 8
 * 00000001C00366CF: jz      short loc_1C0036723
 * 00000001C00366D1: cmp     [rcx+29h], sil
 * 00000001C00366D5: jb      short loc_1C0036723
 * 00000001C00366D7: and     qword ptr [r11-18h], 0
 * 00000001C00366DC: lea     rdx, [r11+40h]
 * 00000001C00366E0: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00366E7: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C00366EE: mov     rcx, [rcx+18h]
 * 00000001C00366F2: mov     [r11-20h], rsi
 * 00000001C00366F6: mov     [r11-28h], rdx
 * 00000001C00366FA: lea     rdx, [r11+30h]
 * 00000001C00366FE: mov     qword ptr [r11-30h], 10h
 * 00000001C0036706: mov     [r11-38h], rbx
 * 00000001C003670A: mov     qword ptr [r11-40h], 8
 * 00000001C0036712: mov     [r11-48h], rdx
 * 00000001C0036716: lea     edx, [rsi+27h]
 * 00000001C0036719: movzx   r9d, r15w
 * 00000001C003671D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036723: and     [rsp+68h+var_10], 0
 * 00000001C0036729: lea     rax, [rsp+68h+arg_38]
 * 00000001C0036731: mov     [rsp+68h+var_18], rsi
 * 00000001C0036736: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C003673D: mov     [rsp+68h+var_20], rax
 * 00000001C0036742: mov     r8d, esi
 * 00000001C0036745: mov     [rsp+68h+var_28], 10h
 * 00000001C003674E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0036756: mov     [rsp+68h+var_30], rbx
 * 00000001C003675B: mov     edx, esi
 * 00000001C003675D: mov     [rsp+68h+var_38], 8
 * 00000001C0036766: mov     rcx, rdi
 * 00000001C0036769: mov     [rsp+68h+var_40], rax
 * 00000001C003676E: mov     [rsp+68h+var_48], r15w
 * 00000001C0036774: call    cs:__imp_WppAutoLogTrace
 * 00000001C003677B: nop     dword ptr [rax+rax+00h]
 * 00000001C0036780: lea     r11, [rsp+68h+var_8]
 * 00000001C0036785: mov     rbx, [r11+10h]
 * 00000001C0036789: mov     rsi, [r11+18h]
 * 00000001C003678D: mov     rdi, [r11+20h]
 * 00000001C0036791: mov     rsp, r11
 * 00000001C0036794: pop     r15
 * 00000001C0036796: retn
 */
