/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000572C
 * Callers:
 *     MouseClassCleanup @ 0x1C0001010 (MouseClassCleanup.c)
 *     MouseClassClose @ 0x1C0001180 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C00012F0 (MouseClassCreate.c)
 *     MouseClassRead @ 0x1C0001AD0 (MouseClassRead.c)
 *     MouInitializeDataQueue @ 0x1C00024A0 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C0004500 (MouseClassFlush.c)
 *     MouseClassServiceCallback @ 0x1C0004BE0 (MouseClassServiceCallback.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouseClassDeviceControl @ 0x1C000C1D0 (MouseClassDeviceControl.c)
 *     MouseClassFindMorePorts @ 0x1C000C3F0 (MouseClassFindMorePorts.c)
 *     MouDeterminePortsServiced @ 0x1C000C830 (MouDeterminePortsServiced.c)
 *     MouSendConnectRequest @ 0x1C000CA70 (MouSendConnectRequest.c)
 *     MouCreateClassObject @ 0x1C000CBA0 (MouCreateClassObject.c)
 *     DriverEntry @ 0x1C000F500 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C000572C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000572C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000572C: mov     [rsp+arg_0], rbx
 * 00000001C0005731: mov     [rsp+arg_8], rbp
 * 00000001C0005736: mov     [rsp+arg_10], rsi
 * 00000001C000573B: push    rdi
 * 00000001C000573C: push    r14
 * 00000001C000573E: push    r15
 * 00000001C0005740: sub     rsp, 30h
 * 00000001C0005744: mov     r14d, r8d
 * 00000001C0005747: mov     r15, rcx
 * 00000001C000574A: mov     edi, r8d
 * 00000001C000574D: shr     rdi, 10h
 * 00000001C0005751: movzx   ebp, r9w
 * 00000001C0005755: lea     ebx, [r14-1]
 * 00000001C0005759: movzx   esi, dl
 * 00000001C000575C: mov     r10d, ebx
 * 00000001C000575F: and     ebx, 1Fh
 * 00000001C0005762: shr     r10, 5
 * 00000001C0005766: lea     rax, [rdi+rdi*4]
 * 00000001C000576A: and     r10d, 7FFh
 * 00000001C0005771: lea     r11, [r10+rax*4]
 * 00000001C0005775: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000577C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0005781: bt      eax, ebx
 * 00000001C0005784: jnb     short loc_1C00057BB
 * 00000001C0005786: lea     rcx, [rdi+rdi*4]
 * 00000001C000578A: add     rcx, rcx
 * 00000001C000578D: cmp     [r10+rcx*8+29h], sil
 * 00000001C0005792: jb      short loc_1C00057BB
 * 00000001C0005794: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000579B: lea     r8, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C00057A2: and     [rsp+48h+var_28], 0
 * 00000001C00057A8: mov     r9d, ebp
 * 00000001C00057AB: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00057B0: mov     edx, 2Bh ; '+'
 * 00000001C00057B5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00057BB: and     [rsp+48h+var_20], 0
 * 00000001C00057C1: lea     r9, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C00057C8: mov     r8d, r14d
 * 00000001C00057CB: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00057D0: mov     edx, esi
 * 00000001C00057D2: mov     rcx, r15
 * 00000001C00057D5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00057DC: nop     dword ptr [rax+rax+00h]
 * 00000001C00057E1: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00057E6: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00057EB: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00057F0: add     rsp, 30h
 * 00000001C00057F4: pop     r15
 * 00000001C00057F6: pop     r14
 * 00000001C00057F8: pop     rdi
 * 00000001C00057F9: retn
 */
