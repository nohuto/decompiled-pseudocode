/*
 * XREFs of _StringCchPrintfW @ 0x4B33B6EC
 * Callers:
 *     _EtwpAddInstanceIdToLogFileName@12 @ 0x4B2F1A0B (_EtwpAddInstanceIdToLogFileName@12.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x4B334D98 (StringVPrintfWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for _StringCchPrintfW @ 0x4B33B6EC
 * Reason: Hex-Rays returned no pseudocode for 0x4B33B6EC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B33B6EC: mov     edi, edi
 * 000000004B33B6EE: push    ebp; pcchNewDestLength
 * 000000004B33B6EF: mov     ebp, esp
 * 000000004B33B6F1: mov     eax, dword ptr [ebp+cchDest]
 * 000000004B33B6F4: xor     ecx, ecx
 * 000000004B33B6F6: test    eax, eax
 * 000000004B33B6F8: jz      short loc_4B33B701
 * 000000004B33B6FA: cmp     eax, 7FFFFFFFh
 * 000000004B33B6FF: jbe     short loc_4B33B706
 * 000000004B33B701: mov     ecx, 80070057h
 * 000000004B33B706: test    ecx, ecx
 * 000000004B33B708: js      short loc_4B33B720
 * 000000004B33B70A: lea     ecx, [ebp+pszFormat]
 * 000000004B33B70D: mov     edx, eax
 * 000000004B33B70F: push    ecx
 * 000000004B33B710: push    dword ptr [ebp+cchDest+4]; cchDest
 * 000000004B33B713: push    ecx; pszDest
 * 000000004B33B714: mov     ecx, [ebp+pszDest]
 * 000000004B33B717: call    StringVPrintfWorkerW
 * 000000004B33B71C: mov     ecx, eax
 * 000000004B33B71E: jmp     short loc_4B33B72C
 * 000000004B33B720: test    eax, eax
 * 000000004B33B722: jz      short loc_4B33B72C
 * 000000004B33B724: mov     eax, [ebp+pszDest]
 * 000000004B33B727: xor     edx, edx
 * 000000004B33B729: mov     [eax], dx
 * 000000004B33B72C: mov     eax, ecx
 * 000000004B33B72E: pop     ebp
 * 000000004B33B72F: retn
 */
