/*
 * XREFs of ?xxxWrapMenuWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA0C
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z @ 0x12752 (-CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxWrapMenuWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA0C
 * Reason: Hex-Rays returned no pseudocode for 0x14FA0C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000014FA0C: mov     edi, edi
 * 000000000014FA0E: push    ebp; unsigned int
 * 000000000014FA0F: mov     ebp, esp
 * 000000000014FA11: push    [ebp+arg_C]; unsigned int
 * 000000000014FA14: mov     edx, [ebp+arg_4]
 * 000000000014FA17: push    [ebp+arg_8]; struct tagWND *
 * 000000000014FA1A: mov     ecx, [ebp+arg_0]
 * 000000000014FA1D: call    ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z; CheckProcessIdentity(tagWND *,uint,uint,long)
 * 000000000014FA22: test    eax, eax
 * 000000000014FA24: jz      short loc_14FA37
 * 000000000014FA26: push    [ebp+arg_C]
 * 000000000014FA29: push    [ebp+arg_8]
 * 000000000014FA2C: push    [ebp+arg_4]
 * 000000000014FA2F: push    [ebp+arg_0]
 * 000000000014FA32: call    _xxxMenuWindowProc@16; xxxMenuWindowProc(x,x,x,x)
 * 000000000014FA37: pop     ebp
 * 000000000014FA38: retn    14h
 */
