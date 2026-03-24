/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPAGIPBGZZ @ 0x15F684
 * Callers:
 *     _NtUserOpenWindowStation@8 @ 0x7DBDA (_NtUserOpenWindowStation@8.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_1 @ 0x15F6BC (RtlStringVPrintfWorkerW_1.c)
 */

/*
 * Hex-Rays decompilation failed for ?RtlStringCbPrintfW@@YAJPAGIPBGZZ @ 0x15F684
 * Reason: Hex-Rays returned no pseudocode for 0x15F684
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000015F684: mov     edi, edi
 * 000000000015F686: push    ebp; pszFormat
 * 000000000015F687: mov     ebp, esp
 * 000000000015F689: mov     eax, [ebp+arg_4]
 * 000000000015F68C: shr     eax, 1
 * 000000000015F68E: mov     ecx, eax
 * 000000000015F690: neg     ecx
 * 000000000015F692: sbb     ecx, ecx
 * 000000000015F694: and     ecx, 3FFFFFF3h
 * 000000000015F69A: add     ecx, 0C000000Dh
 * 000000000015F6A0: test    eax, eax
 * 000000000015F6A2: jz      short loc_15F6B8
 * 000000000015F6A4: lea     ecx, [ebp+pszDest]
 * 000000000015F6A7: mov     edx, eax
 * 000000000015F6A9: push    ecx; pcchNewDestLength
 * 000000000015F6AA: push    [ebp+cchDest]; cchDest
 * 000000000015F6AD: push    ecx; pszDest
 * 000000000015F6AE: mov     ecx, [ebp+arg_0]
 * 000000000015F6B1: call    RtlStringVPrintfWorkerW_1
 * 000000000015F6B6: mov     ecx, eax
 * 000000000015F6B8: mov     eax, ecx
 * 000000000015F6BA: pop     ebp
 * 000000000015F6BB: retn
 */
