/*
 * XREFs of _StringCchCopyNW@16 @ 0x4B38628E
 * Callers:
 *     _SbpParseFuncName@20 @ 0x4B385FBD (_SbpParseFuncName@20.c)
 * Callees:
 *     StringCopyWorkerW_1 @ 0x4B3862B8 (StringCopyWorkerW_1.c)
 */

/*
 * Hex-Rays decompilation failed for _StringCchCopyNW@16 @ 0x4B38628E
 * Reason: Hex-Rays returned no pseudocode for 0x4B38628E
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B38628E: mov     edi, edi
 * 000000004B386290: push    ebp; pcchNewDestLength
 * 000000004B386291: mov     ebp, esp
 * 000000004B386293: cmp     dword ptr [ebp+cchDest], 7FFFFFFEh
 * 000000004B38629A: jbe     short loc_4B3862A8
 * 000000004B38629C: xor     edx, edx
 * 000000004B38629E: mov     eax, 80070057h
 * 000000004B3862A3: mov     [ecx], dx
 * 000000004B3862A6: jmp     short loc_4B3862B4
 * 000000004B3862A8: push    dword ptr [ebp+cchDest]
 * 000000004B3862AB: push    [ebp+pszDest]; cchDest
 * 000000004B3862AE: push    ecx; pszDest
 * 000000004B3862AF: call    StringCopyWorkerW_1
 * 000000004B3862B4: pop     ebp
 * 000000004B3862B5: retn    8
 */
