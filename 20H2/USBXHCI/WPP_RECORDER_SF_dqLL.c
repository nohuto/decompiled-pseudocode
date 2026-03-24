/*
 * XREFs of WPP_RECORDER_SF_dqLL @ 0x1C0048700
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0046810 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqLL @ 0x1C0048700
 * Reason: Hex-Rays returned no pseudocode for 0x1C0048700
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0048700: mov     r11, rsp
 * 00000001C0048703: mov     [r11+8], rbx
 * 00000001C0048707: mov     [r11+10h], rbp
 * 00000001C004870B: push    rdi
 * 00000001C004870C: sub     rsp, 70h
 * 00000001C0048710: mov     rbx, rcx
 * 00000001C0048713: mov     ebp, 41h ; 'A'
 * 00000001C0048718: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004871F: lea     edi, [rbp-3Dh]
 * 00000001C0048722: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0048729: jz      short loc_1C0048789
 * 00000001C004872B: cmp     byte ptr [rcx+29h], 2
 * 00000001C004872F: jb      short loc_1C0048789
 * 00000001C0048731: and     qword ptr [r11-18h], 0
 * 00000001C0048736: lea     rdx, [r11+48h]
 * 00000001C004873A: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0048741: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0048748: mov     rcx, [rcx+18h]
 * 00000001C004874C: mov     [r11-20h], rdi
 * 00000001C0048750: mov     [r11-28h], rdx
 * 00000001C0048754: lea     rdx, [r11+40h]
 * 00000001C0048758: mov     [r11-30h], rdi
 * 00000001C004875C: mov     [r11-38h], rdx
 * 00000001C0048760: lea     rdx, [r11+38h]
 * 00000001C0048764: mov     qword ptr [r11-40h], 8
 * 00000001C004876C: mov     [r11-48h], rdx
 * 00000001C0048770: lea     rdx, [r11+30h]
 * 00000001C0048774: mov     [r11-50h], rdi
 * 00000001C0048778: mov     [r11-58h], rdx
 * 00000001C004877C: lea     edx, [rbp-16h]
 * 00000001C004877F: movzx   r9d, bp
 * 00000001C0048783: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0048789: and     [rsp+78h+var_10], 0
 * 00000001C004878F: lea     rax, [rsp+78h+arg_40]
 * 00000001C0048797: mov     [rsp+78h+var_18], rdi
 * 00000001C004879C: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C00487A3: mov     [rsp+78h+var_20], rax
 * 00000001C00487A8: mov     edx, 2
 * 00000001C00487AD: mov     [rsp+78h+var_28], rdi
 * 00000001C00487B2: lea     rax, [rsp+78h+arg_38]
 * 00000001C00487BA: mov     [rsp+78h+var_30], rax
 * 00000001C00487BF: mov     rcx, rbx
 * 00000001C00487C2: mov     [rsp+78h+var_38], 8
 * 00000001C00487CB: lea     rax, [rsp+78h+arg_30]
 * 00000001C00487D3: mov     [rsp+78h+var_40], rax
 * 00000001C00487D8: lea     r8d, [rdx+0Ah]
 * 00000001C00487DC: lea     rax, [rsp+78h+arg_28]
 * 00000001C00487E4: mov     [rsp+78h+var_48], rdi
 * 00000001C00487E9: mov     [rsp+78h+var_50], rax
 * 00000001C00487EE: mov     [rsp+78h+var_58], bp
 * 00000001C00487F3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00487FA: nop     dword ptr [rax+rax+00h]
 * 00000001C00487FF: lea     r11, [rsp+78h+var_8]
 * 00000001C0048804: mov     rbx, [r11+10h]
 * 00000001C0048808: mov     rbp, [r11+18h]
 * 00000001C004880C: mov     rsp, r11
 * 00000001C004880F: pop     rdi
 * 00000001C0048810: retn
 */
