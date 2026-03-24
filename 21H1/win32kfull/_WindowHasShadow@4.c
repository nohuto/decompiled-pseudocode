/*
 * XREFs of _WindowHasShadow@4 @ 0x1FAEE
 * Callers:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _NtUserSetLayeredWindowAttributes@16 @ 0x1FA2E (_NtUserSetLayeredWindowAttributes@16.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A (-FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _WindowHasShadow@4 @ 0x1FAEE
 * Reason: Hex-Rays returned no pseudocode for 0x1FAEE
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000001FAEE: mov     eax, [ecx+14h]
 * 000000000001FAF1: xor     edx, edx
 * 000000000001FAF3: test    byte ptr [eax+17h], 10h
 * 000000000001FAF7: jz      short loc_1FB02
 * 000000000001FAF9: call    ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z; FindShadow(tagWND *)
 * 000000000001FAFE: test    eax, eax
 * 000000000001FB00: jnz     short loc_1FB05
 * 000000000001FB02: mov     eax, edx
 * 000000000001FB04: retn
 * 000000000001FB05: xor     edx, edx
 * 000000000001FB07: inc     edx
 * 000000000001FB08: jmp     short loc_1FB02
 */
