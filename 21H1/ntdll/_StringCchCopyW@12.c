/*
 * XREFs of _StringCchCopyW@12 @ 0x4B33B6B7
 * Callers:
 *     _EtwpAddInstanceIdToLogFileName@12 @ 0x4B2F1A0B (_EtwpAddInstanceIdToLogFileName@12.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 *     _SbpParseFuncName@20 @ 0x4B385FBD (_SbpParseFuncName@20.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x4B33B730 (StringCopyWorkerW_0.c)
 */

/*
 * Hex-Rays decompilation failed for _StringCchCopyW@12 @ 0x4B33B6B7
 * Reason: Hex-Rays returned no pseudocode for 0x4B33B6B7
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B33B6B7: mov     edi, edi
 * 000000004B33B6B9: push    ebp; pcchNewDestLength
 * 000000004B33B6BA: mov     ebp, esp
 * 000000004B33B6BC: xor     eax, eax
 * 000000004B33B6BE: test    edx, edx
 * 000000004B33B6C0: jz      short loc_4B33B6CA
 * 000000004B33B6C2: cmp     edx, 7FFFFFFFh
 * 000000004B33B6C8: jbe     short loc_4B33B6CF
 * 000000004B33B6CA: mov     eax, 80070057h
 * 000000004B33B6CF: test    eax, eax
 * 000000004B33B6D1: js      short loc_4B33B6DF
 * 000000004B33B6D3: push    ecx
 * 000000004B33B6D4: push    [ebp+pszDest]; cchDest
 * 000000004B33B6D7: push    ecx; pszDest
 * 000000004B33B6D8: call    StringCopyWorkerW_0
 * 000000004B33B6DD: jmp     short loc_4B33B6E8
 * 000000004B33B6DF: test    edx, edx
 * 000000004B33B6E1: jz      short loc_4B33B6E8
 * 000000004B33B6E3: xor     edx, edx
 * 000000004B33B6E5: mov     [ecx], dx
 * 000000004B33B6E8: pop     ebp
 * 000000004B33B6E9: retn    4
 */
