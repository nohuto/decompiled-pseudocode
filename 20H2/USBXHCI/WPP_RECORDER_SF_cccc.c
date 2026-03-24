/*
 * XREFs of WPP_RECORDER_SF_cccc @ 0x1C003F1FC
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C0070600 (RootHub_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_cccc @ 0x1C003F1FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F1FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F1FC: mov     r11, rsp
 * 00000001C003F1FF: mov     [r11+8], rbx
 * 00000001C003F203: mov     [r11+10h], rsi
 * 00000001C003F207: push    rdi
 * 00000001C003F208: sub     rsp, 70h
 * 00000001C003F20C: mov     rbx, rcx
 * 00000001C003F20F: mov     esi, 19h
 * 00000001C003F214: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003F21B: lea     edi, [rsi-18h]
 * 00000001C003F21E: test    dword ptr [rcx+2Ch], 400h
 * 00000001C003F225: jz      short loc_1C003F281
 * 00000001C003F227: cmp     byte ptr [rcx+29h], 2
 * 00000001C003F22B: jb      short loc_1C003F281
 * 00000001C003F22D: and     qword ptr [r11-18h], 0
 * 00000001C003F232: lea     rdx, [r11+48h]
 * 00000001C003F236: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003F23D: lea     r8, WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids
 * 00000001C003F244: mov     rcx, [rcx+18h]
 * 00000001C003F248: mov     [r11-20h], rdi
 * 00000001C003F24C: mov     [r11-28h], rdx
 * 00000001C003F250: lea     rdx, [r11+40h]
 * 00000001C003F254: mov     [r11-30h], rdi
 * 00000001C003F258: mov     [r11-38h], rdx
 * 00000001C003F25C: lea     rdx, [r11+38h]
 * 00000001C003F260: mov     [r11-40h], rdi
 * 00000001C003F264: mov     [r11-48h], rdx
 * 00000001C003F268: lea     rdx, [r11+30h]
 * 00000001C003F26C: mov     [r11-50h], rdi
 * 00000001C003F270: mov     [r11-58h], rdx
 * 00000001C003F274: lea     edx, [rsi+12h]
 * 00000001C003F277: movzx   r9d, si
 * 00000001C003F27B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003F281: and     [rsp+78h+var_10], 0
 * 00000001C003F287: lea     rax, [rsp+78h+arg_40]
 * 00000001C003F28F: mov     [rsp+78h+var_18], rdi
 * 00000001C003F294: lea     r9, WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids
 * 00000001C003F29B: mov     [rsp+78h+var_20], rax
 * 00000001C003F2A0: mov     edx, 2
 * 00000001C003F2A5: mov     [rsp+78h+var_28], rdi
 * 00000001C003F2AA: lea     rax, [rsp+78h+arg_38]
 * 00000001C003F2B2: mov     [rsp+78h+var_30], rax
 * 00000001C003F2B7: mov     rcx, rbx
 * 00000001C003F2BA: mov     [rsp+78h+var_38], rdi
 * 00000001C003F2BF: lea     rax, [rsp+78h+arg_30]
 * 00000001C003F2C7: mov     [rsp+78h+var_40], rax
 * 00000001C003F2CC: lea     r8d, [rdx+9]
 * 00000001C003F2D0: lea     rax, [rsp+78h+arg_28]
 * 00000001C003F2D8: mov     [rsp+78h+var_48], rdi
 * 00000001C003F2DD: mov     [rsp+78h+var_50], rax
 * 00000001C003F2E2: mov     [rsp+78h+var_58], si
 * 00000001C003F2E7: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F2EE: nop     dword ptr [rax+rax+00h]
 * 00000001C003F2F3: lea     r11, [rsp+78h+var_8]
 * 00000001C003F2F8: mov     rbx, [r11+10h]
 * 00000001C003F2FC: mov     rsi, [r11+18h]
 * 00000001C003F300: mov     rsp, r11
 * 00000001C003F303: pop     rdi
 * 00000001C003F304: retn
 */
