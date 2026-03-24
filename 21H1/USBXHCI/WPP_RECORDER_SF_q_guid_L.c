/*
 * XREFs of WPP_RECORDER_SF_q_guid_L @ 0x1C00351B8
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006CDA8 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_L @ 0x1C00351B8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00351B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00351B8: mov     r11, rsp
 * 00000001C00351BB: mov     [r11+8], rbx
 * 00000001C00351BF: mov     [r11+10h], rsi
 * 00000001C00351C3: mov     [r11+18h], rdi
 * 00000001C00351C7: push    r15
 * 00000001C00351C9: sub     rsp, 60h
 * 00000001C00351CD: mov     rbx, [rsp+68h+arg_30]
 * 00000001C00351D5: mov     rdi, rcx
 * 00000001C00351D8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00351DF: mov     esi, 4
 * 00000001C00351E4: mov     r15d, 100h
 * 00000001C00351EA: mov     eax, [rcx+2Ch]
 * 00000001C00351ED: test    al, 8
 * 00000001C00351EF: jz      short loc_1C0035243
 * 00000001C00351F1: cmp     [rcx+29h], sil
 * 00000001C00351F5: jb      short loc_1C0035243
 * 00000001C00351F7: and     qword ptr [r11-18h], 0
 * 00000001C00351FC: lea     rdx, [r11+40h]
 * 00000001C0035200: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035207: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C003520E: mov     rcx, [rcx+18h]
 * 00000001C0035212: mov     [r11-20h], rsi
 * 00000001C0035216: mov     [r11-28h], rdx
 * 00000001C003521A: lea     rdx, [r11+30h]
 * 00000001C003521E: mov     qword ptr [r11-30h], 10h
 * 00000001C0035226: mov     [r11-38h], rbx
 * 00000001C003522A: mov     qword ptr [r11-40h], 8
 * 00000001C0035232: mov     [r11-48h], rdx
 * 00000001C0035236: lea     edx, [rsi+27h]
 * 00000001C0035239: movzx   r9d, r15w
 * 00000001C003523D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035243: and     [rsp+68h+var_10], 0
 * 00000001C0035249: lea     rax, [rsp+68h+arg_38]
 * 00000001C0035251: mov     [rsp+68h+var_18], rsi
 * 00000001C0035256: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C003525D: mov     [rsp+68h+var_20], rax
 * 00000001C0035262: mov     r8d, esi
 * 00000001C0035265: mov     [rsp+68h+var_28], 10h
 * 00000001C003526E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0035276: mov     [rsp+68h+var_30], rbx
 * 00000001C003527B: mov     edx, esi
 * 00000001C003527D: mov     [rsp+68h+var_38], 8
 * 00000001C0035286: mov     rcx, rdi
 * 00000001C0035289: mov     [rsp+68h+var_40], rax
 * 00000001C003528E: mov     [rsp+68h+var_48], r15w
 * 00000001C0035294: call    cs:__imp_WppAutoLogTrace
 * 00000001C003529B: nop     dword ptr [rax+rax+00h]
 * 00000001C00352A0: lea     r11, [rsp+68h+var_8]
 * 00000001C00352A5: mov     rbx, [r11+10h]
 * 00000001C00352A9: mov     rsi, [r11+18h]
 * 00000001C00352AD: mov     rdi, [r11+20h]
 * 00000001C00352B1: mov     rsp, r11
 * 00000001C00352B4: pop     r15
 * 00000001C00352B6: retn
 */
