/*
 * XREFs of WPP_RECORDER_SF_DDDd @ 0x1C00405B0
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 *     TR_Create @ 0x1C006BF6C (TR_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDd @ 0x1C00405B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00405B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00405B0: mov     r11, rsp
 * 00000001C00405B3: mov     [r11+8], rbx
 * 00000001C00405B7: mov     [r11+10h], rbp
 * 00000001C00405BB: mov     [r11+18h], rsi
 * 00000001C00405BF: push    rdi
 * 00000001C00405C0: sub     rsp, 70h
 * 00000001C00405C4: mov     rsi, rcx
 * 00000001C00405C7: movzx   edi, r9w
 * 00000001C00405CB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00405D2: mov     ebp, 4
 * 00000001C00405D7: movzx   ebx, dl
 * 00000001C00405DA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00405E1: jz      short loc_1C004063C
 * 00000001C00405E3: cmp     [rcx+29h], bl
 * 00000001C00405E6: jb      short loc_1C004063C
 * 00000001C00405E8: and     qword ptr [r11-18h], 0
 * 00000001C00405ED: lea     rdx, [r11+48h]
 * 00000001C00405F1: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00405F8: mov     r9d, edi
 * 00000001C00405FB: mov     r8, [rsp+78h+arg_20]
 * 00000001C0040603: mov     rcx, [rcx+18h]
 * 00000001C0040607: mov     [r11-20h], rbp
 * 00000001C004060B: mov     [r11-28h], rdx
 * 00000001C004060F: lea     rdx, [r11+40h]
 * 00000001C0040613: mov     [r11-30h], rbp
 * 00000001C0040617: mov     [r11-38h], rdx
 * 00000001C004061B: lea     rdx, [r11+38h]
 * 00000001C004061F: mov     [r11-40h], rbp
 * 00000001C0040623: mov     [r11-48h], rdx
 * 00000001C0040627: lea     rdx, [r11+30h]
 * 00000001C004062B: mov     [r11-50h], rbp
 * 00000001C004062F: mov     [r11-58h], rdx
 * 00000001C0040633: lea     edx, [rbp+27h]
 * 00000001C0040636: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004063C: and     [rsp+78h+var_10], 0
 * 00000001C0040642: lea     rax, [rsp+78h+arg_40]
 * 00000001C004064A: mov     r9, [rsp+78h+arg_20]
 * 00000001C0040652: mov     r8d, 0Eh
 * 00000001C0040658: mov     [rsp+78h+var_18], rbp
 * 00000001C004065D: mov     edx, ebx
 * 00000001C004065F: mov     [rsp+78h+var_20], rax
 * 00000001C0040664: mov     rcx, rsi
 * 00000001C0040667: mov     [rsp+78h+var_28], rbp
 * 00000001C004066C: lea     rax, [rsp+78h+arg_38]
 * 00000001C0040674: mov     [rsp+78h+var_30], rax
 * 00000001C0040679: lea     rax, [rsp+78h+arg_30]
 * 00000001C0040681: mov     [rsp+78h+var_38], rbp
 * 00000001C0040686: mov     [rsp+78h+var_40], rax
 * 00000001C004068B: lea     rax, [rsp+78h+arg_28]
 * 00000001C0040693: mov     [rsp+78h+var_48], rbp
 * 00000001C0040698: mov     [rsp+78h+var_50], rax
 * 00000001C004069D: mov     [rsp+78h+var_58], di
 * 00000001C00406A2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00406A9: nop     dword ptr [rax+rax+00h]
 * 00000001C00406AE: lea     r11, [rsp+78h+var_8]
 * 00000001C00406B3: mov     rbx, [r11+10h]
 * 00000001C00406B7: mov     rbp, [r11+18h]
 * 00000001C00406BB: mov     rsi, [r11+20h]
 * 00000001C00406BF: mov     rsp, r11
 * 00000001C00406C2: pop     rdi
 * 00000001C00406C3: retn
 */
