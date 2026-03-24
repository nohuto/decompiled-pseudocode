/*
 * XREFs of _StringCchCopyW@12 @ 0x1DA4E7
 * Callers:
 *     _EngGetFilePath@8 @ 0x1DA235 (_EngGetFilePath@8.c)
 *     _GetNlsTablePath@8 @ 0x1DA3A5 (_GetNlsTablePath@8.c)
 * Callees:
 *     StringCopyWorkerW_1 @ 0x1DA51C (StringCopyWorkerW_1.c)
 */

/*
 * Hex-Rays decompilation failed for _StringCchCopyW@12 @ 0x1DA4E7
 * Reason: Hex-Rays returned no pseudocode for 0x1DA4E7
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001DA4E7: mov     edi, edi
 * 00000000001DA4E9: push    ebp; pszSrc
 * 00000000001DA4EA: mov     ebp, esp
 * 00000000001DA4EC: xor     eax, eax
 * 00000000001DA4EE: test    edx, edx
 * 00000000001DA4F0: jz      short loc_1DA4FA
 * 00000000001DA4F2: cmp     edx, 7FFFFFFFh
 * 00000000001DA4F8: jbe     short loc_1DA4FF
 * 00000000001DA4FA: mov     eax, 80070057h
 * 00000000001DA4FF: test    eax, eax
 * 00000000001DA501: js      short loc_1DA50F
 * 00000000001DA503: push    ecx; pcchNewDestLength
 * 00000000001DA504: push    [ebp+pszDest]; cchDest
 * 00000000001DA507: push    ecx; pszDest
 * 00000000001DA508: call    StringCopyWorkerW_1
 * 00000000001DA50D: jmp     short loc_1DA518
 * 00000000001DA50F: test    edx, edx
 * 00000000001DA511: jz      short loc_1DA518
 * 00000000001DA513: xor     edx, edx
 * 00000000001DA515: mov     [ecx], dx
 * 00000000001DA518: pop     ebp
 * 00000000001DA519: retn    4
 */
