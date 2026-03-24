/*
 * XREFs of __PostTransformableMessage@20 @ 0x7F9FE
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _IdleTimerProc@0 @ 0x73DA6 (_IdleTimerProc@0.c)
 *     __PostTransformableMessageIL@24 @ 0x7F87A (__PostTransformableMessageIL@24.c)
 *     _xxxSystemTimerProc@16 @ 0xCA358 (_xxxSystemTimerProc@16.c)
 *     ?MiPIdleTimerFunc@@YGXPAUtagWND@@IIJ@Z @ 0x14D4A0 (-MiPIdleTimerFunc@@YGXPAUtagWND@@IIJ@Z.c)
 *     _PostMousePointerLeaveAndCleanup@8 @ 0x14E54F (_PostMousePointerLeaveAndCleanup@8.c)
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for __PostTransformableMessage@20 @ 0x7F9FE
 * Reason: Hex-Rays returned no pseudocode for 0x7F9FE
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000007F9FE: mov     edi, edi
 * 000000000007FA00: push    ebp; struct tagINPUT_MESSAGE_SOURCE *
 * 000000000007FA01: mov     ebp, esp
 * 000000000007FA03: push    [ebp+arg_8]; int
 * 000000000007FA06: push    0; unsigned int
 * 000000000007FA08: push    [ebp+arg_4]; unsigned int
 * 000000000007FA0B: push    [ebp+arg_0]; struct tagWND *
 * 000000000007FA0E: call    ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z; _PostTransformableMessageExtended(tagWND *,uint,uint,long,tagINPUT_MESSAGE_SOURCE *,int)
 * 000000000007FA13: mov     ecx, ds:__imp__MmSystemRangeStart
 * 000000000007FA19: mov     edx, eax
 * 000000000007FA1B: cmp     edx, [ecx]
 * 000000000007FA1D: jb      short loc_7FA26
 * 000000000007FA1F: xor     eax, eax
 * 000000000007FA21: test    edx, edx
 * 000000000007FA23: setnz   al
 * 000000000007FA26: pop     ebp
 * 000000000007FA27: retn    0Ch
 */
