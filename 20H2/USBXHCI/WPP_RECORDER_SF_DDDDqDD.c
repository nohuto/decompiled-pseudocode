/*
 * XREFs of WPP_RECORDER_SF_DDDDqDD @ 0x1C0045A04
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C000D560 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDqDD @ 0x1C0045A04
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045A04
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045A04: mov     r11, rsp
 * 00000001C0045A07: mov     [r11+8], rbx
 * 00000001C0045A0B: mov     [r11+10h], rdi
 * 00000001C0045A0F: mov     [r11+18h], r14
 * 00000001C0045A13: push    rbp
 * 00000001C0045A14: lea     rbp, [r11-1Fh]
 * 00000001C0045A18: sub     rsp, 0A0h
 * 00000001C0045A1F: mov     rbx, rcx
 * 00000001C0045A22: mov     edi, 4
 * 00000001C0045A27: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0045A2E: lea     r14d, [rdi+0Fh]
 * 00000001C0045A32: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0045A39: jz      loc_1C0045AC2
 * 00000001C0045A3F: cmp     byte ptr [rcx+29h], 5
 * 00000001C0045A43: jb      short loc_1C0045AC2
 * 00000001C0045A45: and     qword ptr [r11-18h], 0
 * 00000001C0045A4A: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0045A4E: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0045A55: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0045A5C: mov     rcx, [rcx+18h]
 * 00000001C0045A60: mov     [r11-20h], rdi
 * 00000001C0045A64: mov     [r11-28h], rdx
 * 00000001C0045A68: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0045A6C: mov     [r11-30h], rdi
 * 00000001C0045A70: mov     [r11-38h], rdx
 * 00000001C0045A74: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0045A78: mov     qword ptr [r11-40h], 8
 * 00000001C0045A80: mov     [r11-48h], rdx
 * 00000001C0045A84: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0045A88: mov     [r11-50h], rdi
 * 00000001C0045A8C: mov     [r11-58h], rdx
 * 00000001C0045A90: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0045A94: mov     [r11-60h], rdi
 * 00000001C0045A98: mov     [r11-68h], rdx
 * 00000001C0045A9C: lea     rdx, [rbp+17h+arg_30]
 * 00000001C0045AA0: mov     [r11-70h], rdi
 * 00000001C0045AA4: mov     [r11-78h], rdx
 * 00000001C0045AA8: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0045AAC: mov     [r11-80h], rdi
 * 00000001C0045AB0: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0045AB5: lea     edx, [rdi+27h]
 * 00000001C0045AB8: movzx   r9d, r14w
 * 00000001C0045ABC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045AC2: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0045ACB: lea     rax, [rbp+17h+arg_58]
 * 00000001C0045ACF: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0045AD7: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0045ADE: mov     [rsp+0A0h+var_18], rax
 * 00000001C0045AE6: mov     edx, 5
 * 00000001C0045AEB: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0045AF3: lea     rax, [rbp+17h+arg_50]
 * 00000001C0045AF7: mov     [rsp+0A0h+var_28], rax
 * 00000001C0045AFC: mov     rcx, rbx
 * 00000001C0045AFF: mov     [rsp+0A0h+var_30], 8
 * 00000001C0045B08: lea     rax, [rbp+17h+arg_48]
 * 00000001C0045B0C: mov     [rsp+0A0h+var_38], rax
 * 00000001C0045B11: lea     r8d, [rdx+9]
 * 00000001C0045B15: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0045B1A: lea     rax, [rbp+17h+arg_40]
 * 00000001C0045B1E: mov     [rsp+0A0h+var_48], rax
 * 00000001C0045B23: lea     rax, [rbp+17h+arg_38]
 * 00000001C0045B27: mov     [rsp+0A0h+var_50], rdi
 * 00000001C0045B2C: mov     [rsp+0A0h+var_58], rax
 * 00000001C0045B31: lea     rax, [rbp+17h+arg_30]
 * 00000001C0045B35: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0045B3A: mov     [rsp+0A0h+var_68], rax
 * 00000001C0045B3F: lea     rax, [rbp+17h+arg_28]
 * 00000001C0045B43: mov     [rsp+0A0h+var_70], rdi
 * 00000001C0045B48: mov     [rsp+0A0h+var_78], rax
 * 00000001C0045B4D: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C0045B53: call    cs:__imp_WppAutoLogTrace
 * 00000001C0045B5A: nop     dword ptr [rax+rax+00h]
 * 00000001C0045B5F: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0045B67: mov     rbx, [r11+10h]
 * 00000001C0045B6B: mov     rdi, [r11+18h]
 * 00000001C0045B6F: mov     r14, [r11+20h]
 * 00000001C0045B73: mov     rsp, r11
 * 00000001C0045B76: pop     rbp
 * 00000001C0045B77: retn
 */
