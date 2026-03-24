/*
 * XREFs of WPP_RECORDER_SF_dqdL @ 0x1C0047318
 * Callers:
 *     UsbDevice_SetAddressCompletion @ 0x1C000F010 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqdL @ 0x1C0047318
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047318
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047318: mov     r11, rsp
 * 00000001C004731B: mov     [r11+8], rbx
 * 00000001C004731F: mov     [r11+10h], rbp
 * 00000001C0047323: push    rdi
 * 00000001C0047324: sub     rsp, 70h
 * 00000001C0047328: mov     rbx, rcx
 * 00000001C004732B: mov     ebp, 19h
 * 00000001C0047330: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047337: lea     edi, [rbp-15h]
 * 00000001C004733A: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047341: jz      short loc_1C00473A1
 * 00000001C0047343: cmp     byte ptr [rcx+29h], 2
 * 00000001C0047347: jb      short loc_1C00473A1
 * 00000001C0047349: and     qword ptr [r11-18h], 0
 * 00000001C004734E: lea     rdx, [r11+48h]
 * 00000001C0047352: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0047359: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0047360: mov     rcx, [rcx+18h]
 * 00000001C0047364: mov     [r11-20h], rdi
 * 00000001C0047368: mov     [r11-28h], rdx
 * 00000001C004736C: lea     rdx, [r11+40h]
 * 00000001C0047370: mov     [r11-30h], rdi
 * 00000001C0047374: mov     [r11-38h], rdx
 * 00000001C0047378: lea     rdx, [r11+38h]
 * 00000001C004737C: mov     qword ptr [r11-40h], 8
 * 00000001C0047384: mov     [r11-48h], rdx
 * 00000001C0047388: lea     rdx, [r11+30h]
 * 00000001C004738C: mov     [r11-50h], rdi
 * 00000001C0047390: mov     [r11-58h], rdx
 * 00000001C0047394: lea     edx, [rbp+12h]
 * 00000001C0047397: movzx   r9d, bp
 * 00000001C004739B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00473A1: and     [rsp+78h+var_10], 0
 * 00000001C00473A7: lea     rax, [rsp+78h+arg_40]
 * 00000001C00473AF: mov     [rsp+78h+var_18], rdi
 * 00000001C00473B4: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C00473BB: mov     [rsp+78h+var_20], rax
 * 00000001C00473C0: mov     edx, 2
 * 00000001C00473C5: mov     [rsp+78h+var_28], rdi
 * 00000001C00473CA: lea     rax, [rsp+78h+arg_38]
 * 00000001C00473D2: mov     [rsp+78h+var_30], rax
 * 00000001C00473D7: mov     rcx, rbx
 * 00000001C00473DA: mov     [rsp+78h+var_38], 8
 * 00000001C00473E3: lea     rax, [rsp+78h+arg_30]
 * 00000001C00473EB: mov     [rsp+78h+var_40], rax
 * 00000001C00473F0: lea     r8d, [rdx+0Ah]
 * 00000001C00473F4: lea     rax, [rsp+78h+arg_28]
 * 00000001C00473FC: mov     [rsp+78h+var_48], rdi
 * 00000001C0047401: mov     [rsp+78h+var_50], rax
 * 00000001C0047406: mov     [rsp+78h+var_58], bp
 * 00000001C004740B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047412: nop     dword ptr [rax+rax+00h]
 * 00000001C0047417: lea     r11, [rsp+78h+var_8]
 * 00000001C004741C: mov     rbx, [r11+10h]
 * 00000001C0047420: mov     rbp, [r11+18h]
 * 00000001C0047424: mov     rsp, r11
 * 00000001C0047427: pop     rdi
 * 00000001C0047428: retn
 */
