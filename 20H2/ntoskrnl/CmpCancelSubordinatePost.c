/*
 * XREFs of CmpCancelSubordinatePost @ 0x1406BF1EC
 * Callers:
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1406836AC (CmNotifyRunDown.c)
 * Callees:
 *     CmpAddToDelayedDeref @ 0x1406BF238 (CmpAddToDelayedDeref.c)
 */

/*
 * Hex-Rays decompilation failed for CmpCancelSubordinatePost @ 0x1406BF1EC
 * Reason: Hex-Rays returned no pseudocode for 0x1406BF1EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BF1EC: sub     rsp, 28h
 * 00000001406BF1F0: add     rcx, 20h ; ' '
 * 00000001406BF1F4: mov     rax, [rcx]
 * 00000001406BF1F7: cmp     rax, rcx
 * 00000001406BF1FA: jnz     short loc_1406BF202
 * 00000001406BF1FC: add     rsp, 28h
 * 00000001406BF200: retn
 * 00000001406BF202: lea     rcx, [rax-20h]
 * 00000001406BF206: mov     r8, [rcx]
 * 00000001406BF209: cmp     [r8+8], rcx
 * 00000001406BF20D: jnz     short loc_1406BF22B
 * 00000001406BF20F: mov     rax, [rcx+8]
 * 00000001406BF213: cmp     [rax], rcx
 * 00000001406BF216: jnz     short loc_1406BF22B
 * 00000001406BF218: mov     [rax], r8
 * 00000001406BF21B: mov     [r8+8], rax
 * 00000001406BF21F: test    rdx, rdx
 * 00000001406BF222: jz      short loc_1406BF1FC
 * 00000001406BF224: call    CmpAddToDelayedDeref
 * 00000001406BF229: jmp     short loc_1406BF1FC
 * 00000001406BF22B: mov     ecx, 3
 * 00000001406BF230: int     29h; Win8: RtlFailFast(ecx)
 */
