/*
 * XREFs of WPP_RECORDER_SF_DDqqDDD @ 0x1C0044790
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDDD @ 0x1C0044790
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044790
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044790: mov     r11, rsp
 * 00000001C0044793: mov     [r11+8], rbx
 * 00000001C0044797: mov     [r11+10h], rsi
 * 00000001C004479B: mov     [r11+18h], rdi
 * 00000001C004479F: mov     [r11+20h], r14
 * 00000001C00447A3: push    rbp
 * 00000001C00447A4: lea     rbp, [r11-1Fh]
 * 00000001C00447A8: sub     rsp, 0A0h
 * 00000001C00447AF: mov     edi, 4
 * 00000001C00447B4: mov     rbx, rcx
 * 00000001C00447B7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00447BE: lea     esi, [rdi+4]
 * 00000001C00447C1: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00447C8: lea     r14d, [rdi+2Eh]
 * 00000001C00447CC: jz      short loc_1C004484D
 * 00000001C00447CE: cmp     byte ptr [rcx+29h], 2
 * 00000001C00447D2: jb      short loc_1C004484D
 * 00000001C00447D4: and     qword ptr [r11-18h], 0
 * 00000001C00447D9: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00447DD: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00447E4: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00447EB: mov     rcx, [rcx+18h]
 * 00000001C00447EF: mov     [r11-20h], rdi
 * 00000001C00447F3: mov     [r11-28h], rdx
 * 00000001C00447F7: lea     rdx, [rbp+17h+arg_50]
 * 00000001C00447FB: mov     [r11-30h], rdi
 * 00000001C00447FF: mov     [r11-38h], rdx
 * 00000001C0044803: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0044807: mov     [r11-40h], rdi
 * 00000001C004480B: mov     [r11-48h], rdx
 * 00000001C004480F: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0044813: mov     [r11-50h], rsi
 * 00000001C0044817: mov     [r11-58h], rdx
 * 00000001C004481B: lea     rdx, [rbp+17h+arg_38]
 * 00000001C004481F: mov     [r11-60h], rsi
 * 00000001C0044823: mov     [r11-68h], rdx
 * 00000001C0044827: lea     rdx, [rbp+17h+arg_30]
 * 00000001C004482B: mov     [r11-70h], rdi
 * 00000001C004482F: mov     [r11-78h], rdx
 * 00000001C0044833: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0044837: mov     [r11-80h], rdi
 * 00000001C004483B: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0044840: lea     edx, [rdi+27h]
 * 00000001C0044843: movzx   r9d, r14w
 * 00000001C0044847: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004484D: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0044856: lea     rax, [rbp+17h+arg_58]
 * 00000001C004485A: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0044862: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0044869: mov     [rsp+0A0h+var_18], rax
 * 00000001C0044871: mov     edx, 2
 * 00000001C0044876: mov     [rsp+0A0h+var_20], rdi
 * 00000001C004487E: lea     rax, [rbp+17h+arg_50]
 * 00000001C0044882: mov     [rsp+0A0h+var_28], rax
 * 00000001C0044887: mov     rcx, rbx
 * 00000001C004488A: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004488F: lea     rax, [rbp+17h+arg_48]
 * 00000001C0044893: mov     [rsp+0A0h+var_38], rax
 * 00000001C0044898: lea     r8d, [rdx+0Ch]
 * 00000001C004489C: mov     [rsp+0A0h+var_40], rsi
 * 00000001C00448A1: lea     rax, [rbp+17h+arg_40]
 * 00000001C00448A5: mov     [rsp+0A0h+var_48], rax
 * 00000001C00448AA: lea     rax, [rbp+17h+arg_38]
 * 00000001C00448AE: mov     [rsp+0A0h+var_50], rsi
 * 00000001C00448B3: mov     [rsp+0A0h+var_58], rax
 * 00000001C00448B8: lea     rax, [rbp+17h+arg_30]
 * 00000001C00448BC: mov     [rsp+0A0h+var_60], rdi
 * 00000001C00448C1: mov     [rsp+0A0h+var_68], rax
 * 00000001C00448C6: lea     rax, [rbp+17h+arg_28]
 * 00000001C00448CA: mov     [rsp+0A0h+var_70], rdi
 * 00000001C00448CF: mov     [rsp+0A0h+var_78], rax
 * 00000001C00448D4: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C00448DA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00448E1: nop     dword ptr [rax+rax+00h]
 * 00000001C00448E6: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C00448EE: mov     rbx, [r11+10h]
 * 00000001C00448F2: mov     rsi, [r11+18h]
 * 00000001C00448F6: mov     rdi, [r11+20h]
 * 00000001C00448FA: mov     r14, [r11+28h]
 * 00000001C00448FE: mov     rsp, r11
 * 00000001C0044901: pop     rbp
 * 00000001C0044902: retn
 */
