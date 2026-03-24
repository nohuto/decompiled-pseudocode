/*
 * XREFs of ?vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z @ 0x23838E
 * Callers:
 *     ?bFindFirstSegment@XCLIPOBJ@@IAEHXZ @ 0x237C98 (-bFindFirstSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 * Callees:
 *     ?vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x238330 (-vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z.c)
 *     ?vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x2383C7 (-vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z @ 0x23838E
 * Reason: Hex-Rays returned no pseudocode for 0x23838E
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000023838E: mov     edi, edi
 * 0000000000238390: push    ebp; struct _POINTL *
 * 0000000000238391: mov     ebp, esp
 * 0000000000238393: mov     ecx, [ecx+78h]
 * 0000000000238396: add     ecx, 30h ; '0'
 * 0000000000238399: mov     eax, [ecx]
 * 000000000023839B: test    al, 8
 * 000000000023839D: jz      short loc_2383A7
 * 000000000023839F: xor     edx, edx
 * 00000000002383A1: inc     edx
 * 00000000002383A2: sub     edx, [ebp+arg_0]
 * 00000000002383A5: jmp     short loc_2383AA
 * 00000000002383A7: mov     edx, [ebp+arg_0]
 * 00000000002383AA: push    [ebp+arg_C]; struct _POINTL *
 * 00000000002383AD: push    [ebp+arg_8]; int
 * 00000000002383B0: push    [ebp+arg_4]; struct DDA_CLIPLINE *
 * 00000000002383B3: test    al, 5
 * 00000000002383B5: jnz     short loc_2383BE
 * 00000000002383B7: call    ?vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z; vIntersectHorizontal(DDA_CLIPLINE *,long,_POINTL *,_POINTL *,long *)
 * 00000000002383BC: jmp     short loc_2383C3
 * 00000000002383BE: call    ?vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z; vIntersectVertical(DDA_CLIPLINE *,long,_POINTL *,_POINTL *,long *)
 * 00000000002383C3: pop     ebp
 * 00000000002383C4: retn    10h
 */
