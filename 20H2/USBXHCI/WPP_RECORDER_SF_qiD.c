/*
 * XREFs of WPP_RECORDER_SF_qiD @ 0x1C00407D4
 * Callers:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qiD @ 0x1C00407D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00407D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00407D4: mov     r11, rsp
 * 00000001C00407D7: mov     [r11+8], rbx
 * 00000001C00407DB: mov     [r11+10h], rsi
 * 00000001C00407DF: push    rdi
 * 00000001C00407E0: sub     rsp, 60h
 * 00000001C00407E4: mov     rdi, rcx
 * 00000001C00407E7: movzx   ebx, r9w
 * 00000001C00407EB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00407F2: mov     esi, 8
 * 00000001C00407F7: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00407FE: jz      short loc_1C0040851
 * 00000001C0040800: cmp     byte ptr [rcx+29h], 5
 * 00000001C0040804: jb      short loc_1C0040851
 * 00000001C0040806: and     qword ptr [r11-18h], 0
 * 00000001C004080B: lea     rdx, [r11+40h]
 * 00000001C004080F: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0040816: lea     r8, WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids
 * 00000001C004081D: mov     rcx, [rcx+18h]
 * 00000001C0040821: mov     r9d, ebx
 * 00000001C0040824: mov     qword ptr [r11-20h], 4
 * 00000001C004082C: mov     [r11-28h], rdx
 * 00000001C0040830: lea     rdx, [r11+38h]
 * 00000001C0040834: mov     [r11-30h], rsi
 * 00000001C0040838: mov     [r11-38h], rdx
 * 00000001C004083C: lea     rdx, [r11+30h]
 * 00000001C0040840: mov     [r11-40h], rsi
 * 00000001C0040844: mov     [r11-48h], rdx
 * 00000001C0040848: lea     edx, [rsi+23h]
 * 00000001C004084B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040851: and     [rsp+68h+var_10], 0
 * 00000001C0040857: lea     rax, [rsp+68h+arg_38]
 * 00000001C004085F: mov     [rsp+68h+var_18], 4
 * 00000001C0040868: lea     r9, WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids
 * 00000001C004086F: mov     [rsp+68h+var_20], rax
 * 00000001C0040874: mov     edx, 5
 * 00000001C0040879: mov     [rsp+68h+var_28], rsi
 * 00000001C004087E: lea     rax, [rsp+68h+arg_30]
 * 00000001C0040886: mov     [rsp+68h+var_30], rax
 * 00000001C004088B: mov     rcx, rdi
 * 00000001C004088E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0040896: mov     [rsp+68h+var_38], rsi
 * 00000001C004089B: mov     [rsp+68h+var_40], rax
 * 00000001C00408A0: lea     r8d, [rdx+9]
 * 00000001C00408A4: mov     [rsp+68h+var_48], bx
 * 00000001C00408A9: call    cs:__imp_WppAutoLogTrace
 * 00000001C00408B0: nop     dword ptr [rax+rax+00h]
 * 00000001C00408B5: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00408BA: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00408BF: add     rsp, 60h
 * 00000001C00408C3: pop     rdi
 * 00000001C00408C4: retn
 */
