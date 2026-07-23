/*
 * XREFs of _RtlpRemoveInvertedFunctionTableEntry@8 @ 0x4B2E6870
 * Callers:
 *     _RtlxRemoveInvertedFunctionTable@8 @ 0x4B2E6831 (_RtlxRemoveInvertedFunctionTable@8.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

/*
 * Hex-Rays decompilation failed for _RtlpRemoveInvertedFunctionTableEntry@8 @ 0x4B2E6870
 * Reason: Hex-Rays returned no pseudocode for 0x4B2E6870
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2E6870: mov     edi, edi
 * 000000004B2E6872: lock inc ds:dword_4B3A9368
 * 000000004B2E6879: mov     eax, ds:_LdrpInvertedFunctionTable
 * 000000004B2E687E: cmp     eax, 2
 * 000000004B2E6881: jz      short loc_4B2E68AC
 * 000000004B2E6883: sub     eax, edx
 * 000000004B2E6885: mov     ecx, edx
 * 000000004B2E6887: shl     eax, 4
 * 000000004B2E688A: shl     ecx, 4
 * 000000004B2E688D: sub     eax, 10h
 * 000000004B2E6890: push    eax; Size
 * 000000004B2E6891: lea     eax, unk_4B3A9380[ecx]
 * 000000004B2E6897: push    eax; Src
 * 000000004B2E6898: lea     eax, dword_4B3A9370[ecx]
 * 000000004B2E689E: push    eax; void *
 * 000000004B2E689F: call    _memmove
 * 000000004B2E68A4: mov     eax, ds:_LdrpInvertedFunctionTable
 * 000000004B2E68A9: add     esp, 0Ch
 * 000000004B2E68AC: dec     eax
 * 000000004B2E68AD: mov     ds:_LdrpInvertedFunctionTable, eax
 * 000000004B2E68B2: lock inc ds:dword_4B3A9368
 * 000000004B2E68B9: retn
 */
