/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C003B2A0
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C0017E8C (UsbhBusConnectPdo.c)
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C00449C0 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0045408 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0045710 (UsbhGetRegUsbHubFlags.c)
 *     UsbhQueryGlobalHubValue @ 0x1C0045AD0 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0045CE0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhRegDriverEntry @ 0x1C00461A0 (UsbhRegDriverEntry.c)
 *     UsbhRegQueryGlobalKey @ 0x1C0046540 (UsbhRegQueryGlobalKey.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00466CC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C00469A4 (UsbhSetPdoRegistryParameter.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C0046E90 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C0046F60 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C0047040 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C0047110 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C00471F0 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C00472C0 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C0047390 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C0047470 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C0047540 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C0047620 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C00476F0 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C00477C0 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C00478C0 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C00479D0 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C0047AB0 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C0047B80 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C0047C50 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C0047D20 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C0047E20 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C0047EF0 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C0047FC0 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C0048090 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0055FD0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005A580 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005A640 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005A828 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C005A9D0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhQueryUxdDevice @ 0x1C005B530 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C003B2A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C003B2A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003B2A0: mov     rax, rsp
 * 00000001C003B2A3: mov     [rax+8], rbx
 * 00000001C003B2A7: mov     [rax+10h], rbp
 * 00000001C003B2AB: mov     [rax+18h], rsi
 * 00000001C003B2AF: mov     [rax+20h], rdi
 * 00000001C003B2B3: push    r12
 * 00000001C003B2B5: push    r14
 * 00000001C003B2B7: push    r15
 * 00000001C003B2B9: sub     rsp, 40h
 * 00000001C003B2BD: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C003B2C4: lea     r12, aNull_0; "NULL"
 * 00000001C003B2CB: mov     rbx, [rsp+58h+arg_28]
 * 00000001C003B2D3: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C003B2D7: xor     r15d, r15d
 * 00000001C003B2DA: movzx   ebp, r9w
 * 00000001C003B2DE: mov     r14, rcx
 * 00000001C003B2E1: mov     edx, [rax+2Ch]
 * 00000001C003B2E4: lea     esi, [rdi+0Bh]
 * 00000001C003B2E7: test    dl, 1
 * 00000001C003B2EA: jz      short loc_1C003B34C
 * 00000001C003B2EC: test    rbx, rbx
 * 00000001C003B2EF: jz      short loc_1C003B308
 * 00000001C003B2F1: mov     rax, rdi
 * 00000001C003B2F4: inc     rax
 * 00000001C003B2F7: cmp     [rbx+rax*2], r15w
 * 00000001C003B2FC: jnz     short loc_1C003B2F4
 * 00000001C003B2FE: lea     rdx, ds:2[rax*2]
 * 00000001C003B306: jmp     short loc_1C003B30B
 * 00000001C003B308: mov     rdx, rsi
 * 00000001C003B30B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003B312: test    rbx, rbx
 * 00000001C003B315: mov     r8, [rsp+58h+arg_20]
 * 00000001C003B31D: mov     rcx, rbx
 * 00000001C003B320: cmovz   rcx, r12
 * 00000001C003B324: mov     [rsp+58h+var_28], r15
 * 00000001C003B329: mov     [rsp+58h+var_30], rdx
 * 00000001C003B32E: mov     r9d, ebp
 * 00000001C003B331: mov     [rsp+58h+var_38], rcx
 * 00000001C003B336: mov     edx, 2Bh ; '+'
 * 00000001C003B33B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003B342: mov     rcx, [rcx+18h]
 * 00000001C003B346: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B34C: test    rbx, rbx
 * 00000001C003B34F: jz      short loc_1C003B366
 * 00000001C003B351: inc     rdi
 * 00000001C003B354: cmp     [rbx+rdi*2], r15w
 * 00000001C003B359: jnz     short loc_1C003B351
 * 00000001C003B35B: lea     rsi, ds:2[rdi*2]
 * 00000001C003B363: test    rbx, rbx
 * 00000001C003B366: mov     r9, [rsp+58h+arg_20]
 * 00000001C003B36E: cmovz   rbx, r12
 * 00000001C003B372: mov     [rsp+58h+var_20], r15
 * 00000001C003B377: xor     edx, edx
 * 00000001C003B379: mov     [rsp+58h+var_28], rsi
 * 00000001C003B37E: mov     rcx, r14
 * 00000001C003B381: mov     [rsp+58h+var_30], rbx
 * 00000001C003B386: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C003B38B: lea     r8d, [rdx+1]
 * 00000001C003B38F: call    cs:__imp_WppAutoLogTrace
 * 00000001C003B396: nop     dword ptr [rax+rax+00h]
 * 00000001C003B39B: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003B3A0: mov     rbp, [rsp+58h+arg_8]
 * 00000001C003B3A5: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003B3AA: mov     rdi, [rsp+58h+arg_18]
 * 00000001C003B3AF: add     rsp, 40h
 * 00000001C003B3B3: pop     r15
 * 00000001C003B3B5: pop     r14
 * 00000001C003B3B7: pop     r12
 * 00000001C003B3B9: retn
 */
