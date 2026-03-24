/*
 * XREFs of ?StringCchCopyNW@@YGJPAGIPBGI@Z @ 0xD2330
 * Callers:
 *     _GreMultiUserSetDisplayDriverName@12 @ 0xD22DA (_GreMultiUserSetDisplayDriverName@12.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0xD2374 (StringCopyWorkerW_0.c)
 */

/*
 * Hex-Rays decompilation failed for ?StringCchCopyNW@@YGJPAGIPBGI@Z @ 0xD2330
 * Reason: Hex-Rays returned no pseudocode for 0xD2330
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000D2330: mov     edi, edi
 * 00000000000D2332: push    ebp; pszSrc
 * 00000000000D2333: mov     ebp, esp
 * 00000000000D2335: xor     eax, eax
 * 00000000000D2337: test    edx, edx
 * 00000000000D2339: jz      short loc_D2364
 * 00000000000D233B: cmp     edx, 7FFFFFFFh
 * 00000000000D2341: ja      short loc_D2364
 * 00000000000D2343: test    eax, eax
 * 00000000000D2345: js      short loc_D236B
 * 00000000000D2347: cmp     [ebp+pcchNewDestLength], 7FFFFFFEh
 * 00000000000D234E: ja      loc_136676
 * 00000000000D2354: push    [ebp+pcchNewDestLength]; pcchNewDestLength
 * 00000000000D2357: push    [ebp+cchDest]; cchDest
 * 00000000000D235A: push    ecx; pszDest
 * 00000000000D235B: call    StringCopyWorkerW_0
 * 00000000000D2360: pop     ebp
 * 00000000000D2361: retn    8
 * 00000000000D2364: mov     eax, 80070057h
 * 00000000000D2369: jmp     short loc_D2343
 * 00000000000D236B: test    edx, edx
 * 00000000000D236D: jz      short loc_D2360
 * 00000000000D236F: jmp     loc_13667B
 * 0000000000136676: mov     eax, 80070057h
 * 000000000013667B: xor     edx, edx
 * 000000000013667D: mov     [ecx], dx
 * 0000000000136680: jmp     loc_D2360
 */
