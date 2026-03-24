/*
 * XREFs of WPP_RECORDER_SF_dddddd @ 0x1C0046E80
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C00059D8 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dddddd @ 0x1C0046E80
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046E80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046E80: mov     r11, rsp
 * 00000001C0046E83: mov     [r11+8], rbx
 * 00000001C0046E87: mov     [r11+10h], rsi
 * 00000001C0046E8B: mov     [r11+18h], rdi
 * 00000001C0046E8F: push    rbp
 * 00000001C0046E90: lea     rbp, [r11-27h]
 * 00000001C0046E94: sub     rsp, 90h
 * 00000001C0046E9B: mov     rbx, rcx
 * 00000001C0046E9E: mov     edi, 4
 * 00000001C0046EA3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046EAA: lea     esi, [rdi+27h]
 * 00000001C0046EAD: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0046EB4: jz      short loc_1C0046F27
 * 00000001C0046EB6: cmp     [rcx+29h], dil
 * 00000001C0046EBA: jb      short loc_1C0046F27
 * 00000001C0046EBC: and     qword ptr [r11-18h], 0
 * 00000001C0046EC1: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0046EC5: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0046ECC: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0046ED3: mov     rcx, [rcx+18h]
 * 00000001C0046ED7: mov     [r11-20h], rdi
 * 00000001C0046EDB: mov     [r11-28h], rdx
 * 00000001C0046EDF: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0046EE3: mov     [r11-30h], rdi
 * 00000001C0046EE7: mov     [r11-38h], rdx
 * 00000001C0046EEB: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0046EEF: mov     [r11-40h], rdi
 * 00000001C0046EF3: mov     [r11-48h], rdx
 * 00000001C0046EF7: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0046EFB: mov     [r11-50h], rdi
 * 00000001C0046EFF: mov     [r11-58h], rdx
 * 00000001C0046F03: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0046F07: mov     [r11-60h], rdi
 * 00000001C0046F0B: mov     [r11-68h], rdx
 * 00000001C0046F0F: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0046F13: mov     [r11-70h], rdi
 * 00000001C0046F17: mov     [r11-78h], rdx
 * 00000001C0046F1B: mov     edx, esi
 * 00000001C0046F1D: movzx   r9d, si
 * 00000001C0046F21: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046F27: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0046F30: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0046F34: mov     [rsp+90h+var_10], rdi
 * 00000001C0046F3C: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0046F43: mov     [rsp+90h+var_18], rax
 * 00000001C0046F48: mov     r8d, 0Ch
 * 00000001C0046F4E: mov     [rsp+90h+var_20], rdi
 * 00000001C0046F53: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0046F57: mov     [rsp+90h+var_28], rax
 * 00000001C0046F5C: mov     edx, edi
 * 00000001C0046F5E: mov     [rsp+90h+var_30], rdi
 * 00000001C0046F63: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0046F67: mov     [rsp+90h+var_38], rax
 * 00000001C0046F6C: mov     rcx, rbx
 * 00000001C0046F6F: mov     [rsp+90h+var_40], rdi
 * 00000001C0046F74: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0046F78: mov     [rsp+90h+var_48], rax
 * 00000001C0046F7D: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0046F81: mov     [rsp+90h+var_50], rdi
 * 00000001C0046F86: mov     [rsp+90h+var_58], rax
 * 00000001C0046F8B: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0046F8F: mov     [rsp+90h+var_60], rdi
 * 00000001C0046F94: mov     [rsp+90h+var_68], rax
 * 00000001C0046F99: mov     word ptr [rsp+90h+var_70], si
 * 00000001C0046F9E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046FA5: nop     dword ptr [rax+rax+00h]
 * 00000001C0046FAA: lea     r11, [rsp+90h+var_s0]
 * 00000001C0046FB2: mov     rbx, [r11+10h]
 * 00000001C0046FB6: mov     rsi, [r11+18h]
 * 00000001C0046FBA: mov     rdi, [r11+20h]
 * 00000001C0046FBE: mov     rsp, r11
 * 00000001C0046FC1: pop     rbp
 * 00000001C0046FC2: retn
 */
