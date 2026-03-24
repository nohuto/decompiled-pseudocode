/*
 * XREFs of WPP_RECORDER_SF_DDDDDDD @ 0x1C0044268
 * Callers:
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C000D190 (Bulk_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDDDD @ 0x1C0044268
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044268
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044268: mov     r11, rsp
 * 00000001C004426B: mov     [r11+8], rbx
 * 00000001C004426F: mov     [r11+10h], rsi
 * 00000001C0044273: mov     [r11+18h], rdi
 * 00000001C0044277: push    rbp
 * 00000001C0044278: lea     rbp, [r11-1Fh]
 * 00000001C004427C: sub     rsp, 0A0h
 * 00000001C0044283: mov     rbx, rcx
 * 00000001C0044286: mov     esi, 20h ; ' '
 * 00000001C004428B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0044292: lea     edi, [rsi-1Ch]
 * 00000001C0044295: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004429C: jz      short loc_1C004431D
 * 00000001C004429E: cmp     byte ptr [rcx+29h], 5
 * 00000001C00442A2: jb      short loc_1C004431D
 * 00000001C00442A4: and     qword ptr [r11-18h], 0
 * 00000001C00442A9: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00442AD: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00442B4: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C00442BB: mov     rcx, [rcx+18h]
 * 00000001C00442BF: mov     [r11-20h], rdi
 * 00000001C00442C3: mov     [r11-28h], rdx
 * 00000001C00442C7: lea     rdx, [rbp+17h+arg_50]
 * 00000001C00442CB: mov     [r11-30h], rdi
 * 00000001C00442CF: mov     [r11-38h], rdx
 * 00000001C00442D3: lea     rdx, [rbp+17h+arg_48]
 * 00000001C00442D7: mov     [r11-40h], rdi
 * 00000001C00442DB: mov     [r11-48h], rdx
 * 00000001C00442DF: lea     rdx, [rbp+17h+arg_40]
 * 00000001C00442E3: mov     [r11-50h], rdi
 * 00000001C00442E7: mov     [r11-58h], rdx
 * 00000001C00442EB: lea     rdx, [rbp+17h+arg_38]
 * 00000001C00442EF: mov     [r11-60h], rdi
 * 00000001C00442F3: mov     [r11-68h], rdx
 * 00000001C00442F7: lea     rdx, [rbp+17h+arg_30]
 * 00000001C00442FB: mov     [r11-70h], rdi
 * 00000001C00442FF: mov     [r11-78h], rdx
 * 00000001C0044303: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0044307: mov     [r11-80h], rdi
 * 00000001C004430B: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0044310: lea     edx, [rsi+0Bh]
 * 00000001C0044313: movzx   r9d, si
 * 00000001C0044317: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004431D: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0044326: lea     rax, [rbp+17h+arg_58]
 * 00000001C004432A: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0044332: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044339: mov     [rsp+0A0h+var_18], rax
 * 00000001C0044341: mov     edx, 5
 * 00000001C0044346: mov     [rsp+0A0h+var_20], rdi
 * 00000001C004434E: lea     rax, [rbp+17h+arg_50]
 * 00000001C0044352: mov     [rsp+0A0h+var_28], rax
 * 00000001C0044357: mov     rcx, rbx
 * 00000001C004435A: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004435F: lea     rax, [rbp+17h+arg_48]
 * 00000001C0044363: mov     [rsp+0A0h+var_38], rax
 * 00000001C0044368: lea     r8d, [rdx+9]
 * 00000001C004436C: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0044371: lea     rax, [rbp+17h+arg_40]
 * 00000001C0044375: mov     [rsp+0A0h+var_48], rax
 * 00000001C004437A: lea     rax, [rbp+17h+arg_38]
 * 00000001C004437E: mov     [rsp+0A0h+var_50], rdi
 * 00000001C0044383: mov     [rsp+0A0h+var_58], rax
 * 00000001C0044388: lea     rax, [rbp+17h+arg_30]
 * 00000001C004438C: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0044391: mov     [rsp+0A0h+var_68], rax
 * 00000001C0044396: lea     rax, [rbp+17h+arg_28]
 * 00000001C004439A: mov     [rsp+0A0h+var_70], rdi
 * 00000001C004439F: mov     [rsp+0A0h+var_78], rax
 * 00000001C00443A4: mov     word ptr [rsp+0A0h+var_80], si
 * 00000001C00443A9: call    cs:__imp_WppAutoLogTrace
 * 00000001C00443B0: nop     dword ptr [rax+rax+00h]
 * 00000001C00443B5: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C00443BD: mov     rbx, [r11+10h]
 * 00000001C00443C1: mov     rsi, [r11+18h]
 * 00000001C00443C5: mov     rdi, [r11+20h]
 * 00000001C00443C9: mov     rsp, r11
 * 00000001C00443CC: pop     rbp
 * 00000001C00443CD: retn
 */
