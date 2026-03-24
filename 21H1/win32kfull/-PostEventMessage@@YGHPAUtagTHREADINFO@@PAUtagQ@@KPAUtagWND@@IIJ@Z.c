/*
 * XREFs of ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     _NtUserDisableThreadIme@4 @ 0x801DE (_NtUserDisableThreadIme@4.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 *     _QueueShutdownData@8 @ 0x141FC0 (_QueueShutdownData@8.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 *     _NtUserSendEventMessage@16 @ 0x1685C8 (_NtUserSendEventMessage@16.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YGXIJ@Z @ 0x172BB1 (-WindowArrangementHotKeyCallback@@YGXIJ@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56
 * Reason: Hex-Rays returned no pseudocode for 0xF0F56
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F0F56: mov     edi, edi
 * 00000000000F0F58: push    ebp; int
 * 00000000000F0F59: mov     ebp, esp
 * 00000000000F0F5B: push    0; unsigned int
 * 00000000000F0F5D: push    [ebp+arg_10]; unsigned int
 * 00000000000F0F60: push    [ebp+arg_C]; struct tagWND *
 * 00000000000F0F63: push    [ebp+arg_8]; unsigned int
 * 00000000000F0F66: push    [ebp+arg_4]; struct tagQ *
 * 00000000000F0F69: push    [ebp+arg_0]; struct tagTHREADINFO *
 * 00000000000F0F6C: call    ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z; PostEventMessageEx(tagTHREADINFO *,tagQ *,ulong,tagWND *,uint,uint,long,tagINPUT_MESSAGE_SOURCE *)
 * 00000000000F0F71: pop     ebp
 * 00000000000F0F72: retn    14h
 */
