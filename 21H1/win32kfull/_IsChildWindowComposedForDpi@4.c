/*
 * XREFs of _IsChildWindowComposedForDpi@4 @ 0x2AC2C
 * Callers:
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 * Callees:
 *     ?IsChildWindowCoordinateSpaceBoundary@@YGHPAUtagWND@@@Z @ 0x388D6 (-IsChildWindowCoordinateSpaceBoundary@@YGHPAUtagWND@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _IsChildWindowComposedForDpi@4 @ 0x2AC2C
 * Reason: Hex-Rays returned no pseudocode for 0x2AC2C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000002AC2C: mov     eax, [ecx+14h]
 * 000000000002AC2F: test    byte ptr [eax+90h], 20h
 * 000000000002AC36: jnz     short loc_2AC3B
 * 000000000002AC38: xor     eax, eax
 * 000000000002AC3A: retn
 * 000000000002AC3B: call    ?IsChildWindowCoordinateSpaceBoundary@@YGHPAUtagWND@@@Z; IsChildWindowCoordinateSpaceBoundary(tagWND *)
 * 000000000002AC40: test    eax, eax
 * 000000000002AC42: jz      short loc_2AC38
 * 000000000002AC44: xor     eax, eax
 * 000000000002AC46: inc     eax
 * 000000000002AC47: retn
 */
