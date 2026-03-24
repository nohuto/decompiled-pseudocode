/*
 * XREFs of __PostMessageExtended@20 @ 0x6DA3C
 * Callers:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for __PostMessageExtended@20 @ 0x6DA3C
 * Reason: Hex-Rays returned no pseudocode for 0x6DA3C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000006DA3C: mov     edi, edi
 * 000000000006DA3E: push    ebp; struct tagINPUT_MESSAGE_SOURCE *
 * 000000000006DA3F: mov     ebp, esp
 * 000000000006DA41: and     esp, 0FFFFFFF8h
 * 000000000006DA44: push    1; int
 * 000000000006DA46: push    [ebp+arg_8]; unsigned int
 * 000000000006DA49: push    [ebp+arg_4]; unsigned int
 * 000000000006DA4C: push    [ebp+arg_0]; struct tagWND *
 * 000000000006DA4F: call    ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z; _PostTransformableMessageExtended(tagWND *,uint,uint,long,tagINPUT_MESSAGE_SOURCE *,int)
 * 000000000006DA54: mov     esp, ebp
 * 000000000006DA56: pop     ebp
 * 000000000006DA57: retn    0Ch
 */
