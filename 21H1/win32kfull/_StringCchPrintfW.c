/*
 * XREFs of _StringCchPrintfW @ 0xD54EC
 * Callers:
 *     ?CreatePointerDeviceProcessEvent@@YGHKHEPAGPAPAX@Z @ 0xD5244 (-CreatePointerDeviceProcessEvent@@YGHKHEPAGPAPAX@Z.c)
 *     _PlaySoundConnect@12 @ 0x27A9D0 (_PlaySoundConnect@12.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0xD5528 (StringVPrintfWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for _StringCchPrintfW @ 0xD54EC
 * Reason: Hex-Rays returned no pseudocode for 0xD54EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000D54EC: mov     edi, edi
 * 00000000000D54EE: push    ebp; pszFormat
 * 00000000000D54EF: mov     ebp, esp
 * 00000000000D54F1: mov     eax, [ebp+cchDest]
 * 00000000000D54F4: xor     ecx, ecx
 * 00000000000D54F6: test    eax, eax
 * 00000000000D54F8: jz      short loc_D5521
 * 00000000000D54FA: cmp     eax, 7FFFFFFFh
 * 00000000000D54FF: ja      short loc_D5521
 * 00000000000D5501: test    ecx, ecx
 * 00000000000D5503: js      loc_1377A7
 * 00000000000D5509: lea     ecx, [ebp+arg_C]
 * 00000000000D550C: mov     edx, eax
 * 00000000000D550E: push    ecx; pcchNewDestLength
 * 00000000000D550F: push    [ebp+pszFormat]; cchDest
 * 00000000000D5512: push    ecx; pszDest
 * 00000000000D5513: mov     ecx, [ebp+pszDest]
 * 00000000000D5516: call    StringVPrintfWorkerW
 * 00000000000D551B: mov     ecx, eax
 * 00000000000D551D: mov     eax, ecx
 * 00000000000D551F: pop     ebp
 * 00000000000D5520: retn
 * 00000000000D5521: mov     ecx, 80070057h
 * 00000000000D5526: jmp     short loc_D5501
 * 00000000001377A7: test    eax, eax
 * 00000000001377A9: jz      loc_D551D
 * 00000000001377AF: mov     eax, [ebp+pszDest]
 * 00000000001377B2: xor     edx, edx
 * 00000000001377B4: mov     [eax], dx
 * 00000000001377B7: jmp     loc_D551D
 */
