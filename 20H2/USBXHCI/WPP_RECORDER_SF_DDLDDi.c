/*
 * XREFs of WPP_RECORDER_SF_DDLDDi @ 0x1C0044268
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0042BE8 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLDDi @ 0x1C0044268
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044268
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044268: mov     r11, rsp
 * 00000001C004426B: mov     [r11+8], rbx
 * 00000001C004426F: mov     [r11+10h], rsi
 * 00000001C0044273: mov     [r11+18h], rdi
 * 00000001C0044277: mov     [r11+20h], r14
 * 00000001C004427B: push    rbp
 * 00000001C004427C: lea     rbp, [r11-27h]
 * 00000001C0044280: sub     rsp, 90h
 * 00000001C0044287: mov     rsi, rcx
 * 00000001C004428A: movzx   edi, r9w
 * 00000001C004428E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0044295: mov     r14d, 4
 * 00000001C004429B: movzx   ebx, dl
 * 00000001C004429E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00442A5: jz      short loc_1C004431C
 * 00000001C00442A7: cmp     [rcx+29h], bl
 * 00000001C00442AA: jb      short loc_1C004431C
 * 00000001C00442AC: and     qword ptr [r11-18h], 0
 * 00000001C00442B1: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C00442B5: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00442BC: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00442C3: mov     rcx, [rcx+18h]
 * 00000001C00442C7: mov     r9d, edi
 * 00000001C00442CA: mov     qword ptr [r11-20h], 8
 * 00000001C00442D2: mov     [r11-28h], rdx
 * 00000001C00442D6: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00442DA: mov     [r11-30h], r14
 * 00000001C00442DE: mov     [r11-38h], rdx
 * 00000001C00442E2: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00442E6: mov     [r11-40h], r14
 * 00000001C00442EA: mov     [r11-48h], rdx
 * 00000001C00442EE: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00442F2: mov     [r11-50h], r14
 * 00000001C00442F6: mov     [r11-58h], rdx
 * 00000001C00442FA: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C00442FE: mov     [r11-60h], r14
 * 00000001C0044302: mov     [r11-68h], rdx
 * 00000001C0044306: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C004430A: mov     [r11-70h], r14
 * 00000001C004430E: mov     [r11-78h], rdx
 * 00000001C0044312: lea     edx, [r14+27h]
 * 00000001C0044316: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004431C: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0044325: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0044329: mov     [rsp+90h+var_10], 8
 * 00000001C0044335: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C004433C: mov     [rsp+90h+var_18], rax
 * 00000001C0044341: mov     r8d, 0Eh
 * 00000001C0044347: mov     [rsp+90h+var_20], r14
 * 00000001C004434C: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0044350: mov     [rsp+90h+var_28], rax
 * 00000001C0044355: mov     edx, ebx
 * 00000001C0044357: mov     [rsp+90h+var_30], r14
 * 00000001C004435C: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0044360: mov     [rsp+90h+var_38], rax
 * 00000001C0044365: mov     rcx, rsi
 * 00000001C0044368: mov     [rsp+90h+var_40], r14
 * 00000001C004436D: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0044371: mov     [rsp+90h+var_48], rax
 * 00000001C0044376: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C004437A: mov     [rsp+90h+var_50], r14
 * 00000001C004437F: mov     [rsp+90h+var_58], rax
 * 00000001C0044384: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0044388: mov     [rsp+90h+var_60], r14
 * 00000001C004438D: mov     [rsp+90h+var_68], rax
 * 00000001C0044392: mov     word ptr [rsp+90h+var_70], di
 * 00000001C0044397: call    cs:__imp_WppAutoLogTrace
 * 00000001C004439E: nop     dword ptr [rax+rax+00h]
 * 00000001C00443A3: lea     r11, [rsp+90h+var_s0]
 * 00000001C00443AB: mov     rbx, [r11+10h]
 * 00000001C00443AF: mov     rsi, [r11+18h]
 * 00000001C00443B3: mov     rdi, [r11+20h]
 * 00000001C00443B7: mov     r14, [r11+28h]
 * 00000001C00443BB: mov     rsp, r11
 * 00000001C00443BE: pop     rbp
 * 00000001C00443BF: retn
 */
