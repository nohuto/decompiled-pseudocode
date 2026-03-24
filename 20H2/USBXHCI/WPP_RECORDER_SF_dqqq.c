/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x1C0048930
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0046E90 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqq @ 0x1C0048930
 * Reason: Hex-Rays returned no pseudocode for 0x1C0048930
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0048930: mov     r11, rsp
 * 00000001C0048933: mov     [r11+8], rbx
 * 00000001C0048937: mov     [r11+10h], rbp
 * 00000001C004893B: push    rsi
 * 00000001C004893C: sub     rsp, 70h
 * 00000001C0048940: mov     rbx, rcx
 * 00000001C0048943: mov     ebp, 0Dh
 * 00000001C0048948: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004894F: lea     esi, [rbp-5]
 * 00000001C0048952: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0048959: jz      short loc_1C00489B9
 * 00000001C004895B: cmp     byte ptr [rcx+29h], 4
 * 00000001C004895F: jb      short loc_1C00489B9
 * 00000001C0048961: and     qword ptr [r11-18h], 0
 * 00000001C0048966: lea     rdx, [r11+48h]
 * 00000001C004896A: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0048971: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0048978: mov     rcx, [rcx+18h]
 * 00000001C004897C: mov     [r11-20h], rsi
 * 00000001C0048980: mov     [r11-28h], rdx
 * 00000001C0048984: lea     rdx, [r11+40h]
 * 00000001C0048988: mov     [r11-30h], rsi
 * 00000001C004898C: mov     [r11-38h], rdx
 * 00000001C0048990: lea     rdx, [r11+38h]
 * 00000001C0048994: mov     [r11-40h], rsi
 * 00000001C0048998: mov     [r11-48h], rdx
 * 00000001C004899C: lea     rdx, [r11+30h]
 * 00000001C00489A0: mov     qword ptr [r11-50h], 4
 * 00000001C00489A8: mov     [r11-58h], rdx
 * 00000001C00489AC: lea     edx, [rbp+1Eh]
 * 00000001C00489AF: movzx   r9d, bp
 * 00000001C00489B3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00489B9: and     [rsp+78h+var_10], 0
 * 00000001C00489BF: lea     rax, [rsp+78h+arg_40]
 * 00000001C00489C7: mov     [rsp+78h+var_18], rsi
 * 00000001C00489CC: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C00489D3: mov     [rsp+78h+var_20], rax
 * 00000001C00489D8: mov     edx, 4
 * 00000001C00489DD: mov     [rsp+78h+var_28], rsi
 * 00000001C00489E2: lea     rax, [rsp+78h+arg_38]
 * 00000001C00489EA: mov     [rsp+78h+var_30], rax
 * 00000001C00489EF: mov     rcx, rbx
 * 00000001C00489F2: mov     [rsp+78h+var_38], rsi
 * 00000001C00489F7: lea     rax, [rsp+78h+arg_30]
 * 00000001C00489FF: mov     [rsp+78h+var_40], rax
 * 00000001C0048A04: lea     r8d, [rdx+8]
 * 00000001C0048A08: lea     rax, [rsp+78h+arg_28]
 * 00000001C0048A10: mov     [rsp+78h+var_48], 4
 * 00000001C0048A19: mov     [rsp+78h+var_50], rax
 * 00000001C0048A1E: mov     [rsp+78h+var_58], bp
 * 00000001C0048A23: call    cs:__imp_WppAutoLogTrace
 * 00000001C0048A2A: nop     dword ptr [rax+rax+00h]
 * 00000001C0048A2F: lea     r11, [rsp+78h+var_8]
 * 00000001C0048A34: mov     rbx, [r11+10h]
 * 00000001C0048A38: mov     rbp, [r11+18h]
 * 00000001C0048A3C: mov     rsp, r11
 * 00000001C0048A3F: pop     rsi
 * 00000001C0048A40: retn
 */
