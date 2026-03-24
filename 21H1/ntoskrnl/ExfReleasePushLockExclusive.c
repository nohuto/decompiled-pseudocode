/*
 * XREFs of ExfReleasePushLockExclusive @ 0x14035A630
 * Callers:
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x14035A550 (ExfReleasePushLock.c)
 * Callees:
 *     ExpWakePushLock @ 0x14035A6B0 (ExpWakePushLock.c)
 */

/*
 * Hex-Rays decompilation failed for ExfReleasePushLockExclusive @ 0x14035A630
 * Reason: Hex-Rays returned no pseudocode for 0x14035A630
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014035A630: sub     rsp, 28h
 * 000000014035A634: xor     edx, edx
 * 000000014035A636: lea     eax, [rdx+1]
 * 000000014035A639: lock cmpxchg [rcx], rdx
 * 000000014035A63E: jnz     short loc_14035A646
 * 000000014035A640: add     rsp, 28h
 * 000000014035A644: retn
 * 000000014035A646: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014035A64A: mov     r8, rax
 * 000000014035A64D: and     r8d, 6
 * 000000014035A651: mov     edx, 3
 * 000000014035A656: cmp     r8, 2
 * 000000014035A65A: cmovnz  rdx, r9
 * 000000014035A65E: add     rdx, rax
 * 000000014035A661: lock cmpxchg [rcx], rdx
 * 000000014035A666: jnz     short loc_14035A646
 * 000000014035A668: cmp     r8, 2
 * 000000014035A66C: jnz     short loc_14035A640
 * 000000014035A66E: call    ExpWakePushLock
 * 000000014035A673: jmp     short loc_14035A640
 */
