/*
 * XREFs of __vswprintf @ 0x4B2F7740
 * Callers:
 *     <none>
 * Callees:
 *     __vswprintf_l @ 0x4B2F775A (__vswprintf_l.c)
 */

/*
 * Hex-Rays decompilation failed for __vswprintf @ 0x4B2F7740
 * Reason: Hex-Rays returned no pseudocode for 0x4B2F7740
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2F7740: mov     edi, edi
 * 000000004B2F7742: push    ebp; Locale
 * 000000004B2F7743: mov     ebp, esp
 * 000000004B2F7745: push    dword ptr [ebp+BufferCount+4]; Format
 * 000000004B2F7748: push    0
 * 000000004B2F774A: push    dword ptr [ebp+BufferCount]; BufferCount
 * 000000004B2F774D: push    [ebp+Buffer]; Buffer
 * 000000004B2F7750: call    __vswprintf_l
 * 000000004B2F7755: add     esp, 10h
 * 000000004B2F7758: pop     ebp
 * 000000004B2F7759: retn
 */
