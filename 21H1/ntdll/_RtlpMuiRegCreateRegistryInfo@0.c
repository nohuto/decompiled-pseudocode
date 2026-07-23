/*
 * XREFs of _RtlpMuiRegCreateRegistryInfo@0 @ 0x4B2ADC00
 * Callers:
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

/*
 * Hex-Rays decompilation failed for _RtlpMuiRegCreateRegistryInfo@0 @ 0x4B2ADC00
 * Reason: Hex-Rays returned no pseudocode for 0x4B2ADC00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2ADC00: mov     eax, large fs:30h
 * 000000004B2ADC06: push    64h ; 'd'; Size
 * 000000004B2ADC08: push    8; Flags
 * 000000004B2ADC0A: push    dword ptr [eax+18h]; HeapHandle
 * 000000004B2ADC0D: call    _RtlAllocateHeap@12; RtlAllocateHeap(x,x,x)
 * 000000004B2ADC12: test    eax, eax
 * 000000004B2ADC14: jz      short loc_4B2ADC1D
 * 000000004B2ADC16: or      dword ptr [eax], 400h
 * 000000004B2ADC1C: retn
 * 000000004B2ADC1D: xor     eax, eax
 * 000000004B2ADC1F: retn
 */
