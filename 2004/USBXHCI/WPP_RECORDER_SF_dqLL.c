/*
 * XREFs of WPP_RECORDER_SF_dqLL @ 0x1C0047200
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0045320 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqLL @ 0x1C0047200
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047200
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047200: mov     r11, rsp
 * 00000001C0047203: mov     [r11+8], rbx
 * 00000001C0047207: mov     [r11+10h], rbp
 * 00000001C004720B: push    rdi
 * 00000001C004720C: sub     rsp, 70h
 * 00000001C0047210: mov     rbx, rcx
 * 00000001C0047213: mov     ebp, 41h ; 'A'
 * 00000001C0047218: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004721F: lea     edi, [rbp-3Dh]
 * 00000001C0047222: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047229: jz      short loc_1C0047289
 * 00000001C004722B: cmp     byte ptr [rcx+29h], 2
 * 00000001C004722F: jb      short loc_1C0047289
 * 00000001C0047231: and     qword ptr [r11-18h], 0
 * 00000001C0047236: lea     rdx, [r11+48h]
 * 00000001C004723A: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0047241: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0047248: mov     rcx, [rcx+18h]
 * 00000001C004724C: mov     [r11-20h], rdi
 * 00000001C0047250: mov     [r11-28h], rdx
 * 00000001C0047254: lea     rdx, [r11+40h]
 * 00000001C0047258: mov     [r11-30h], rdi
 * 00000001C004725C: mov     [r11-38h], rdx
 * 00000001C0047260: lea     rdx, [r11+38h]
 * 00000001C0047264: mov     qword ptr [r11-40h], 8
 * 00000001C004726C: mov     [r11-48h], rdx
 * 00000001C0047270: lea     rdx, [r11+30h]
 * 00000001C0047274: mov     [r11-50h], rdi
 * 00000001C0047278: mov     [r11-58h], rdx
 * 00000001C004727C: lea     edx, [rbp-16h]
 * 00000001C004727F: movzx   r9d, bp
 * 00000001C0047283: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047289: and     [rsp+78h+var_10], 0
 * 00000001C004728F: lea     rax, [rsp+78h+arg_40]
 * 00000001C0047297: mov     [rsp+78h+var_18], rdi
 * 00000001C004729C: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C00472A3: mov     [rsp+78h+var_20], rax
 * 00000001C00472A8: mov     edx, 2
 * 00000001C00472AD: mov     [rsp+78h+var_28], rdi
 * 00000001C00472B2: lea     rax, [rsp+78h+arg_38]
 * 00000001C00472BA: mov     [rsp+78h+var_30], rax
 * 00000001C00472BF: mov     rcx, rbx
 * 00000001C00472C2: mov     [rsp+78h+var_38], 8
 * 00000001C00472CB: lea     rax, [rsp+78h+arg_30]
 * 00000001C00472D3: mov     [rsp+78h+var_40], rax
 * 00000001C00472D8: lea     r8d, [rdx+0Ah]
 * 00000001C00472DC: lea     rax, [rsp+78h+arg_28]
 * 00000001C00472E4: mov     [rsp+78h+var_48], rdi
 * 00000001C00472E9: mov     [rsp+78h+var_50], rax
 * 00000001C00472EE: mov     [rsp+78h+var_58], bp
 * 00000001C00472F3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00472FA: nop     dword ptr [rax+rax+00h]
 * 00000001C00472FF: lea     r11, [rsp+78h+var_8]
 * 00000001C0047304: mov     rbx, [r11+10h]
 * 00000001C0047308: mov     rbp, [r11+18h]
 * 00000001C004730C: mov     rsp, r11
 * 00000001C004730F: pop     rdi
 * 00000001C0047310: retn
 */
