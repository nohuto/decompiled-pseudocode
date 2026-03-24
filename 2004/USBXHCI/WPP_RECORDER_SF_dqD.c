/*
 * XREFs of WPP_RECORDER_SF_dqd @ 0x1C001825C
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0033870 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0033EB0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C004527C (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C006D000 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqd @ 0x1C001825C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001825C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001825C: mov     [rsp+arg_0], rbx
 * 00000001C0018261: mov     [rsp+arg_8], rbp
 * 00000001C0018266: mov     [rsp+arg_10], rsi
 * 00000001C001826B: push    rdi
 * 00000001C001826C: push    r14
 * 00000001C001826E: push    r15
 * 00000001C0018270: sub     rsp, 60h
 * 00000001C0018274: mov     r14d, r8d
 * 00000001C0018277: mov     r15, rcx
 * 00000001C001827A: mov     edi, r8d
 * 00000001C001827D: shr     rdi, 10h
 * 00000001C0018281: movzx   esi, dl
 * 00000001C0018284: lea     ebx, [r14-1]
 * 00000001C0018288: movzx   ebp, r9w
 * 00000001C001828C: mov     r10d, ebx
 * 00000001C001828F: and     ebx, 1Fh
 * 00000001C0018292: shr     r10, 5
 * 00000001C0018296: lea     rax, [rdi+rdi*4]
 * 00000001C001829A: and     r10d, 7FFh
 * 00000001C00182A1: mov     edx, ebx
 * 00000001C00182A3: mov     ebx, 4
 * 00000001C00182A8: lea     r11, [r10+rax*4]
 * 00000001C00182AC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00182B3: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00182B8: bt      eax, edx
 * 00000001C00182BB: jb      loc_1C002CD8E
 * 00000001C00182C1: and     [rsp+78h+var_20], 0
 * 00000001C00182C7: lea     rax, [rsp+78h+arg_38]
 * 00000001C00182CF: mov     r9, [rsp+78h+arg_20]
 * 00000001C00182D7: mov     r8d, r14d
 * 00000001C00182DA: mov     [rsp+78h+var_28], rbx
 * 00000001C00182DF: mov     edx, esi
 * 00000001C00182E1: mov     [rsp+78h+var_30], rax
 * 00000001C00182E6: mov     rcx, r15
 * 00000001C00182E9: mov     [rsp+78h+var_38], 8
 * 00000001C00182F2: lea     rax, [rsp+78h+arg_30]
 * 00000001C00182FA: mov     [rsp+78h+var_40], rax
 * 00000001C00182FF: lea     rax, [rsp+78h+arg_28]
 * 00000001C0018307: mov     [rsp+78h+var_48], rbx
 * 00000001C001830C: mov     [rsp+78h+var_50], rax
 * 00000001C0018311: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0018316: call    cs:__imp_WppAutoLogTrace
 * 00000001C001831D: nop     dword ptr [rax+rax+00h]
 * 00000001C0018322: lea     r11, [rsp+78h+var_18]
 * 00000001C0018327: mov     rbx, [r11+20h]
 * 00000001C001832B: mov     rbp, [r11+28h]
 * 00000001C001832F: mov     rsi, [r11+30h]
 * 00000001C0018333: mov     rsp, r11
 * 00000001C0018336: pop     r15
 * 00000001C0018338: pop     r14
 * 00000001C001833A: pop     rdi
 * 00000001C001833B: retn
 * 00000001C002CD8E: lea     rcx, [rdi+rdi*4]
 * 00000001C002CD92: add     rcx, rcx
 * 00000001C002CD95: cmp     [r10+rcx*8+29h], sil
 * 00000001C002CD9A: jb      loc_1C00182C1
 * 00000001C002CDA0: and     [rsp+78h+var_28], 0
 * 00000001C002CDA6: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002CDAE: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002CDB5: mov     r9d, ebp
 * 00000001C002CDB8: mov     r8, [rsp+78h+arg_20]
 * 00000001C002CDC0: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002CDC5: mov     [rsp+78h+var_30], rbx
 * 00000001C002CDCA: mov     [rsp+78h+var_38], rdx
 * 00000001C002CDCF: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002CDD7: mov     [rsp+78h+var_40], 8
 * 00000001C002CDE0: mov     [rsp+78h+var_48], rdx
 * 00000001C002CDE5: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002CDED: mov     [rsp+78h+var_50], rbx
 * 00000001C002CDF2: mov     [rsp+78h+var_58], rdx
 * 00000001C002CDF7: mov     edx, 2Bh ; '+'
 * 00000001C002CDFC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002CE02: nop
 * 00000001C002CE03: jmp     loc_1C00182C1
 */
