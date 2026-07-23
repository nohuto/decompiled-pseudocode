/*
 * XREFs of __snprintf_s @ 0x4B2FF650
 * Callers:
 *     _RtlIncrementCorrelationVector@4 @ 0x4B3622A0 (_RtlIncrementCorrelationVector@4.c)
 * Callees:
 *     __vsnprintf_s @ 0x4B2FF680 (__vsnprintf_s.c)
 */

/*
 * Hex-Rays decompilation failed for __snprintf_s @ 0x4B2FF650
 * Reason: Hex-Rays returned no pseudocode for 0x4B2FF650
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2FF650: mov     edi, edi
 * 000000004B2FF652: push    ebp; Format
 * 000000004B2FF653: mov     ebp, esp
 * 000000004B2FF655: lea     eax, [ebp+MaxCount+4]
 * 000000004B2FF658: push    eax
 * 000000004B2FF659: push    dword ptr [ebp+MaxCount]; MaxCount
 * 000000004B2FF65C: push    dword ptr [ebp+BufferCount+4]
 * 000000004B2FF65F: push    dword ptr [ebp+BufferCount]; BufferCount
 * 000000004B2FF662: push    [ebp+Buffer]; Buffer
 * 000000004B2FF665: call    __vsnprintf_s
 * 000000004B2FF66A: add     esp, 14h
 * 000000004B2FF66D: pop     ebp
 * 000000004B2FF66E: retn
 */
