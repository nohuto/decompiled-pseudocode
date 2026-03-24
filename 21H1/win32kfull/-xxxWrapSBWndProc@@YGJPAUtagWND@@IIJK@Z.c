/*
 * XREFs of ?xxxWrapSBWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA3B
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z @ 0x12752 (-CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxWrapSBWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA3B
 * Reason: Hex-Rays returned no pseudocode for 0x14FA3B
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000014FA3B: mov     edi, edi
 * 000000000014FA3D: push    ebp; unsigned int
 * 000000000014FA3E: mov     ebp, esp
 * 000000000014FA40: push    [ebp+arg_C]; unsigned int
 * 000000000014FA43: mov     edx, [ebp+arg_4]
 * 000000000014FA46: push    [ebp+arg_8]; struct tagWND *
 * 000000000014FA49: mov     ecx, [ebp+arg_0]
 * 000000000014FA4C: call    ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z; CheckProcessIdentity(tagWND *,uint,uint,long)
 * 000000000014FA51: test    eax, eax
 * 000000000014FA53: jz      short loc_14FA66
 * 000000000014FA55: push    [ebp+arg_C]
 * 000000000014FA58: push    [ebp+arg_8]
 * 000000000014FA5B: push    [ebp+arg_4]
 * 000000000014FA5E: push    [ebp+arg_0]
 * 000000000014FA61: call    _xxxSBWndProc@16; xxxSBWndProc(x,x,x,x)
 * 000000000014FA66: pop     ebp
 * 000000000014FA67: retn    14h
 */
