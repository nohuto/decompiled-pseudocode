/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00060CC
 * Callers:
 *     KeyboardClassCleanup @ 0x1C0001180 (KeyboardClassCleanup.c)
 *     KeyboardClassRead @ 0x1C00012F0 (KeyboardClassRead.c)
 *     KeyboardClassClose @ 0x1C0001B50 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C0001CC0 (KeyboardClassCreate.c)
 *     KbdInitializeDataQueue @ 0x1C0002C30 (KbdInitializeDataQueue.c)
 *     KeyboardClassFlush @ 0x1C0004EA0 (KeyboardClassFlush.c)
 *     KeyboardClassServiceCallback @ 0x1C0005570 (KeyboardClassServiceCallback.c)
 *     KeyboardClassDeviceControl @ 0x1C000D110 (KeyboardClassDeviceControl.c)
 *     KbdEnableDisablePort @ 0x1C000D430 (KbdEnableDisablePort.c)
 *     KeyboardClassFindMorePorts @ 0x1C000D600 (KeyboardClassFindMorePorts.c)
 *     KbdDeterminePortsServiced @ 0x1C000DC30 (KbdDeterminePortsServiced.c)
 *     KbdSendConnectRequest @ 0x1C000DD70 (KbdSendConnectRequest.c)
 *     KbdCreateClassObject @ 0x1C000DF80 (KbdCreateClassObject.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002ED0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C00060CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00060CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00060CC: mov     [rsp+arg_0], rbx
 * 00000001C00060D1: mov     [rsp+arg_8], rbp
 * 00000001C00060D6: mov     [rsp+arg_10], rsi
 * 00000001C00060DB: push    rdi
 * 00000001C00060DC: push    r14
 * 00000001C00060DE: push    r15
 * 00000001C00060E0: sub     rsp, 30h
 * 00000001C00060E4: mov     r14d, r8d
 * 00000001C00060E7: mov     r15, rcx
 * 00000001C00060EA: mov     edi, r8d
 * 00000001C00060ED: shr     rdi, 10h
 * 00000001C00060F1: movzx   ebp, r9w
 * 00000001C00060F5: lea     ebx, [r14-1]
 * 00000001C00060F9: movzx   esi, dl
 * 00000001C00060FC: mov     r10d, ebx
 * 00000001C00060FF: and     ebx, 1Fh
 * 00000001C0006102: shr     r10, 5
 * 00000001C0006106: lea     rax, [rdi+rdi*4]
 * 00000001C000610A: and     r10d, 7FFh
 * 00000001C0006111: lea     r11, [r10+rax*4]
 * 00000001C0006115: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000611C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0006121: bt      eax, ebx
 * 00000001C0006124: jnb     short loc_1C000615B
 * 00000001C0006126: lea     rcx, [rdi+rdi*4]
 * 00000001C000612A: add     rcx, rcx
 * 00000001C000612D: cmp     [r10+rcx*8+29h], sil
 * 00000001C0006132: jb      short loc_1C000615B
 * 00000001C0006134: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000613B: lea     r8, WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids
 * 00000001C0006142: and     [rsp+48h+var_28], 0
 * 00000001C0006148: mov     r9d, ebp
 * 00000001C000614B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0006150: mov     edx, 2Bh ; '+'
 * 00000001C0006155: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000615B: and     [rsp+48h+var_20], 0
 * 00000001C0006161: lea     r9, WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids
 * 00000001C0006168: mov     r8d, r14d
 * 00000001C000616B: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0006170: mov     edx, esi
 * 00000001C0006172: mov     rcx, r15
 * 00000001C0006175: call    cs:__imp_WppAutoLogTrace
 * 00000001C000617C: nop     dword ptr [rax+rax+00h]
 * 00000001C0006181: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0006186: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000618B: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0006190: add     rsp, 30h
 * 00000001C0006194: pop     r15
 * 00000001C0006196: pop     r14
 * 00000001C0006198: pop     rdi
 * 00000001C0006199: retn
 */
