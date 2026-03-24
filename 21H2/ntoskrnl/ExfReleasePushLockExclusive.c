/*
 * XREFs of ExfReleasePushLockExclusive @ 0x1402F1520
 * Callers:
 *     ExfAcquireReleasePushLockExclusive @ 0x1402C3044 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1402F1440 (ExfReleasePushLock.c)
 * Callees:
 *     ExpWakePushLock @ 0x1402F15A0 (ExpWakePushLock.c)
 */

/*
 * Hex-Rays decompilation failed for ExfReleasePushLockExclusive @ 0x1402F1520
 * Reason: Hex-Rays returned no pseudocode for 0x1402F1520
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402F1520: sub     rsp, 28h
 * 00000001402F1524: xor     edx, edx
 * 00000001402F1526: lea     eax, [rdx+1]
 * 00000001402F1529: lock cmpxchg [rcx], rdx
 * 00000001402F152E: jnz     short loc_1402F1536
 * 00000001402F1530: add     rsp, 28h
 * 00000001402F1534: retn
 * 00000001402F1536: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001402F153A: mov     r8, rax
 * 00000001402F153D: and     r8d, 6
 * 00000001402F1541: mov     edx, 3
 * 00000001402F1546: cmp     r8, 2
 * 00000001402F154A: cmovnz  rdx, r9
 * 00000001402F154E: add     rdx, rax
 * 00000001402F1551: lock cmpxchg [rcx], rdx
 * 00000001402F1556: jnz     short loc_1402F1536
 * 00000001402F1558: cmp     r8, 2
 * 00000001402F155C: jnz     short loc_1402F1530
 * 00000001402F155E: call    ExpWakePushLock
 * 00000001402F1563: jmp     short loc_1402F1530
 */
