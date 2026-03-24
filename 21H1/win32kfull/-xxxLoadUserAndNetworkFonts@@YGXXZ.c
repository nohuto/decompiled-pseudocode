/*
 * XREFs of ?xxxLoadUserAndNetworkFonts@@YGXXZ @ 0xD6E00
 * Callers:
 *     _xxxLW_LoadFonts@4 @ 0xD6E2E (_xxxLW_LoadFonts@4.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z @ 0xD6F2C (-xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxLoadUserAndNetworkFonts@@YGXXZ @ 0xD6E00
 * Reason: Hex-Rays returned no pseudocode for 0xD6E00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000D6E00: mov     edi, edi
 * 00000000000D6E02: push    ecx; unsigned __int16 *
 * 00000000000D6E03: push    ecx; unsigned int
 * 00000000000D6E04: push    ecx; unsigned int
 * 00000000000D6E05: push    38h ; '8'
 * 00000000000D6E07: pop     edx
 * 00000000000D6E08: mov     ecx, 401h
 * 00000000000D6E0D: call    ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z; xxxbEnumerateRegistryFonts(ulong,uint,ushort const *,ushort const *)
 * 00000000000D6E12: push    ecx; unsigned int
 * 00000000000D6E13: push    ecx; unsigned int
 * 00000000000D6E14: push    38h ; '8'
 * 00000000000D6E16: pop     edx
 * 00000000000D6E17: push    2
 * 00000000000D6E19: pop     ecx
 * 00000000000D6E1A: call    ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z; xxxbEnumerateRegistryFonts(ulong,uint,ushort const *,ushort const *)
 * 00000000000D6E1F: push    ecx; unsigned int
 * 00000000000D6E20: push    ecx; unsigned int
 * 00000000000D6E21: push    6
 * 00000000000D6E23: pop     edx
 * 00000000000D6E24: push    2
 * 00000000000D6E26: pop     ecx
 * 00000000000D6E27: call    ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z; xxxbEnumerateRegistryFonts(ulong,uint,ushort const *,ushort const *)
 * 00000000000D6E2C: pop     ecx
 * 00000000000D6E2D: retn
 */
