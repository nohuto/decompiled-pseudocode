/*
 * XREFs of ?bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z @ 0x237F88
 * Callers:
 *     ?bFindFirstSegment@XCLIPOBJ@@IAEHXZ @ 0x237C98 (-bFindFirstSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IAEHXZ @ 0x237F2B (-bFindNextSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bRecordSegment@XCLIPOBJ@@IAEHXZ @ 0x23802E (-bRecordSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 * Callees:
 *     ?vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x238330 (-vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z.c)
 *     ?vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x2383C7 (-vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z @ 0x237F88
 * Reason: Hex-Rays returned no pseudocode for 0x237F88
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000237F88: mov     edi, edi
 * 0000000000237F8A: push    ebp; struct _POINTL *
 * 0000000000237F8B: mov     ebp, esp
 * 0000000000237F8D: mov     ecx, [ecx+78h]
 * 0000000000237F90: add     ecx, 30h ; '0'
 * 0000000000237F93: mov     eax, [ecx]
 * 0000000000237F95: test    al, 20h
 * 0000000000237F97: jz      short loc_237FA1
 * 0000000000237F99: xor     edx, edx
 * 0000000000237F9B: inc     edx
 * 0000000000237F9C: sub     edx, [ebp+arg_0]
 * 0000000000237F9F: jmp     short loc_237FA4
 * 0000000000237FA1: mov     edx, [ebp+arg_0]
 * 0000000000237FA4: push    [ebp+arg_C]; struct _POINTL *
 * 0000000000237FA7: push    [ebp+arg_8]; int *
 * 0000000000237FAA: push    [ebp+arg_4]; struct DDA_CLIPLINE *
 * 0000000000237FAD: test    al, 5
 * 0000000000237FAF: jnz     short loc_237FB8
 * 0000000000237FB1: call    ?vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z; vIntersectVertical(DDA_CLIPLINE *,long,_POINTL *,_POINTL *,long *)
 * 0000000000237FB6: jmp     short loc_237FBD
 * 0000000000237FB8: call    ?vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z; vIntersectHorizontal(DDA_CLIPLINE *,long,_POINTL *,_POINTL *,long *)
 * 0000000000237FBD: xor     eax, eax
 * 0000000000237FBF: inc     eax
 * 0000000000237FC0: pop     ebp
 * 0000000000237FC1: retn    10h
 */
