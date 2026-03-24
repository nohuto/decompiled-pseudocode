/*
 * XREFs of WPP_RECORDER_SF_DDDDq @ 0x1C00443D8
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C000CC90 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDq @ 0x1C00443D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00443D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00443D8: mov     r11, rsp
 * 00000001C00443DB: mov     [r11+8], rbx
 * 00000001C00443DF: mov     [r11+10h], rsi
 * 00000001C00443E3: push    rdi
 * 00000001C00443E4: sub     rsp, 80h
 * 00000001C00443EB: mov     rdi, rcx
 * 00000001C00443EE: movzx   ebx, r9w
 * 00000001C00443F2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00443F9: mov     esi, 4
 * 00000001C00443FE: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044405: jz      short loc_1C0044470
 * 00000001C0044407: cmp     byte ptr [rcx+29h], 5
 * 00000001C004440B: jb      short loc_1C0044470
 * 00000001C004440D: and     qword ptr [r11-18h], 0
 * 00000001C0044412: lea     rdx, [r11+50h]
 * 00000001C0044416: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004441D: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044424: mov     rcx, [rcx+18h]
 * 00000001C0044428: mov     r9d, ebx
 * 00000001C004442B: mov     qword ptr [r11-20h], 8
 * 00000001C0044433: mov     [r11-28h], rdx
 * 00000001C0044437: lea     rdx, [r11+48h]
 * 00000001C004443B: mov     [r11-30h], rsi
 * 00000001C004443F: mov     [r11-38h], rdx
 * 00000001C0044443: lea     rdx, [r11+40h]
 * 00000001C0044447: mov     [r11-40h], rsi
 * 00000001C004444B: mov     [r11-48h], rdx
 * 00000001C004444F: lea     rdx, [r11+38h]
 * 00000001C0044453: mov     [r11-50h], rsi
 * 00000001C0044457: mov     [r11-58h], rdx
 * 00000001C004445B: lea     rdx, [r11+30h]
 * 00000001C004445F: mov     [r11-60h], rsi
 * 00000001C0044463: mov     [r11-68h], rdx
 * 00000001C0044467: lea     edx, [rsi+27h]
 * 00000001C004446A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044470: and     [rsp+88h+var_10], 0
 * 00000001C0044476: lea     rax, [rsp+88h+arg_48]
 * 00000001C004447E: mov     [rsp+88h+var_18], 8
 * 00000001C0044487: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C004448E: mov     [rsp+88h+var_20], rax
 * 00000001C0044493: mov     edx, 5
 * 00000001C0044498: mov     [rsp+88h+var_28], rsi
 * 00000001C004449D: lea     rax, [rsp+88h+arg_40]
 * 00000001C00444A5: mov     [rsp+88h+var_30], rax
 * 00000001C00444AA: mov     rcx, rdi
 * 00000001C00444AD: mov     [rsp+88h+var_38], rsi
 * 00000001C00444B2: lea     rax, [rsp+88h+arg_38]
 * 00000001C00444BA: mov     [rsp+88h+var_40], rax
 * 00000001C00444BF: lea     r8d, [rdx+9]
 * 00000001C00444C3: mov     [rsp+88h+var_48], rsi
 * 00000001C00444C8: lea     rax, [rsp+88h+arg_30]
 * 00000001C00444D0: mov     [rsp+88h+var_50], rax
 * 00000001C00444D5: lea     rax, [rsp+88h+arg_28]
 * 00000001C00444DD: mov     [rsp+88h+var_58], rsi
 * 00000001C00444E2: mov     [rsp+88h+var_60], rax
 * 00000001C00444E7: mov     [rsp+88h+var_68], bx
 * 00000001C00444EC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00444F3: nop     dword ptr [rax+rax+00h]
 * 00000001C00444F8: lea     r11, [rsp+88h+var_8]
 * 00000001C0044500: mov     rbx, [r11+10h]
 * 00000001C0044504: mov     rsi, [r11+18h]
 * 00000001C0044508: mov     rsp, r11
 * 00000001C004450B: pop     rdi
 * 00000001C004450C: retn
 */
