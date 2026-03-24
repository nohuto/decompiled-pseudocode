/*
 * XREFs of WPP_RECORDER_SF_DDDDDDD @ 0x1C0045758
 * Callers:
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C000DA60 (Bulk_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDDDD @ 0x1C0045758
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045758
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045758: mov     r11, rsp
 * 00000001C004575B: mov     [r11+8], rbx
 * 00000001C004575F: mov     [r11+10h], rsi
 * 00000001C0045763: mov     [r11+18h], rdi
 * 00000001C0045767: push    rbp
 * 00000001C0045768: lea     rbp, [r11-1Fh]
 * 00000001C004576C: sub     rsp, 0A0h
 * 00000001C0045773: mov     rbx, rcx
 * 00000001C0045776: mov     esi, 20h ; ' '
 * 00000001C004577B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0045782: lea     edi, [rsi-1Ch]
 * 00000001C0045785: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004578C: jz      short loc_1C004580D
 * 00000001C004578E: cmp     byte ptr [rcx+29h], 5
 * 00000001C0045792: jb      short loc_1C004580D
 * 00000001C0045794: and     qword ptr [r11-18h], 0
 * 00000001C0045799: lea     rdx, [rbp+17h+arg_58]
 * 00000001C004579D: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00457A4: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C00457AB: mov     rcx, [rcx+18h]
 * 00000001C00457AF: mov     [r11-20h], rdi
 * 00000001C00457B3: mov     [r11-28h], rdx
 * 00000001C00457B7: lea     rdx, [rbp+17h+arg_50]
 * 00000001C00457BB: mov     [r11-30h], rdi
 * 00000001C00457BF: mov     [r11-38h], rdx
 * 00000001C00457C3: lea     rdx, [rbp+17h+arg_48]
 * 00000001C00457C7: mov     [r11-40h], rdi
 * 00000001C00457CB: mov     [r11-48h], rdx
 * 00000001C00457CF: lea     rdx, [rbp+17h+arg_40]
 * 00000001C00457D3: mov     [r11-50h], rdi
 * 00000001C00457D7: mov     [r11-58h], rdx
 * 00000001C00457DB: lea     rdx, [rbp+17h+arg_38]
 * 00000001C00457DF: mov     [r11-60h], rdi
 * 00000001C00457E3: mov     [r11-68h], rdx
 * 00000001C00457E7: lea     rdx, [rbp+17h+arg_30]
 * 00000001C00457EB: mov     [r11-70h], rdi
 * 00000001C00457EF: mov     [r11-78h], rdx
 * 00000001C00457F3: lea     rdx, [rbp+17h+arg_28]
 * 00000001C00457F7: mov     [r11-80h], rdi
 * 00000001C00457FB: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0045800: lea     edx, [rsi+0Bh]
 * 00000001C0045803: movzx   r9d, si
 * 00000001C0045807: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004580D: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0045816: lea     rax, [rbp+17h+arg_58]
 * 00000001C004581A: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0045822: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0045829: mov     [rsp+0A0h+var_18], rax
 * 00000001C0045831: mov     edx, 5
 * 00000001C0045836: mov     [rsp+0A0h+var_20], rdi
 * 00000001C004583E: lea     rax, [rbp+17h+arg_50]
 * 00000001C0045842: mov     [rsp+0A0h+var_28], rax
 * 00000001C0045847: mov     rcx, rbx
 * 00000001C004584A: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004584F: lea     rax, [rbp+17h+arg_48]
 * 00000001C0045853: mov     [rsp+0A0h+var_38], rax
 * 00000001C0045858: lea     r8d, [rdx+9]
 * 00000001C004585C: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0045861: lea     rax, [rbp+17h+arg_40]
 * 00000001C0045865: mov     [rsp+0A0h+var_48], rax
 * 00000001C004586A: lea     rax, [rbp+17h+arg_38]
 * 00000001C004586E: mov     [rsp+0A0h+var_50], rdi
 * 00000001C0045873: mov     [rsp+0A0h+var_58], rax
 * 00000001C0045878: lea     rax, [rbp+17h+arg_30]
 * 00000001C004587C: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0045881: mov     [rsp+0A0h+var_68], rax
 * 00000001C0045886: lea     rax, [rbp+17h+arg_28]
 * 00000001C004588A: mov     [rsp+0A0h+var_70], rdi
 * 00000001C004588F: mov     [rsp+0A0h+var_78], rax
 * 00000001C0045894: mov     word ptr [rsp+0A0h+var_80], si
 * 00000001C0045899: call    cs:__imp_WppAutoLogTrace
 * 00000001C00458A0: nop     dword ptr [rax+rax+00h]
 * 00000001C00458A5: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C00458AD: mov     rbx, [r11+10h]
 * 00000001C00458B1: mov     rsi, [r11+18h]
 * 00000001C00458B5: mov     rdi, [r11+20h]
 * 00000001C00458B9: mov     rsp, r11
 * 00000001C00458BC: pop     rbp
 * 00000001C00458BD: retn
 */
