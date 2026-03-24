/*
 * XREFs of WPP_RECORDER_SF_DDDqqD @ 0x1C0044AC0
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000D0B4 (Bulk_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqD @ 0x1C0044AC0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044AC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044AC0: mov     r11, rsp
 * 00000001C0044AC3: mov     [r11+8], rbx
 * 00000001C0044AC7: mov     [r11+10h], rsi
 * 00000001C0044ACB: mov     [r11+18h], rdi
 * 00000001C0044ACF: mov     [r11+20h], r14
 * 00000001C0044AD3: push    rbp
 * 00000001C0044AD4: lea     rbp, [r11-27h]
 * 00000001C0044AD8: sub     rsp, 90h
 * 00000001C0044ADF: mov     rdi, rcx
 * 00000001C0044AE2: movzx   ebx, r9w
 * 00000001C0044AE6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0044AED: mov     esi, 4
 * 00000001C0044AF2: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044AF9: lea     r14d, [rsi+4]
 * 00000001C0044AFD: jz      short loc_1C0044B70
 * 00000001C0044AFF: cmp     [rcx+29h], sil
 * 00000001C0044B03: jb      short loc_1C0044B70
 * 00000001C0044B05: and     qword ptr [r11-18h], 0
 * 00000001C0044B0A: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0044B0E: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0044B15: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044B1C: mov     rcx, [rcx+18h]
 * 00000001C0044B20: mov     r9d, ebx
 * 00000001C0044B23: mov     [r11-20h], rsi
 * 00000001C0044B27: mov     [r11-28h], rdx
 * 00000001C0044B2B: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0044B2F: mov     [r11-30h], r14
 * 00000001C0044B33: mov     [r11-38h], rdx
 * 00000001C0044B37: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0044B3B: mov     [r11-40h], r14
 * 00000001C0044B3F: mov     [r11-48h], rdx
 * 00000001C0044B43: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0044B47: mov     [r11-50h], rsi
 * 00000001C0044B4B: mov     [r11-58h], rdx
 * 00000001C0044B4F: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0044B53: mov     [r11-60h], rsi
 * 00000001C0044B57: mov     [r11-68h], rdx
 * 00000001C0044B5B: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0044B5F: mov     [r11-70h], rsi
 * 00000001C0044B63: mov     [r11-78h], rdx
 * 00000001C0044B67: lea     edx, [rsi+27h]
 * 00000001C0044B6A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044B70: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0044B79: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0044B7D: mov     [rsp+90h+var_10], rsi
 * 00000001C0044B85: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044B8C: mov     [rsp+90h+var_18], rax
 * 00000001C0044B91: mov     r8d, 0Eh
 * 00000001C0044B97: mov     [rsp+90h+var_20], r14
 * 00000001C0044B9C: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0044BA0: mov     [rsp+90h+var_28], rax
 * 00000001C0044BA5: mov     edx, esi
 * 00000001C0044BA7: mov     [rsp+90h+var_30], r14
 * 00000001C0044BAC: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0044BB0: mov     [rsp+90h+var_38], rax
 * 00000001C0044BB5: mov     rcx, rdi
 * 00000001C0044BB8: mov     [rsp+90h+var_40], rsi
 * 00000001C0044BBD: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0044BC1: mov     [rsp+90h+var_48], rax
 * 00000001C0044BC6: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0044BCA: mov     [rsp+90h+var_50], rsi
 * 00000001C0044BCF: mov     [rsp+90h+var_58], rax
 * 00000001C0044BD4: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0044BD8: mov     [rsp+90h+var_60], rsi
 * 00000001C0044BDD: mov     [rsp+90h+var_68], rax
 * 00000001C0044BE2: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C0044BE7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044BEE: nop     dword ptr [rax+rax+00h]
 * 00000001C0044BF3: lea     r11, [rsp+90h+var_s0]
 * 00000001C0044BFB: mov     rbx, [r11+10h]
 * 00000001C0044BFF: mov     rsi, [r11+18h]
 * 00000001C0044C03: mov     rdi, [r11+20h]
 * 00000001C0044C07: mov     r14, [r11+28h]
 * 00000001C0044C0B: mov     rsp, r11
 * 00000001C0044C0E: pop     rbp
 * 00000001C0044C0F: retn
 */
