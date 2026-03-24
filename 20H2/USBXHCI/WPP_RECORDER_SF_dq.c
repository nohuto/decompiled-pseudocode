/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0010CB0
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005C8C (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000AA1C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C000EB00 (UsbDevice_UcxEvtAddress.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000F6C4 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F9A0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010610 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0018CB0 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_ConfigureEndpointCompletion @ 0x1C0046540 (UsbDevice_ConfigureEndpointCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0046810 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0046A44 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0046D80 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0047F60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dq @ 0x1C0010CB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0010CB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0010CB0: mov     [rsp+arg_0], rbx
 * 00000001C0010CB5: mov     [rsp+arg_8], rbp
 * 00000001C0010CBA: mov     [rsp+arg_10], rsi
 * 00000001C0010CBF: push    rdi
 * 00000001C0010CC0: push    r14
 * 00000001C0010CC2: push    r15
 * 00000001C0010CC4: sub     rsp, 50h
 * 00000001C0010CC8: mov     r14d, r8d
 * 00000001C0010CCB: mov     r15, rcx
 * 00000001C0010CCE: mov     edi, r8d
 * 00000001C0010CD1: shr     rdi, 10h
 * 00000001C0010CD5: movzx   esi, dl
 * 00000001C0010CD8: lea     ebx, [r14-1]
 * 00000001C0010CDC: movzx   ebp, r9w
 * 00000001C0010CE0: mov     r10d, ebx
 * 00000001C0010CE3: and     ebx, 1Fh
 * 00000001C0010CE6: shr     r10, 5
 * 00000001C0010CEA: lea     rax, [rdi+rdi*4]
 * 00000001C0010CEE: and     r10d, 7FFh
 * 00000001C0010CF5: mov     edx, ebx
 * 00000001C0010CF7: mov     ebx, 8
 * 00000001C0010CFC: lea     r11, [r10+rax*4]
 * 00000001C0010D00: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0010D07: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0010D0C: bt      eax, edx
 * 00000001C0010D0F: jb      loc_1C0025CFC
 * 00000001C0010D15: and     [rsp+68h+var_20], 0
 * 00000001C0010D1B: lea     rax, [rsp+68h+arg_30]
 * 00000001C0010D23: mov     r9, [rsp+68h+arg_20]
 * 00000001C0010D2B: mov     r8d, r14d
 * 00000001C0010D2E: mov     [rsp+68h+var_28], rbx
 * 00000001C0010D33: mov     edx, esi
 * 00000001C0010D35: mov     [rsp+68h+var_30], rax
 * 00000001C0010D3A: mov     rcx, r15
 * 00000001C0010D3D: lea     rax, [rsp+68h+arg_28]
 * 00000001C0010D45: mov     [rsp+68h+var_38], 4
 * 00000001C0010D4E: mov     [rsp+68h+var_40], rax
 * 00000001C0010D53: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0010D58: call    cs:__imp_WppAutoLogTrace
 * 00000001C0010D5F: nop     dword ptr [rax+rax+00h]
 * 00000001C0010D64: lea     r11, [rsp+68h+var_18]
 * 00000001C0010D69: mov     rbx, [r11+20h]
 * 00000001C0010D6D: mov     rbp, [r11+28h]
 * 00000001C0010D71: mov     rsi, [r11+30h]
 * 00000001C0010D75: mov     rsp, r11
 * 00000001C0010D78: pop     r15
 * 00000001C0010D7A: pop     r14
 * 00000001C0010D7C: pop     rdi
 * 00000001C0010D7D: retn
 * 00000001C0025CFC: lea     rcx, [rdi+rdi*4]
 * 00000001C0025D00: add     rcx, rcx
 * 00000001C0025D03: cmp     [r10+rcx*8+29h], sil
 * 00000001C0025D08: jb      loc_1C0010D15
 * 00000001C0025D0E: and     [rsp+68h+var_28], 0
 * 00000001C0025D14: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0025D1C: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0025D23: mov     r9d, ebp
 * 00000001C0025D26: mov     r8, [rsp+68h+arg_20]
 * 00000001C0025D2E: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0025D33: mov     [rsp+68h+var_30], rbx
 * 00000001C0025D38: mov     [rsp+68h+var_38], rdx
 * 00000001C0025D3D: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0025D45: mov     [rsp+68h+var_40], 4
 * 00000001C0025D4E: mov     [rsp+68h+var_48], rdx
 * 00000001C0025D53: mov     edx, 2Bh ; '+'
 * 00000001C0025D58: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0025D5E: nop
 * 00000001C0025D5F: jmp     loc_1C0010D15
 */
