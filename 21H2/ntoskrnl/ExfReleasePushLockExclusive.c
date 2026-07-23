/*
 * XREFs of ExfReleasePushLockExclusive @ 0x1402FC270
 * Callers:
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1402FC190 (ExfReleasePushLock.c)
 * Callees:
 *     ExpWakePushLock @ 0x1402FC2F0 (ExpWakePushLock.c)
 */

/*
 * Hex-Rays decompilation failed for ExfReleasePushLockExclusive @ 0x1402FC270
 * Reason: Hex-Rays returned no pseudocode for 0x1402FC270
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402FC270: sub     rsp, 28h
 * 00000001402FC274: xor     edx, edx
 * 00000001402FC276: lea     eax, [rdx+1]
 * 00000001402FC279: lock cmpxchg [rcx], rdx
 * 00000001402FC27E: jnz     short loc_1402FC286
 * 00000001402FC280: add     rsp, 28h
 * 00000001402FC284: retn
 * 00000001402FC286: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001402FC28A: mov     r8, rax
 * 00000001402FC28D: and     r8d, 6
 * 00000001402FC291: mov     edx, 3
 * 00000001402FC296: cmp     r8, 2
 * 00000001402FC29A: cmovnz  rdx, r9
 * 00000001402FC29E: add     rdx, rax
 * 00000001402FC2A1: lock cmpxchg [rcx], rdx
 * 00000001402FC2A6: jnz     short loc_1402FC286
 * 00000001402FC2A8: cmp     r8, 2
 * 00000001402FC2AC: jnz     short loc_1402FC280
 * 00000001402FC2AE: call    ExpWakePushLock
 * 00000001402FC2B3: jmp     short loc_1402FC280
 */
