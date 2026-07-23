/*
 * XREFs of __snwprintf_s @ 0x4B2FF750
 * Callers:
 *     _RtlQueryAtomInAtomTable@24 @ 0x4B2A9E90 (_RtlQueryAtomInAtomTable@24.c)
 * Callees:
 *     __vsnwprintf_s @ 0x4B2FF780 (__vsnwprintf_s.c)
 */

/*
 * Hex-Rays decompilation failed for __snwprintf_s @ 0x4B2FF750
 * Reason: Hex-Rays returned no pseudocode for 0x4B2FF750
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2FF750: mov     edi, edi
 * 000000004B2FF752: push    ebp; Format
 * 000000004B2FF753: mov     ebp, esp
 * 000000004B2FF755: lea     eax, [ebp+MaxCount+4]
 * 000000004B2FF758: push    eax
 * 000000004B2FF759: push    dword ptr [ebp+MaxCount]; MaxCount
 * 000000004B2FF75C: push    dword ptr [ebp+BufferCount+4]
 * 000000004B2FF75F: push    dword ptr [ebp+BufferCount]; BufferCount
 * 000000004B2FF762: push    [ebp+Buffer]; Buffer
 * 000000004B2FF765: call    __vsnwprintf_s
 * 000000004B2FF76A: add     esp, 14h
 * 000000004B2FF76D: pop     ebp
 * 000000004B2FF76E: retn
 */
