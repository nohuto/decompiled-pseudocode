/*
 * XREFs of WPP_RECORDER_SF_qiD @ 0x1C003F2F4
 * Callers:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qiD @ 0x1C003F2F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F2F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F2F4: mov     r11, rsp
 * 00000001C003F2F7: mov     [r11+8], rbx
 * 00000001C003F2FB: mov     [r11+10h], rsi
 * 00000001C003F2FF: push    rdi
 * 00000001C003F300: sub     rsp, 60h
 * 00000001C003F304: mov     rdi, rcx
 * 00000001C003F307: movzx   ebx, r9w
 * 00000001C003F30B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003F312: mov     esi, 8
 * 00000001C003F317: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003F31E: jz      short loc_1C003F371
 * 00000001C003F320: cmp     byte ptr [rcx+29h], 5
 * 00000001C003F324: jb      short loc_1C003F371
 * 00000001C003F326: and     qword ptr [r11-18h], 0
 * 00000001C003F32B: lea     rdx, [r11+40h]
 * 00000001C003F32F: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003F336: lea     r8, WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids
 * 00000001C003F33D: mov     rcx, [rcx+18h]
 * 00000001C003F341: mov     r9d, ebx
 * 00000001C003F344: mov     qword ptr [r11-20h], 4
 * 00000001C003F34C: mov     [r11-28h], rdx
 * 00000001C003F350: lea     rdx, [r11+38h]
 * 00000001C003F354: mov     [r11-30h], rsi
 * 00000001C003F358: mov     [r11-38h], rdx
 * 00000001C003F35C: lea     rdx, [r11+30h]
 * 00000001C003F360: mov     [r11-40h], rsi
 * 00000001C003F364: mov     [r11-48h], rdx
 * 00000001C003F368: lea     edx, [rsi+23h]
 * 00000001C003F36B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003F371: and     [rsp+68h+var_10], 0
 * 00000001C003F377: lea     rax, [rsp+68h+arg_38]
 * 00000001C003F37F: mov     [rsp+68h+var_18], 4
 * 00000001C003F388: lea     r9, WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids
 * 00000001C003F38F: mov     [rsp+68h+var_20], rax
 * 00000001C003F394: mov     edx, 5
 * 00000001C003F399: mov     [rsp+68h+var_28], rsi
 * 00000001C003F39E: lea     rax, [rsp+68h+arg_30]
 * 00000001C003F3A6: mov     [rsp+68h+var_30], rax
 * 00000001C003F3AB: mov     rcx, rdi
 * 00000001C003F3AE: lea     rax, [rsp+68h+arg_28]
 * 00000001C003F3B6: mov     [rsp+68h+var_38], rsi
 * 00000001C003F3BB: mov     [rsp+68h+var_40], rax
 * 00000001C003F3C0: lea     r8d, [rdx+9]
 * 00000001C003F3C4: mov     [rsp+68h+var_48], bx
 * 00000001C003F3C9: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F3D0: nop     dword ptr [rax+rax+00h]
 * 00000001C003F3D5: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003F3DA: mov     rsi, [rsp+68h+arg_8]
 * 00000001C003F3DF: add     rsp, 60h
 * 00000001C003F3E3: pop     rdi
 * 00000001C003F3E4: retn
 */
