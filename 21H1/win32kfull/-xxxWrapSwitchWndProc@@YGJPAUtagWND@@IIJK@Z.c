/*
 * XREFs of ?xxxWrapSwitchWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA6A
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z @ 0x12752 (-CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxWrapSwitchWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA6A
 * Reason: Hex-Rays returned no pseudocode for 0x14FA6A
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000014FA6A: mov     edi, edi
 * 000000000014FA6C: push    ebp; unsigned int
 * 000000000014FA6D: mov     ebp, esp
 * 000000000014FA6F: push    [ebp+arg_C]; unsigned int
 * 000000000014FA72: mov     edx, [ebp+arg_4]
 * 000000000014FA75: push    [ebp+arg_8]; struct tagWND *
 * 000000000014FA78: mov     ecx, [ebp+arg_0]
 * 000000000014FA7B: call    ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z; CheckProcessIdentity(tagWND *,uint,uint,long)
 * 000000000014FA80: test    eax, eax
 * 000000000014FA82: jz      short loc_14FA95
 * 000000000014FA84: push    [ebp+arg_C]
 * 000000000014FA87: push    [ebp+arg_8]
 * 000000000014FA8A: push    [ebp+arg_4]
 * 000000000014FA8D: push    [ebp+arg_0]
 * 000000000014FA90: call    _xxxSwitchWndProc@16; xxxSwitchWndProc(x,x,x,x)
 * 000000000014FA95: pop     ebp
 * 000000000014FA96: retn    14h
 */
