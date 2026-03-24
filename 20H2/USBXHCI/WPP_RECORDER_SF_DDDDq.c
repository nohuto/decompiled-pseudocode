/*
 * XREFs of WPP_RECORDER_SF_DDDDq @ 0x1C00458C8
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C000D560 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDq @ 0x1C00458C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00458C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00458C8: mov     r11, rsp
 * 00000001C00458CB: mov     [r11+8], rbx
 * 00000001C00458CF: mov     [r11+10h], rsi
 * 00000001C00458D3: push    rdi
 * 00000001C00458D4: sub     rsp, 80h
 * 00000001C00458DB: mov     rdi, rcx
 * 00000001C00458DE: movzx   ebx, r9w
 * 00000001C00458E2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00458E9: mov     esi, 4
 * 00000001C00458EE: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00458F5: jz      short loc_1C0045960
 * 00000001C00458F7: cmp     byte ptr [rcx+29h], 5
 * 00000001C00458FB: jb      short loc_1C0045960
 * 00000001C00458FD: and     qword ptr [r11-18h], 0
 * 00000001C0045902: lea     rdx, [r11+50h]
 * 00000001C0045906: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C004590D: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0045914: mov     rcx, [rcx+18h]
 * 00000001C0045918: mov     r9d, ebx
 * 00000001C004591B: mov     qword ptr [r11-20h], 8
 * 00000001C0045923: mov     [r11-28h], rdx
 * 00000001C0045927: lea     rdx, [r11+48h]
 * 00000001C004592B: mov     [r11-30h], rsi
 * 00000001C004592F: mov     [r11-38h], rdx
 * 00000001C0045933: lea     rdx, [r11+40h]
 * 00000001C0045937: mov     [r11-40h], rsi
 * 00000001C004593B: mov     [r11-48h], rdx
 * 00000001C004593F: lea     rdx, [r11+38h]
 * 00000001C0045943: mov     [r11-50h], rsi
 * 00000001C0045947: mov     [r11-58h], rdx
 * 00000001C004594B: lea     rdx, [r11+30h]
 * 00000001C004594F: mov     [r11-60h], rsi
 * 00000001C0045953: mov     [r11-68h], rdx
 * 00000001C0045957: lea     edx, [rsi+27h]
 * 00000001C004595A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045960: and     [rsp+88h+var_10], 0
 * 00000001C0045966: lea     rax, [rsp+88h+arg_48]
 * 00000001C004596E: mov     [rsp+88h+var_18], 8
 * 00000001C0045977: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C004597E: mov     [rsp+88h+var_20], rax
 * 00000001C0045983: mov     edx, 5
 * 00000001C0045988: mov     [rsp+88h+var_28], rsi
 * 00000001C004598D: lea     rax, [rsp+88h+arg_40]
 * 00000001C0045995: mov     [rsp+88h+var_30], rax
 * 00000001C004599A: mov     rcx, rdi
 * 00000001C004599D: mov     [rsp+88h+var_38], rsi
 * 00000001C00459A2: lea     rax, [rsp+88h+arg_38]
 * 00000001C00459AA: mov     [rsp+88h+var_40], rax
 * 00000001C00459AF: lea     r8d, [rdx+9]
 * 00000001C00459B3: mov     [rsp+88h+var_48], rsi
 * 00000001C00459B8: lea     rax, [rsp+88h+arg_30]
 * 00000001C00459C0: mov     [rsp+88h+var_50], rax
 * 00000001C00459C5: lea     rax, [rsp+88h+arg_28]
 * 00000001C00459CD: mov     [rsp+88h+var_58], rsi
 * 00000001C00459D2: mov     [rsp+88h+var_60], rax
 * 00000001C00459D7: mov     [rsp+88h+var_68], bx
 * 00000001C00459DC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00459E3: nop     dword ptr [rax+rax+00h]
 * 00000001C00459E8: lea     r11, [rsp+88h+var_8]
 * 00000001C00459F0: mov     rbx, [r11+10h]
 * 00000001C00459F4: mov     rsi, [r11+18h]
 * 00000001C00459F8: mov     rsp, r11
 * 00000001C00459FB: pop     rdi
 * 00000001C00459FC: retn
 */
