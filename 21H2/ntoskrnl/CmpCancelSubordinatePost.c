/*
 * XREFs of CmpCancelSubordinatePost @ 0x14069C07C
 * Callers:
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x14064C750 (CmNotifyRunDown.c)
 * Callees:
 *     CmpAddToDelayedDeref @ 0x14069C0C8 (CmpAddToDelayedDeref.c)
 */

/*
 * Hex-Rays decompilation failed for CmpCancelSubordinatePost @ 0x14069C07C
 * Reason: Hex-Rays returned no pseudocode for 0x14069C07C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014069C07C: sub     rsp, 28h
 * 000000014069C080: add     rcx, 20h ; ' '
 * 000000014069C084: mov     rax, [rcx]
 * 000000014069C087: cmp     rax, rcx
 * 000000014069C08A: jnz     short loc_14069C092
 * 000000014069C08C: add     rsp, 28h
 * 000000014069C090: retn
 * 000000014069C092: lea     rcx, [rax-20h]
 * 000000014069C096: mov     r8, [rcx]
 * 000000014069C099: cmp     [r8+8], rcx
 * 000000014069C09D: jnz     short loc_14069C0BB
 * 000000014069C09F: mov     rax, [rcx+8]
 * 000000014069C0A3: cmp     [rax], rcx
 * 000000014069C0A6: jnz     short loc_14069C0BB
 * 000000014069C0A8: mov     [rax], r8
 * 000000014069C0AB: mov     [r8+8], rax
 * 000000014069C0AF: test    rdx, rdx
 * 000000014069C0B2: jz      short loc_14069C08C
 * 000000014069C0B4: call    CmpAddToDelayedDeref
 * 000000014069C0B9: jmp     short loc_14069C08C
 * 000000014069C0BB: mov     ecx, 3
 * 000000014069C0C0: int     29h; Win8: RtlFailFast(ecx)
 */
