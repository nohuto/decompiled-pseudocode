/*
 * XREFs of _StringCbPrintfA @ 0x4B32E7CE
 * Callers:
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 * Callees:
 *     StringVPrintfWorkerA @ 0x4B32E810 (StringVPrintfWorkerA.c)
 */

/*
 * Hex-Rays decompilation failed for _StringCbPrintfA @ 0x4B32E7CE
 * Reason: Hex-Rays returned no pseudocode for 0x4B32E7CE
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B32E7CE: mov     edi, edi
 * 000000004B32E7D0: push    ebp; pcchNewDestLength
 * 000000004B32E7D1: mov     ebp, esp
 * 000000004B32E7D3: mov     eax, dword ptr [ebp+cbDest]
 * 000000004B32E7D6: xor     ecx, ecx
 * 000000004B32E7D8: test    eax, eax
 * 000000004B32E7DA: jz      short loc_4B32E7E3
 * 000000004B32E7DC: cmp     eax, 7FFFFFFFh
 * 000000004B32E7E1: jbe     short loc_4B32E7E8
 * 000000004B32E7E3: mov     ecx, 80070057h
 * 000000004B32E7E8: test    ecx, ecx
 * 000000004B32E7EA: js      short loc_4B32E802
 * 000000004B32E7EC: lea     ecx, [ebp+pszFormat]
 * 000000004B32E7EF: mov     edx, eax
 * 000000004B32E7F1: push    ecx
 * 000000004B32E7F2: push    dword ptr [ebp+cbDest+4]; cchDest
 * 000000004B32E7F5: push    ecx; pszDest
 * 000000004B32E7F6: mov     ecx, [ebp+pszDest]
 * 000000004B32E7F9: call    StringVPrintfWorkerA
 * 000000004B32E7FE: mov     ecx, eax
 * 000000004B32E800: jmp     short loc_4B32E80C
 * 000000004B32E802: test    eax, eax
 * 000000004B32E804: jz      short loc_4B32E80C
 * 000000004B32E806: mov     eax, [ebp+pszDest]
 * 000000004B32E809: mov     byte ptr [eax], 0
 * 000000004B32E80C: mov     eax, ecx
 * 000000004B32E80E: pop     ebp
 * 000000004B32E80F: retn
 */
