/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C00167E0
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0015ACC (RIMStartDeviceSpecificRead.c)
 *     rimOnPnpArrived @ 0x1C0016384 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C00166B0 (rimOnPnpRemoveComplete.c)
 *     rimFakePnpRemoveComplete @ 0x1C001A450 (rimFakePnpRemoveComplete.c)
 *     NtUserInjectDeviceInput @ 0x1C01352C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01356F0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectPointerInput @ 0x1C0136740 (NtUserInjectPointerInput.c)
 *     UserAddBaseWindowHandle @ 0x1C013D680 (UserAddBaseWindowHandle.c)
 *     rimOnPnpQueryRemove @ 0x1C016FA44 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C016FB64 (rimOnPnpRemoveCancelled.c)
 *     rimInputApc @ 0x1C0175DE0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0182138 (RIMApplyPTPConfigRemedy.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01B6B48 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C00167E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00167E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00167E0: mov     [rsp+arg_0], rbx
 * 00000001C00167E5: mov     [rsp+arg_8], rbp
 * 00000001C00167EA: mov     [rsp+arg_10], rsi
 * 00000001C00167EF: push    rdi
 * 00000001C00167F0: push    r14
 * 00000001C00167F2: push    r15
 * 00000001C00167F4: sub     rsp, 60h
 * 00000001C00167F8: mov     r14d, r8d
 * 00000001C00167FB: mov     r15, rcx
 * 00000001C00167FE: mov     edi, r8d
 * 00000001C0016801: shr     rdi, 10h
 * 00000001C0016805: movzx   esi, dl
 * 00000001C0016808: lea     ebx, [r14-1]
 * 00000001C001680C: movzx   ebp, r9w
 * 00000001C0016810: mov     r10d, ebx
 * 00000001C0016813: and     ebx, 1Fh
 * 00000001C0016816: shr     r10, 5
 * 00000001C001681A: lea     rax, [rdi+rdi*4]
 * 00000001C001681E: and     r10d, 7FFh
 * 00000001C0016825: mov     edx, ebx
 * 00000001C0016827: mov     ebx, 8
 * 00000001C001682C: lea     r11, [r10+rax*4]
 * 00000001C0016830: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0016837: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001683C: bt      eax, edx
 * 00000001C001683F: jb      loc_1C00DE2E2
 * 00000001C0016845: and     [rsp+78h+var_20], 0
 * 00000001C001684B: lea     rax, [rsp+78h+arg_38]
 * 00000001C0016853: mov     r9, [rsp+78h+arg_20]
 * 00000001C001685B: mov     r8d, r14d
 * 00000001C001685E: mov     [rsp+78h+var_28], 4
 * 00000001C0016867: mov     edx, esi
 * 00000001C0016869: mov     [rsp+78h+var_30], rax
 * 00000001C001686E: mov     rcx, r15
 * 00000001C0016871: mov     [rsp+78h+var_38], rbx
 * 00000001C0016876: lea     rax, [rsp+78h+arg_30]
 * 00000001C001687E: mov     [rsp+78h+var_40], rax
 * 00000001C0016883: lea     rax, [rsp+78h+arg_28]
 * 00000001C001688B: mov     [rsp+78h+var_48], rbx
 * 00000001C0016890: mov     [rsp+78h+var_50], rax
 * 00000001C0016895: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C001689A: call    cs:__imp_WppAutoLogTrace
 * 00000001C00168A1: nop     dword ptr [rax+rax+00h]
 * 00000001C00168A6: lea     r11, [rsp+78h+var_18]
 * 00000001C00168AB: mov     rbx, [r11+20h]
 * 00000001C00168AF: mov     rbp, [r11+28h]
 * 00000001C00168B3: mov     rsi, [r11+30h]
 * 00000001C00168B7: mov     rsp, r11
 * 00000001C00168BA: pop     r15
 * 00000001C00168BC: pop     r14
 * 00000001C00168BE: pop     rdi
 * 00000001C00168BF: retn
 * 00000001C00DE2E2: lea     rcx, [rdi+rdi*4]
 * 00000001C00DE2E6: add     rcx, rcx
 * 00000001C00DE2E9: cmp     [r10+rcx*8+29h], sil
 * 00000001C00DE2EE: jb      loc_1C0016845
 * 00000001C00DE2F4: and     [rsp+78h+var_28], 0
 * 00000001C00DE2FA: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00DE302: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00DE309: mov     r9d, ebp
 * 00000001C00DE30C: mov     r8, [rsp+78h+arg_20]
 * 00000001C00DE314: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00DE319: mov     [rsp+78h+var_30], 4
 * 00000001C00DE322: mov     [rsp+78h+var_38], rdx
 * 00000001C00DE327: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00DE32F: mov     [rsp+78h+var_40], rbx
 * 00000001C00DE334: mov     [rsp+78h+var_48], rdx
 * 00000001C00DE339: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00DE341: mov     [rsp+78h+var_50], rbx
 * 00000001C00DE346: mov     [rsp+78h+var_58], rdx
 * 00000001C00DE34B: mov     edx, 2Bh ; '+'
 * 00000001C00DE350: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00DE356: nop
 * 00000001C00DE357: jmp     loc_1C0016845
 */
