/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0010224
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005BA4 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000A1DC (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C000E070 (UsbDevice_UcxEvtAddress.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000EC04 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_EnableCompletion @ 0x1C000EEE0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F010 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C000F9F0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UpdateCompletion @ 0x1C00179B0 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_ConfigureEndpointCompletion @ 0x1C0045050 (UsbDevice_ConfigureEndpointCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0045320 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045554 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0045890 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0046A60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dq @ 0x1C0010224
 * Reason: Hex-Rays returned no pseudocode for 0x1C0010224
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0010224: mov     [rsp+arg_0], rbx
 * 00000001C0010229: mov     [rsp+arg_8], rbp
 * 00000001C001022E: mov     [rsp+arg_10], rsi
 * 00000001C0010233: push    rdi
 * 00000001C0010234: push    r14
 * 00000001C0010236: push    r15
 * 00000001C0010238: sub     rsp, 50h
 * 00000001C001023C: mov     r14d, r8d
 * 00000001C001023F: mov     r15, rcx
 * 00000001C0010242: mov     edi, r8d
 * 00000001C0010245: shr     rdi, 10h
 * 00000001C0010249: movzx   esi, dl
 * 00000001C001024C: lea     ebx, [r14-1]
 * 00000001C0010250: movzx   ebp, r9w
 * 00000001C0010254: mov     r10d, ebx
 * 00000001C0010257: and     ebx, 1Fh
 * 00000001C001025A: shr     r10, 5
 * 00000001C001025E: lea     rax, [rdi+rdi*4]
 * 00000001C0010262: and     r10d, 7FFh
 * 00000001C0010269: mov     edx, ebx
 * 00000001C001026B: mov     ebx, 8
 * 00000001C0010270: lea     r11, [r10+rax*4]
 * 00000001C0010274: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001027B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0010280: bt      eax, edx
 * 00000001C0010283: jb      loc_1C0023B9A
 * 00000001C0010289: and     [rsp+68h+var_20], 0
 * 00000001C001028F: lea     rax, [rsp+68h+arg_30]
 * 00000001C0010297: mov     r9, [rsp+68h+arg_20]
 * 00000001C001029F: mov     r8d, r14d
 * 00000001C00102A2: mov     [rsp+68h+var_28], rbx
 * 00000001C00102A7: mov     edx, esi
 * 00000001C00102A9: mov     [rsp+68h+var_30], rax
 * 00000001C00102AE: mov     rcx, r15
 * 00000001C00102B1: lea     rax, [rsp+68h+arg_28]
 * 00000001C00102B9: mov     [rsp+68h+var_38], 4
 * 00000001C00102C2: mov     [rsp+68h+var_40], rax
 * 00000001C00102C7: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00102CC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00102D3: nop     dword ptr [rax+rax+00h]
 * 00000001C00102D8: lea     r11, [rsp+68h+var_18]
 * 00000001C00102DD: mov     rbx, [r11+20h]
 * 00000001C00102E1: mov     rbp, [r11+28h]
 * 00000001C00102E5: mov     rsi, [r11+30h]
 * 00000001C00102E9: mov     rsp, r11
 * 00000001C00102EC: pop     r15
 * 00000001C00102EE: pop     r14
 * 00000001C00102F0: pop     rdi
 * 00000001C00102F1: retn
 * 00000001C0023B9A: lea     rcx, [rdi+rdi*4]
 * 00000001C0023B9E: add     rcx, rcx
 * 00000001C0023BA1: cmp     [r10+rcx*8+29h], sil
 * 00000001C0023BA6: jb      loc_1C0010289
 * 00000001C0023BAC: and     [rsp+68h+var_28], 0
 * 00000001C0023BB2: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0023BBA: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0023BC1: mov     r9d, ebp
 * 00000001C0023BC4: mov     r8, [rsp+68h+arg_20]
 * 00000001C0023BCC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0023BD1: mov     [rsp+68h+var_30], rbx
 * 00000001C0023BD6: mov     [rsp+68h+var_38], rdx
 * 00000001C0023BDB: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0023BE3: mov     [rsp+68h+var_40], 4
 * 00000001C0023BEC: mov     [rsp+68h+var_48], rdx
 * 00000001C0023BF1: mov     edx, 2Bh ; '+'
 * 00000001C0023BF6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0023BFC: nop
 * 00000001C0023BFD: jmp     loc_1C0010289
 */
