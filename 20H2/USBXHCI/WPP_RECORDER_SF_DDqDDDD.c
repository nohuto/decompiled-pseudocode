/*
 * XREFs of WPP_RECORDER_SF_ddqDddd @ 0x1C00509A8
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0015F74 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqDddd @ 0x1C00509A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00509A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00509A8: mov     r11, rsp
 * 00000001C00509AB: mov     [r11+8], rbx
 * 00000001C00509AF: mov     [r11+10h], rdi
 * 00000001C00509B3: mov     [r11+18h], r14
 * 00000001C00509B7: push    rbp
 * 00000001C00509B8: lea     rbp, [r11-1Fh]
 * 00000001C00509BC: sub     rsp, 0A0h
 * 00000001C00509C3: mov     rbx, rcx
 * 00000001C00509C6: mov     edi, 4
 * 00000001C00509CB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00509D2: lea     r14d, [rdi+0Ah]
 * 00000001C00509D6: mov     eax, [rcx+2Ch]
 * 00000001C00509D9: test    al, al
 * 00000001C00509DB: jns     loc_1C0050A64
 * 00000001C00509E1: cmp     byte ptr [rcx+29h], 5
 * 00000001C00509E5: jb      short loc_1C0050A64
 * 00000001C00509E7: and     qword ptr [r11-18h], 0
 * 00000001C00509EC: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00509F0: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00509F7: lea     r8, WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids
 * 00000001C00509FE: mov     rcx, [rcx+18h]
 * 00000001C0050A02: mov     [r11-20h], rdi
 * 00000001C0050A06: mov     [r11-28h], rdx
 * 00000001C0050A0A: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0050A0E: mov     [r11-30h], rdi
 * 00000001C0050A12: mov     [r11-38h], rdx
 * 00000001C0050A16: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0050A1A: mov     [r11-40h], rdi
 * 00000001C0050A1E: mov     [r11-48h], rdx
 * 00000001C0050A22: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0050A26: mov     [r11-50h], rdi
 * 00000001C0050A2A: mov     [r11-58h], rdx
 * 00000001C0050A2E: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0050A32: mov     qword ptr [r11-60h], 8
 * 00000001C0050A3A: mov     [r11-68h], rdx
 * 00000001C0050A3E: lea     rdx, [rbp+17h+arg_30]
 * 00000001C0050A42: mov     [r11-70h], rdi
 * 00000001C0050A46: mov     [r11-78h], rdx
 * 00000001C0050A4A: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0050A4E: mov     [r11-80h], rdi
 * 00000001C0050A52: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0050A57: lea     edx, [rdi+27h]
 * 00000001C0050A5A: movzx   r9d, r14w
 * 00000001C0050A5E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0050A64: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0050A6D: lea     rax, [rbp+17h+arg_58]
 * 00000001C0050A71: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0050A79: lea     r9, WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids
 * 00000001C0050A80: mov     [rsp+0A0h+var_18], rax
 * 00000001C0050A88: mov     edx, 5
 * 00000001C0050A8D: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0050A95: lea     rax, [rbp+17h+arg_50]
 * 00000001C0050A99: mov     [rsp+0A0h+var_28], rax
 * 00000001C0050A9E: mov     rcx, rbx
 * 00000001C0050AA1: mov     [rsp+0A0h+var_30], rdi
 * 00000001C0050AA6: lea     rax, [rbp+17h+arg_48]
 * 00000001C0050AAA: mov     [rsp+0A0h+var_38], rax
 * 00000001C0050AAF: lea     r8d, [rdx+3]
 * 00000001C0050AB3: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0050AB8: lea     rax, [rbp+17h+arg_40]
 * 00000001C0050ABC: mov     [rsp+0A0h+var_48], rax
 * 00000001C0050AC1: lea     rax, [rbp+17h+arg_38]
 * 00000001C0050AC5: mov     [rsp+0A0h+var_50], 8
 * 00000001C0050ACE: mov     [rsp+0A0h+var_58], rax
 * 00000001C0050AD3: lea     rax, [rbp+17h+arg_30]
 * 00000001C0050AD7: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0050ADC: mov     [rsp+0A0h+var_68], rax
 * 00000001C0050AE1: lea     rax, [rbp+17h+arg_28]
 * 00000001C0050AE5: mov     [rsp+0A0h+var_70], rdi
 * 00000001C0050AEA: mov     [rsp+0A0h+var_78], rax
 * 00000001C0050AEF: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C0050AF5: call    cs:__imp_WppAutoLogTrace
 * 00000001C0050AFC: nop     dword ptr [rax+rax+00h]
 * 00000001C0050B01: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0050B09: mov     rbx, [r11+10h]
 * 00000001C0050B0D: mov     rdi, [r11+18h]
 * 00000001C0050B11: mov     r14, [r11+20h]
 * 00000001C0050B15: mov     rsp, r11
 * 00000001C0050B18: pop     rbp
 * 00000001C0050B19: retn
 */
