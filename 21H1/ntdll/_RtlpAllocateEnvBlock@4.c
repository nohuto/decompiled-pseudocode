/*
 * XREFs of _RtlpAllocateEnvBlock@4 @ 0x4B2DB9CA
 * Callers:
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 *     _RtlpInitEnvironmentBlock@0 @ 0x4B2DAF42 (_RtlpInitEnvironmentBlock@0.c)
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 *     _RtlSetEnvironmentStrings@8 @ 0x4B32DDE0 (_RtlSetEnvironmentStrings@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

/*
 * Hex-Rays decompilation failed for _RtlpAllocateEnvBlock@4 @ 0x4B2DB9CA
 * Reason: Hex-Rays returned no pseudocode for 0x4B2DB9CA
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2DB9CA: cmp     ecx, 7FFFFFFFh
 * 000000004B2DB9D0: ja      short loc_4B2DB9E4
 * 000000004B2DB9D2: mov     eax, large fs:30h
 * 000000004B2DB9D8: push    ecx; Size
 * 000000004B2DB9D9: push    0; Flags
 * 000000004B2DB9DB: push    dword ptr [eax+18h]; HeapHandle
 * 000000004B2DB9DE: call    _RtlAllocateHeap@12; RtlAllocateHeap(x,x,x)
 * 000000004B2DB9E3: retn
 * 000000004B2DB9E4: xor     eax, eax
 * 000000004B2DB9E6: retn
 */
