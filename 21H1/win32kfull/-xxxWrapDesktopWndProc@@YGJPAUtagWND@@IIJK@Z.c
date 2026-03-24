/*
 * XREFs of ?xxxWrapDesktopWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x12790
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z @ 0x12752 (-CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z.c)
 *     _xxxDesktopWndProc@16 @ 0x16118 (_xxxDesktopWndProc@16.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxWrapDesktopWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x12790
 * Reason: Hex-Rays returned no pseudocode for 0x12790
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000012790: mov     edi, edi
 * 0000000000012792: push    ebp; unsigned int
 * 0000000000012793: mov     ebp, esp
 * 0000000000012795: push    [ebp+arg_C]; unsigned int
 * 0000000000012798: mov     edx, [ebp+arg_4]
 * 000000000001279B: push    [ebp+arg_8]; struct tagWND *
 * 000000000001279E: mov     ecx, [ebp+arg_0]
 * 00000000000127A1: call    ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z; CheckProcessIdentity(tagWND *,uint,uint,long)
 * 00000000000127A6: test    eax, eax
 * 00000000000127A8: jz      short loc_127BF
 * 00000000000127AA: push    [ebp+arg_C]
 * 00000000000127AD: push    [ebp+arg_8]
 * 00000000000127B0: push    [ebp+arg_4]
 * 00000000000127B3: push    [ebp+arg_0]
 * 00000000000127B6: call    _xxxDesktopWndProc@16; xxxDesktopWndProc(x,x,x,x)
 * 00000000000127BB: pop     ebp
 * 00000000000127BC: retn    14h
 * 00000000000127BF: xor     eax, eax
 * 00000000000127C1: jmp     short loc_127BB
 */
