/*
 * XREFs of _EditionCallAccessibilityHook@0 @ 0xF0436
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionCallAccessibilityHook@0 @ 0xF0436
 * Reason: Hex-Rays returned no pseudocode for 0xF0436
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F0436: mov     eax, ds:__imp__gptiCurrent
 * 00000000000F043B: mov     ecx, [eax]
 * 00000000000F043D: mov     eax, [ecx+0FCh]
 * 00000000000F0443: mov     eax, [eax]
 * 00000000000F0445: mov     eax, [eax+8]
 * 00000000000F0448: or      eax, [ecx+174h]
 * 00000000000F044E: test    eax, 800h
 * 00000000000F0453: jz      short loc_F0465
 * 00000000000F0455: push    0Ah; unsigned int
 * 00000000000F0457: push    0; int
 * 00000000000F0459: push    2
 * 00000000000F045B: pop     edx
 * 00000000000F045C: push    0Bh
 * 00000000000F045E: pop     ecx
 * 00000000000F045F: call    ?xxxCallHook@@YGHHIJH@Z; xxxCallHook(int,uint,long,int)
 * 00000000000F0464: retn
 * 00000000000F0465: xor     eax, eax
 * 00000000000F0467: retn
 */
