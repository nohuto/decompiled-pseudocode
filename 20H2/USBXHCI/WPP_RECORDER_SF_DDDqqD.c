/*
 * XREFs of WPP_RECORDER_SF_DDDqqD @ 0x1C0045FB0
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000D984 (Bulk_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqD @ 0x1C0045FB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045FB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045FB0: mov     r11, rsp
 * 00000001C0045FB3: mov     [r11+8], rbx
 * 00000001C0045FB7: mov     [r11+10h], rsi
 * 00000001C0045FBB: mov     [r11+18h], rdi
 * 00000001C0045FBF: mov     [r11+20h], r14
 * 00000001C0045FC3: push    rbp
 * 00000001C0045FC4: lea     rbp, [r11-27h]
 * 00000001C0045FC8: sub     rsp, 90h
 * 00000001C0045FCF: mov     rdi, rcx
 * 00000001C0045FD2: movzx   ebx, r9w
 * 00000001C0045FD6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0045FDD: mov     esi, 4
 * 00000001C0045FE2: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0045FE9: lea     r14d, [rsi+4]
 * 00000001C0045FED: jz      short loc_1C0046060
 * 00000001C0045FEF: cmp     [rcx+29h], sil
 * 00000001C0045FF3: jb      short loc_1C0046060
 * 00000001C0045FF5: and     qword ptr [r11-18h], 0
 * 00000001C0045FFA: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0045FFE: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0046005: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C004600C: mov     rcx, [rcx+18h]
 * 00000001C0046010: mov     r9d, ebx
 * 00000001C0046013: mov     [r11-20h], rsi
 * 00000001C0046017: mov     [r11-28h], rdx
 * 00000001C004601B: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C004601F: mov     [r11-30h], r14
 * 00000001C0046023: mov     [r11-38h], rdx
 * 00000001C0046027: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C004602B: mov     [r11-40h], r14
 * 00000001C004602F: mov     [r11-48h], rdx
 * 00000001C0046033: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0046037: mov     [r11-50h], rsi
 * 00000001C004603B: mov     [r11-58h], rdx
 * 00000001C004603F: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0046043: mov     [r11-60h], rsi
 * 00000001C0046047: mov     [r11-68h], rdx
 * 00000001C004604B: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C004604F: mov     [r11-70h], rsi
 * 00000001C0046053: mov     [r11-78h], rdx
 * 00000001C0046057: lea     edx, [rsi+27h]
 * 00000001C004605A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046060: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0046069: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C004606D: mov     [rsp+90h+var_10], rsi
 * 00000001C0046075: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C004607C: mov     [rsp+90h+var_18], rax
 * 00000001C0046081: mov     r8d, 0Eh
 * 00000001C0046087: mov     [rsp+90h+var_20], r14
 * 00000001C004608C: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0046090: mov     [rsp+90h+var_28], rax
 * 00000001C0046095: mov     edx, esi
 * 00000001C0046097: mov     [rsp+90h+var_30], r14
 * 00000001C004609C: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C00460A0: mov     [rsp+90h+var_38], rax
 * 00000001C00460A5: mov     rcx, rdi
 * 00000001C00460A8: mov     [rsp+90h+var_40], rsi
 * 00000001C00460AD: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C00460B1: mov     [rsp+90h+var_48], rax
 * 00000001C00460B6: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C00460BA: mov     [rsp+90h+var_50], rsi
 * 00000001C00460BF: mov     [rsp+90h+var_58], rax
 * 00000001C00460C4: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C00460C8: mov     [rsp+90h+var_60], rsi
 * 00000001C00460CD: mov     [rsp+90h+var_68], rax
 * 00000001C00460D2: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C00460D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00460DE: nop     dword ptr [rax+rax+00h]
 * 00000001C00460E3: lea     r11, [rsp+90h+var_s0]
 * 00000001C00460EB: mov     rbx, [r11+10h]
 * 00000001C00460EF: mov     rsi, [r11+18h]
 * 00000001C00460F3: mov     rdi, [r11+20h]
 * 00000001C00460F7: mov     r14, [r11+28h]
 * 00000001C00460FB: mov     rsp, r11
 * 00000001C00460FE: pop     rbp
 * 00000001C00460FF: retn
 */
