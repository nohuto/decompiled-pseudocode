/*
 * XREFs of _EngGetFilePath@8 @ 0x1DA235
 * Callers:
 *     ?UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCD05 (-UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     _StringCchCopyW@12 @ 0x1DA4E7 (_StringCchCopyW@12.c)
 */

/*
 * Hex-Rays decompilation failed for _EngGetFilePath@8 @ 0x1DA235
 * Reason: Hex-Rays returned no pseudocode for 0x1DA235
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001DA235: mov     edi, edi
 * 00000000001DA237: push    ebp; cchDest
 * 00000000001DA238: mov     ebp, esp
 * 00000000001DA23A: mov     eax, [ebp+h]
 * 00000000001DA23D: mov     eax, [eax+30h]
 * 00000000001DA240: test    eax, eax
 * 00000000001DA242: jz      short loc_1DA25B
 * 00000000001DA244: mov     ecx, [ebp+pDest]
 * 00000000001DA247: mov     edx, 105h
 * 00000000001DA24C: push    eax; pszDest
 * 00000000001DA24D: call    _StringCchCopyW@12; StringCchCopyW(x,x,x)
 * 00000000001DA252: xor     ecx, ecx
 * 00000000001DA254: test    eax, eax
 * 00000000001DA256: setns   cl
 * 00000000001DA259: mov     eax, ecx
 * 00000000001DA25B: pop     ebp
 * 00000000001DA25C: retn    8
 */
