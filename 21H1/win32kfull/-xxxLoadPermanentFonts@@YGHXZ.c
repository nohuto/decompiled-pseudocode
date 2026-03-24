/*
 * XREFs of ?xxxLoadPermanentFonts@@YGHXZ @ 0xD6ED6
 * Callers:
 *     _xxxLW_LoadFonts@4 @ 0xD6E2E (_xxxLW_LoadFonts@4.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z @ 0xD6F2C (-xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxLoadPermanentFonts@@YGHXZ @ 0xD6ED6
 * Reason: Hex-Rays returned no pseudocode for 0xD6ED6
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000D6ED6: cmp     ?gbPermanentFontsLoaded@@3HA, 0; int gbPermanentFontsLoaded
 * 00000000000D6EDD: push    esi; unsigned __int16 *
 * 00000000000D6EDE: jz      short loc_D6EE5
 * 00000000000D6EE0: xor     eax, eax
 * 00000000000D6EE2: inc     eax
 * 00000000000D6EE3: pop     esi
 * 00000000000D6EE4: retn
 * 00000000000D6EE5: call    ds:__imp__PsGetCurrentProcess@0; PsGetCurrentProcess()
 * 00000000000D6EEB: mov     ecx, ds:__imp__gpepCSRSS
 * 00000000000D6EF1: cmp     eax, [ecx]
 * 00000000000D6EF3: jnz     short loc_D6F04
 * 00000000000D6EF5: push    ecx; unsigned int
 * 00000000000D6EF6: push    ecx; unsigned int
 * 00000000000D6EF7: push    36h ; '6'
 * 00000000000D6EF9: pop     edx
 * 00000000000D6EFA: mov     ecx, 80000000h
 * 00000000000D6EFF: call    ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z; xxxbEnumerateRegistryFonts(ulong,uint,ushort const *,ushort const *)
 * 00000000000D6F04: push    ecx; unsigned int
 * 00000000000D6F05: push    ecx; unsigned int
 * 00000000000D6F06: xor     esi, esi
 * 00000000000D6F08: push    6
 * 00000000000D6F0A: inc     esi
 * 00000000000D6F0B: pop     edx
 * 00000000000D6F0C: mov     ecx, esi
 * 00000000000D6F0E: call    ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z; xxxbEnumerateRegistryFonts(ulong,uint,ushort const *,ushort const *)
 * 00000000000D6F13: test    eax, eax
 * 00000000000D6F15: jz      short loc_D6F23
 * 00000000000D6F17: push    ecx; unsigned int
 * 00000000000D6F18: push    ecx; unsigned int
 * 00000000000D6F19: push    39h ; '9'
 * 00000000000D6F1B: pop     edx
 * 00000000000D6F1C: mov     ecx, esi
 * 00000000000D6F1E: call    ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z; xxxbEnumerateRegistryFonts(ulong,uint,ushort const *,ushort const *)
 * 00000000000D6F23: mov     ?gbPermanentFontsLoaded@@3HA, esi; int gbPermanentFontsLoaded
 * 00000000000D6F29: pop     esi
 * 00000000000D6F2A: retn
 */
