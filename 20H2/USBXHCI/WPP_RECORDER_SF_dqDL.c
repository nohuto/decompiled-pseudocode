/*
 * XREFs of WPP_RECORDER_SF_dqdL @ 0x1C0048818
 * Callers:
 *     UsbDevice_SetAddressCompletion @ 0x1C000F9A0 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqdL @ 0x1C0048818
 * Reason: Hex-Rays returned no pseudocode for 0x1C0048818
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0048818: mov     r11, rsp
 * 00000001C004881B: mov     [r11+8], rbx
 * 00000001C004881F: mov     [r11+10h], rbp
 * 00000001C0048823: push    rdi
 * 00000001C0048824: sub     rsp, 70h
 * 00000001C0048828: mov     rbx, rcx
 * 00000001C004882B: mov     ebp, 19h
 * 00000001C0048830: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0048837: lea     edi, [rbp-15h]
 * 00000001C004883A: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0048841: jz      short loc_1C00488A1
 * 00000001C0048843: cmp     byte ptr [rcx+29h], 2
 * 00000001C0048847: jb      short loc_1C00488A1
 * 00000001C0048849: and     qword ptr [r11-18h], 0
 * 00000001C004884E: lea     rdx, [r11+48h]
 * 00000001C0048852: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0048859: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0048860: mov     rcx, [rcx+18h]
 * 00000001C0048864: mov     [r11-20h], rdi
 * 00000001C0048868: mov     [r11-28h], rdx
 * 00000001C004886C: lea     rdx, [r11+40h]
 * 00000001C0048870: mov     [r11-30h], rdi
 * 00000001C0048874: mov     [r11-38h], rdx
 * 00000001C0048878: lea     rdx, [r11+38h]
 * 00000001C004887C: mov     qword ptr [r11-40h], 8
 * 00000001C0048884: mov     [r11-48h], rdx
 * 00000001C0048888: lea     rdx, [r11+30h]
 * 00000001C004888C: mov     [r11-50h], rdi
 * 00000001C0048890: mov     [r11-58h], rdx
 * 00000001C0048894: lea     edx, [rbp+12h]
 * 00000001C0048897: movzx   r9d, bp
 * 00000001C004889B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00488A1: and     [rsp+78h+var_10], 0
 * 00000001C00488A7: lea     rax, [rsp+78h+arg_40]
 * 00000001C00488AF: mov     [rsp+78h+var_18], rdi
 * 00000001C00488B4: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C00488BB: mov     [rsp+78h+var_20], rax
 * 00000001C00488C0: mov     edx, 2
 * 00000001C00488C5: mov     [rsp+78h+var_28], rdi
 * 00000001C00488CA: lea     rax, [rsp+78h+arg_38]
 * 00000001C00488D2: mov     [rsp+78h+var_30], rax
 * 00000001C00488D7: mov     rcx, rbx
 * 00000001C00488DA: mov     [rsp+78h+var_38], 8
 * 00000001C00488E3: lea     rax, [rsp+78h+arg_30]
 * 00000001C00488EB: mov     [rsp+78h+var_40], rax
 * 00000001C00488F0: lea     r8d, [rdx+0Ah]
 * 00000001C00488F4: lea     rax, [rsp+78h+arg_28]
 * 00000001C00488FC: mov     [rsp+78h+var_48], rdi
 * 00000001C0048901: mov     [rsp+78h+var_50], rax
 * 00000001C0048906: mov     [rsp+78h+var_58], bp
 * 00000001C004890B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0048912: nop     dword ptr [rax+rax+00h]
 * 00000001C0048917: lea     r11, [rsp+78h+var_8]
 * 00000001C004891C: mov     rbx, [r11+10h]
 * 00000001C0048920: mov     rbp, [r11+18h]
 * 00000001C0048924: mov     rsp, r11
 * 00000001C0048927: pop     rdi
 * 00000001C0048928: retn
 */
