/*
 * XREFs of ?CanPointStartResize@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179A47
 * Callers:
 *     ?DoesPointSnapToTopLevelWindow@@YGHPAUtagWND@@0PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179C2F (-DoesPointSnapToTopLevelWindow@@YGHPAUtagWND@@0PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 * Callees:
 *     ?DoesPointSnapToBorder@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179BB8 (-DoesPointSnapToBorder@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?CanPointStartResize@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179A47
 * Reason: Hex-Rays returned no pseudocode for 0x179A47
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000179A47: mov     edi, edi
 * 0000000000179A49: push    ebp; struct tagPOINT
 * 0000000000179A4A: mov     ebp, esp
 * 0000000000179A4C: mov     eax, [ecx+14h]
 * 0000000000179A4F: test    byte ptr [eax+17h], 1
 * 0000000000179A53: jnz     short loc_179A6F
 * 0000000000179A55: test    byte ptr [eax+16h], 4
 * 0000000000179A59: jz      short loc_179A6F
 * 0000000000179A5B: push    [ebp+arg_4]; struct tagTOUCHTARGETINGCONTACT *
 * 0000000000179A5E: push    [ebp+arg_0]; struct tagWND *
 * 0000000000179A61: call    ?DoesPointSnapToBorder@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z; DoesPointSnapToBorder(tagWND *,tagTOUCHTARGETINGCONTACT *,tagPOINT)
 * 0000000000179A66: test    eax, eax
 * 0000000000179A68: jz      short loc_179A6F
 * 0000000000179A6A: xor     eax, eax
 * 0000000000179A6C: inc     eax
 * 0000000000179A6D: jmp     short loc_179A71
 * 0000000000179A6F: xor     eax, eax
 * 0000000000179A71: pop     ebp
 * 0000000000179A72: retn    8
 */
