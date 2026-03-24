/*
 * XREFs of _AllocQEntry@4 @ 0xEFE7A
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     _DoTimer@4 @ 0x742FA (_DoTimer@4.c)
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 * Callees:
 *     ?AllocQEntryEx@@YGPAUtagQMSG@@PAUtagMLIST@@PAU1@_N@Z @ 0x6D81C (-AllocQEntryEx@@YGPAUtagQMSG@@PAUtagMLIST@@PAU1@_N@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _AllocQEntry@4 @ 0xEFE7A
 * Reason: Hex-Rays returned no pseudocode for 0xEFE7A
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000EFE7A: push    0; struct tagMLIST *
 * 00000000000EFE7C: xor     edx, edx
 * 00000000000EFE7E: call    ?AllocQEntryEx@@YGPAUtagQMSG@@PAUtagMLIST@@PAU1@_N@Z; AllocQEntryEx(tagMLIST *,tagQMSG *,bool)
 * 00000000000EFE83: retn
 */
