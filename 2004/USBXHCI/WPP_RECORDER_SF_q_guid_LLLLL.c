/*
 * XREFs of WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C00352C0
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006CDA8 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C00352C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00352C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00352C0: mov     r11, rsp
 * 00000001C00352C3: mov     [r11+8], rbx
 * 00000001C00352C7: mov     [r11+10h], rsi
 * 00000001C00352CB: mov     [r11+18h], rdi
 * 00000001C00352CF: mov     [r11+20h], r12
 * 00000001C00352D3: push    rbp
 * 00000001C00352D4: lea     rbp, [r11-1Fh]
 * 00000001C00352D8: sub     rsp, 0A0h
 * 00000001C00352DF: mov     rbx, [rbp+17h+arg_30]
 * 00000001C00352E3: mov     rdi, rcx
 * 00000001C00352E6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00352ED: mov     esi, 4
 * 00000001C00352F2: mov     r12d, 101h
 * 00000001C00352F8: mov     eax, [rcx+2Ch]
 * 00000001C00352FB: test    al, 8
 * 00000001C00352FD: jz      loc_1C0035386
 * 00000001C0035303: cmp     [rcx+29h], sil
 * 00000001C0035307: jb      short loc_1C0035386
 * 00000001C0035309: and     qword ptr [r11-18h], 0
 * 00000001C003530E: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0035312: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035319: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0035320: mov     rcx, [rcx+18h]
 * 00000001C0035324: mov     [r11-20h], rsi
 * 00000001C0035328: mov     [r11-28h], rdx
 * 00000001C003532C: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0035330: mov     [r11-30h], rsi
 * 00000001C0035334: mov     [r11-38h], rdx
 * 00000001C0035338: lea     rdx, [rbp+17h+arg_48]
 * 00000001C003533C: mov     [r11-40h], rsi
 * 00000001C0035340: mov     [r11-48h], rdx
 * 00000001C0035344: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0035348: mov     [r11-50h], rsi
 * 00000001C003534C: mov     [r11-58h], rdx
 * 00000001C0035350: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0035354: mov     [r11-60h], rsi
 * 00000001C0035358: mov     [r11-68h], rdx
 * 00000001C003535C: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0035360: mov     qword ptr [r11-70h], 10h
 * 00000001C0035368: mov     [r11-78h], rbx
 * 00000001C003536C: mov     qword ptr [r11-80h], 8
 * 00000001C0035374: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0035379: lea     edx, [rsi+27h]
 * 00000001C003537C: movzx   r9d, r12w
 * 00000001C0035380: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035386: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C003538F: lea     rax, [rbp+17h+arg_58]
 * 00000001C0035393: mov     [rsp+0A0h+var_10], rsi
 * 00000001C003539B: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C00353A2: mov     [rsp+0A0h+var_18], rax
 * 00000001C00353AA: mov     r8d, esi
 * 00000001C00353AD: mov     [rsp+0A0h+var_20], rsi
 * 00000001C00353B5: lea     rax, [rbp+17h+arg_50]
 * 00000001C00353B9: mov     [rsp+0A0h+var_28], rax
 * 00000001C00353BE: mov     edx, esi
 * 00000001C00353C0: mov     [rsp+0A0h+var_30], rsi
 * 00000001C00353C5: lea     rax, [rbp+17h+arg_48]
 * 00000001C00353C9: mov     [rsp+0A0h+var_38], rax
 * 00000001C00353CE: mov     rcx, rdi
 * 00000001C00353D1: mov     [rsp+0A0h+var_40], rsi
 * 00000001C00353D6: lea     rax, [rbp+17h+arg_40]
 * 00000001C00353DA: mov     [rsp+0A0h+var_48], rax
 * 00000001C00353DF: lea     rax, [rbp+17h+arg_38]
 * 00000001C00353E3: mov     [rsp+0A0h+var_50], rsi
 * 00000001C00353E8: mov     [rsp+0A0h+var_58], rax
 * 00000001C00353ED: lea     rax, [rbp+17h+arg_28]
 * 00000001C00353F1: mov     [rsp+0A0h+var_60], 10h
 * 00000001C00353FA: mov     [rsp+0A0h+var_68], rbx
 * 00000001C00353FF: mov     [rsp+0A0h+var_70], 8
 * 00000001C0035408: mov     [rsp+0A0h+var_78], rax
 * 00000001C003540D: mov     word ptr [rsp+0A0h+var_80], r12w
 * 00000001C0035413: call    cs:__imp_WppAutoLogTrace
 * 00000001C003541A: nop     dword ptr [rax+rax+00h]
 * 00000001C003541F: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0035427: mov     rbx, [r11+10h]
 * 00000001C003542B: mov     rsi, [r11+18h]
 * 00000001C003542F: mov     rdi, [r11+20h]
 * 00000001C0035433: mov     r12, [r11+28h]
 * 00000001C0035437: mov     rsp, r11
 * 00000001C003543A: pop     rbp
 * 00000001C003543B: retn
 */
