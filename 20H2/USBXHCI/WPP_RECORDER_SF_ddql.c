/*
 * XREFs of WPP_RECORDER_SF_ddqL @ 0x1C003C004
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0006860 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqL @ 0x1C003C004
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C004
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C004: mov     r11, rsp
 * 00000001C003C007: mov     [r11+8], rbx
 * 00000001C003C00B: mov     [r11+10h], rsi
 * 00000001C003C00F: push    rdi
 * 00000001C003C010: sub     rsp, 70h
 * 00000001C003C014: mov     rdi, rcx
 * 00000001C003C017: movzx   ebx, r9w
 * 00000001C003C01B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C022: mov     esi, 4
 * 00000001C003C027: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003C02E: jz      short loc_1C003C08D
 * 00000001C003C030: cmp     [rcx+29h], sil
 * 00000001C003C034: jb      short loc_1C003C08D
 * 00000001C003C036: and     qword ptr [r11-18h], 0
 * 00000001C003C03B: lea     rdx, [r11+48h]
 * 00000001C003C03F: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003C046: lea     r8, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003C04D: mov     rcx, [rcx+18h]
 * 00000001C003C051: mov     r9d, ebx
 * 00000001C003C054: mov     [r11-20h], rsi
 * 00000001C003C058: mov     [r11-28h], rdx
 * 00000001C003C05C: lea     rdx, [r11+40h]
 * 00000001C003C060: mov     qword ptr [r11-30h], 8
 * 00000001C003C068: mov     [r11-38h], rdx
 * 00000001C003C06C: lea     rdx, [r11+38h]
 * 00000001C003C070: mov     [r11-40h], rsi
 * 00000001C003C074: mov     [r11-48h], rdx
 * 00000001C003C078: lea     rdx, [r11+30h]
 * 00000001C003C07C: mov     [r11-50h], rsi
 * 00000001C003C080: mov     [r11-58h], rdx
 * 00000001C003C084: lea     edx, [rsi+27h]
 * 00000001C003C087: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C08D: and     [rsp+78h+var_10], 0
 * 00000001C003C093: lea     rax, [rsp+78h+arg_40]
 * 00000001C003C09B: mov     [rsp+78h+var_18], rsi
 * 00000001C003C0A0: lea     r9, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003C0A7: mov     [rsp+78h+var_20], rax
 * 00000001C003C0AC: mov     r8d, 0Dh
 * 00000001C003C0B2: mov     [rsp+78h+var_28], 8
 * 00000001C003C0BB: lea     rax, [rsp+78h+arg_38]
 * 00000001C003C0C3: mov     [rsp+78h+var_30], rax
 * 00000001C003C0C8: mov     edx, esi
 * 00000001C003C0CA: mov     [rsp+78h+var_38], rsi
 * 00000001C003C0CF: lea     rax, [rsp+78h+arg_30]
 * 00000001C003C0D7: mov     [rsp+78h+var_40], rax
 * 00000001C003C0DC: mov     rcx, rdi
 * 00000001C003C0DF: lea     rax, [rsp+78h+arg_28]
 * 00000001C003C0E7: mov     [rsp+78h+var_48], rsi
 * 00000001C003C0EC: mov     [rsp+78h+var_50], rax
 * 00000001C003C0F1: mov     [rsp+78h+var_58], bx
 * 00000001C003C0F6: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C0FD: nop     dword ptr [rax+rax+00h]
 * 00000001C003C102: lea     r11, [rsp+78h+var_8]
 * 00000001C003C107: mov     rbx, [r11+10h]
 * 00000001C003C10B: mov     rsi, [r11+18h]
 * 00000001C003C10F: mov     rsp, r11
 * 00000001C003C112: pop     rdi
 * 00000001C003C113: retn
 */
