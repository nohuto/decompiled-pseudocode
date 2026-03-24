/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x1C0047430
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C00459A0 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqq @ 0x1C0047430
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047430
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047430: mov     r11, rsp
 * 00000001C0047433: mov     [r11+8], rbx
 * 00000001C0047437: mov     [r11+10h], rbp
 * 00000001C004743B: push    rsi
 * 00000001C004743C: sub     rsp, 70h
 * 00000001C0047440: mov     rbx, rcx
 * 00000001C0047443: mov     ebp, 0Dh
 * 00000001C0047448: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004744F: lea     esi, [rbp-5]
 * 00000001C0047452: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047459: jz      short loc_1C00474B9
 * 00000001C004745B: cmp     byte ptr [rcx+29h], 4
 * 00000001C004745F: jb      short loc_1C00474B9
 * 00000001C0047461: and     qword ptr [r11-18h], 0
 * 00000001C0047466: lea     rdx, [r11+48h]
 * 00000001C004746A: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0047471: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0047478: mov     rcx, [rcx+18h]
 * 00000001C004747C: mov     [r11-20h], rsi
 * 00000001C0047480: mov     [r11-28h], rdx
 * 00000001C0047484: lea     rdx, [r11+40h]
 * 00000001C0047488: mov     [r11-30h], rsi
 * 00000001C004748C: mov     [r11-38h], rdx
 * 00000001C0047490: lea     rdx, [r11+38h]
 * 00000001C0047494: mov     [r11-40h], rsi
 * 00000001C0047498: mov     [r11-48h], rdx
 * 00000001C004749C: lea     rdx, [r11+30h]
 * 00000001C00474A0: mov     qword ptr [r11-50h], 4
 * 00000001C00474A8: mov     [r11-58h], rdx
 * 00000001C00474AC: lea     edx, [rbp+1Eh]
 * 00000001C00474AF: movzx   r9d, bp
 * 00000001C00474B3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00474B9: and     [rsp+78h+var_10], 0
 * 00000001C00474BF: lea     rax, [rsp+78h+arg_40]
 * 00000001C00474C7: mov     [rsp+78h+var_18], rsi
 * 00000001C00474CC: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C00474D3: mov     [rsp+78h+var_20], rax
 * 00000001C00474D8: mov     edx, 4
 * 00000001C00474DD: mov     [rsp+78h+var_28], rsi
 * 00000001C00474E2: lea     rax, [rsp+78h+arg_38]
 * 00000001C00474EA: mov     [rsp+78h+var_30], rax
 * 00000001C00474EF: mov     rcx, rbx
 * 00000001C00474F2: mov     [rsp+78h+var_38], rsi
 * 00000001C00474F7: lea     rax, [rsp+78h+arg_30]
 * 00000001C00474FF: mov     [rsp+78h+var_40], rax
 * 00000001C0047504: lea     r8d, [rdx+8]
 * 00000001C0047508: lea     rax, [rsp+78h+arg_28]
 * 00000001C0047510: mov     [rsp+78h+var_48], 4
 * 00000001C0047519: mov     [rsp+78h+var_50], rax
 * 00000001C004751E: mov     [rsp+78h+var_58], bp
 * 00000001C0047523: call    cs:__imp_WppAutoLogTrace
 * 00000001C004752A: nop     dword ptr [rax+rax+00h]
 * 00000001C004752F: lea     r11, [rsp+78h+var_8]
 * 00000001C0047534: mov     rbx, [r11+10h]
 * 00000001C0047538: mov     rbp, [r11+18h]
 * 00000001C004753C: mov     rsp, r11
 * 00000001C004753F: pop     rsi
 * 00000001C0047540: retn
 */
