/*
 * XREFs of WPP_RECORDER_SF_qdqddd @ 0x1C002ECD0
 * Callers:
 *     Command_InternalSendCommand @ 0x1C00069D8 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdqddd @ 0x1C002ECD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C002ECD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002ECD0: mov     r11, rsp
 * 00000001C002ECD3: mov     [r11+8], rbx
 * 00000001C002ECD7: mov     [r11+10h], rsi
 * 00000001C002ECDB: mov     [r11+18h], rdi
 * 00000001C002ECDF: mov     [r11+20h], r14
 * 00000001C002ECE3: push    rbp
 * 00000001C002ECE4: lea     rbp, [r11-27h]
 * 00000001C002ECE8: sub     rsp, 90h
 * 00000001C002ECEF: mov     edi, 4
 * 00000001C002ECF4: mov     rbx, rcx
 * 00000001C002ECF7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002ECFE: lea     esi, [rdi+4]
 * 00000001C002ED01: mov     eax, [rcx+2Ch]
 * 00000001C002ED04: lea     r14d, [rdi+33h]
 * 00000001C002ED08: test    al, 40h
 * 00000001C002ED0A: jz      short loc_1C002ED7E
 * 00000001C002ED0C: cmp     byte ptr [rcx+29h], 5
 * 00000001C002ED10: jb      short loc_1C002ED7E
 * 00000001C002ED12: and     qword ptr [r11-18h], 0
 * 00000001C002ED17: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C002ED1B: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002ED22: lea     r8, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C002ED29: mov     rcx, [rcx+18h]
 * 00000001C002ED2D: mov     [r11-20h], rdi
 * 00000001C002ED31: mov     [r11-28h], rdx
 * 00000001C002ED35: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C002ED39: mov     [r11-30h], rdi
 * 00000001C002ED3D: mov     [r11-38h], rdx
 * 00000001C002ED41: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C002ED45: mov     [r11-40h], rdi
 * 00000001C002ED49: mov     [r11-48h], rdx
 * 00000001C002ED4D: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C002ED51: mov     [r11-50h], rsi
 * 00000001C002ED55: mov     [r11-58h], rdx
 * 00000001C002ED59: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C002ED5D: mov     [r11-60h], rdi
 * 00000001C002ED61: mov     [r11-68h], rdx
 * 00000001C002ED65: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C002ED69: mov     [r11-70h], rsi
 * 00000001C002ED6D: mov     [r11-78h], rdx
 * 00000001C002ED71: lea     edx, [rdi+27h]
 * 00000001C002ED74: movzx   r9d, r14w
 * 00000001C002ED78: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002ED7E: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C002ED87: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C002ED8B: mov     [rsp+90h+var_10], rdi
 * 00000001C002ED93: lea     r9, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C002ED9A: mov     [rsp+90h+var_18], rax
 * 00000001C002ED9F: mov     edx, 5
 * 00000001C002EDA4: mov     [rsp+90h+var_20], rdi
 * 00000001C002EDA9: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C002EDAD: mov     [rsp+90h+var_28], rax
 * 00000001C002EDB2: mov     rcx, rbx
 * 00000001C002EDB5: mov     [rsp+90h+var_30], rdi
 * 00000001C002EDBA: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C002EDBE: mov     [rsp+90h+var_38], rax
 * 00000001C002EDC3: lea     r8d, [rdx+2]
 * 00000001C002EDC7: mov     [rsp+90h+var_40], rsi
 * 00000001C002EDCC: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C002EDD0: mov     [rsp+90h+var_48], rax
 * 00000001C002EDD5: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C002EDD9: mov     [rsp+90h+var_50], rdi
 * 00000001C002EDDE: mov     [rsp+90h+var_58], rax
 * 00000001C002EDE3: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C002EDE7: mov     [rsp+90h+var_60], rsi
 * 00000001C002EDEC: mov     [rsp+90h+var_68], rax
 * 00000001C002EDF1: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C002EDF7: call    cs:__imp_WppAutoLogTrace
 * 00000001C002EDFE: nop     dword ptr [rax+rax+00h]
 * 00000001C002EE03: lea     r11, [rsp+90h+var_s0]
 * 00000001C002EE0B: mov     rbx, [r11+10h]
 * 00000001C002EE0F: mov     rsi, [r11+18h]
 * 00000001C002EE13: mov     rdi, [r11+20h]
 * 00000001C002EE17: mov     r14, [r11+28h]
 * 00000001C002EE1B: mov     rsp, r11
 * 00000001C002EE1E: pop     rbp
 * 00000001C002EE1F: retn
 */
