/*
 * XREFs of WPP_RECORDER_SF_dLL @ 0x1C0046D90
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0045320 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dLL @ 0x1C0046D90
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046D90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046D90: mov     r11, rsp
 * 00000001C0046D93: mov     [r11+8], rbx
 * 00000001C0046D97: mov     [r11+10h], rsi
 * 00000001C0046D9B: push    rdi
 * 00000001C0046D9C: sub     rsp, 60h
 * 00000001C0046DA0: mov     rbx, rcx
 * 00000001C0046DA3: mov     esi, 40h ; '@'
 * 00000001C0046DA8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046DAF: lea     edi, [rsi-3Ch]
 * 00000001C0046DB2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0046DB9: jz      short loc_1C0046E09
 * 00000001C0046DBB: cmp     byte ptr [rcx+29h], 2
 * 00000001C0046DBF: jb      short loc_1C0046E09
 * 00000001C0046DC1: and     qword ptr [r11-18h], 0
 * 00000001C0046DC6: lea     rdx, [r11+40h]
 * 00000001C0046DCA: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0046DD1: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0046DD8: mov     rcx, [rcx+18h]
 * 00000001C0046DDC: mov     [r11-20h], rdi
 * 00000001C0046DE0: mov     [r11-28h], rdx
 * 00000001C0046DE4: lea     rdx, [r11+38h]
 * 00000001C0046DE8: mov     [r11-30h], rdi
 * 00000001C0046DEC: mov     [r11-38h], rdx
 * 00000001C0046DF0: lea     rdx, [r11+30h]
 * 00000001C0046DF4: mov     [r11-40h], rdi
 * 00000001C0046DF8: mov     [r11-48h], rdx
 * 00000001C0046DFC: lea     edx, [rsi-15h]
 * 00000001C0046DFF: movzx   r9d, si
 * 00000001C0046E03: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046E09: and     [rsp+68h+var_10], 0
 * 00000001C0046E0F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0046E17: mov     [rsp+68h+var_18], rdi
 * 00000001C0046E1C: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0046E23: mov     [rsp+68h+var_20], rax
 * 00000001C0046E28: mov     edx, 2
 * 00000001C0046E2D: mov     [rsp+68h+var_28], rdi
 * 00000001C0046E32: lea     rax, [rsp+68h+arg_30]
 * 00000001C0046E3A: mov     [rsp+68h+var_30], rax
 * 00000001C0046E3F: mov     rcx, rbx
 * 00000001C0046E42: lea     rax, [rsp+68h+arg_28]
 * 00000001C0046E4A: mov     [rsp+68h+var_38], rdi
 * 00000001C0046E4F: mov     [rsp+68h+var_40], rax
 * 00000001C0046E54: lea     r8d, [rdx+0Ah]
 * 00000001C0046E58: mov     [rsp+68h+var_48], si
 * 00000001C0046E5D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046E64: nop     dword ptr [rax+rax+00h]
 * 00000001C0046E69: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0046E6E: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0046E73: add     rsp, 60h
 * 00000001C0046E77: pop     rdi
 * 00000001C0046E78: retn
 */
