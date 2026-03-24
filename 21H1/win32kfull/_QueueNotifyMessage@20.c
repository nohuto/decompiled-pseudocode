/*
 * XREFs of _QueueNotifyMessage@20 @ 0x1812B6
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E (-QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _QueueNotifyMessage@20 @ 0x1812B6
 * Reason: Hex-Rays returned no pseudocode for 0x1812B6
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001812B6: mov     edi, edi
 * 00000000001812B8: push    ebp; int
 * 00000000001812B9: mov     ebp, esp
 * 00000000001812BB: mov     edx, [ebp+arg_4]
 * 00000000001812BE: mov     ecx, [ebp+arg_0]
 * 00000000001812C1: push    0; int
 * 00000000001812C3: push    [ebp+MaxCount]; MaxCount
 * 00000000001812C6: push    [ebp+arg_C]; unsigned int
 * 00000000001812C9: push    [ebp+arg_8]; struct tagWND *
 * 00000000001812CC: call    ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z; QueueNotifyTransformableMessage(tagWND *,uint,uint,long,int,int)
 * 00000000001812D1: pop     ebp
 * 00000000001812D2: retn    14h
 */
