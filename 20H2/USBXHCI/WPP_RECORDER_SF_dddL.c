/*
 * XREFs of WPP_RECORDER_SF_DDDL @ 0x1C004405C
 * Callers:
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0042F00 (Isoch_ProcessTransferRingEmptyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDL @ 0x1C004405C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004405C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004405C: mov     r11, rsp
 * 00000001C004405F: mov     [r11+8], rbx
 * 00000001C0044063: mov     [r11+10h], rsi
 * 00000001C0044067: push    rdi
 * 00000001C0044068: sub     rsp, 70h
 * 00000001C004406C: mov     rbx, rcx
 * 00000001C004406F: mov     edi, 4
 * 00000001C0044074: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004407B: lea     esi, [rdi+22h]
 * 00000001C004407E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044085: jz      short loc_1C00440E1
 * 00000001C0044087: cmp     [rcx+29h], dil
 * 00000001C004408B: jb      short loc_1C00440E1
 * 00000001C004408D: and     qword ptr [r11-18h], 0
 * 00000001C0044092: lea     rdx, [r11+48h]
 * 00000001C0044096: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C004409D: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00440A4: mov     rcx, [rcx+18h]
 * 00000001C00440A8: mov     [r11-20h], rdi
 * 00000001C00440AC: mov     [r11-28h], rdx
 * 00000001C00440B0: lea     rdx, [r11+40h]
 * 00000001C00440B4: mov     [r11-30h], rdi
 * 00000001C00440B8: mov     [r11-38h], rdx
 * 00000001C00440BC: lea     rdx, [r11+38h]
 * 00000001C00440C0: mov     [r11-40h], rdi
 * 00000001C00440C4: mov     [r11-48h], rdx
 * 00000001C00440C8: lea     rdx, [r11+30h]
 * 00000001C00440CC: mov     [r11-50h], rdi
 * 00000001C00440D0: mov     [r11-58h], rdx
 * 00000001C00440D4: lea     edx, [rdi+27h]
 * 00000001C00440D7: movzx   r9d, si
 * 00000001C00440DB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00440E1: and     [rsp+78h+var_10], 0
 * 00000001C00440E7: lea     rax, [rsp+78h+arg_40]
 * 00000001C00440EF: mov     [rsp+78h+var_18], rdi
 * 00000001C00440F4: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00440FB: mov     [rsp+78h+var_20], rax
 * 00000001C0044100: mov     r8d, 0Eh
 * 00000001C0044106: mov     [rsp+78h+var_28], rdi
 * 00000001C004410B: lea     rax, [rsp+78h+arg_38]
 * 00000001C0044113: mov     [rsp+78h+var_30], rax
 * 00000001C0044118: mov     edx, edi
 * 00000001C004411A: mov     [rsp+78h+var_38], rdi
 * 00000001C004411F: lea     rax, [rsp+78h+arg_30]
 * 00000001C0044127: mov     [rsp+78h+var_40], rax
 * 00000001C004412C: mov     rcx, rbx
 * 00000001C004412F: lea     rax, [rsp+78h+arg_28]
 * 00000001C0044137: mov     [rsp+78h+var_48], rdi
 * 00000001C004413C: mov     [rsp+78h+var_50], rax
 * 00000001C0044141: mov     [rsp+78h+var_58], si
 * 00000001C0044146: call    cs:__imp_WppAutoLogTrace
 * 00000001C004414D: nop     dword ptr [rax+rax+00h]
 * 00000001C0044152: lea     r11, [rsp+78h+var_8]
 * 00000001C0044157: mov     rbx, [r11+10h]
 * 00000001C004415B: mov     rsi, [r11+18h]
 * 00000001C004415F: mov     rsp, r11
 * 00000001C0044162: pop     rdi
 * 00000001C0044163: retn
 */
