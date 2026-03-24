/*
 * XREFs of ?bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x2169C0
 * Callers:
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 * Callees:
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x2169C0
 * Reason: Hex-Rays returned no pseudocode for 0x2169C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000002169C0: xor     eax, eax
 * 00000000002169C2: inc     eax
 * 00000000002169C3: test    ecx, ecx
 * 00000000002169C5: jz      short locret_2169D6
 * 00000000002169C7: cmp     [ecx+2Ch], eax
 * 00000000002169CA: jz      short loc_2169CF
 * 00000000002169CC: xor     eax, eax
 * 00000000002169CE: retn
 * 00000000002169CF: push    0; struct _SURFOBJ *
 * 00000000002169D1: call    ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z; bCheckSurfaceRect(_SURFOBJ *,_RECTL *,_CLIPOBJ *)
 * 00000000002169D6: retn
 */
