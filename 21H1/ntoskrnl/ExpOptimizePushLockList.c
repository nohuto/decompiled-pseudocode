/*
 * XREFs of ExpOptimizePushLockList @ 0x14035A324
 * Callers:
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 * Callees:
 *     ExpWakePushLock @ 0x14035A6B0 (ExpWakePushLock.c)
 */

/*
 * Hex-Rays decompilation failed for ExpOptimizePushLockList @ 0x14035A324
 * Reason: Hex-Rays returned no pseudocode for 0x14035A324
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014035A324: sub     rsp, 28h
 * 000000014035A328: mov     rax, rdx
 * 000000014035A32B: mov     r9, rcx
 * 000000014035A32E: test    dl, 1
 * 000000014035A331: jz      short loc_14035A376
 * 000000014035A333: mov     rdx, rax
 * 000000014035A336: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014035A33A: mov     r8, rdx
 * 000000014035A33D: cmp     qword ptr [rdx+20h], 0
 * 000000014035A342: jnz     short loc_14035A361
 * 000000014035A344: mov     rcx, r8
 * 000000014035A347: mov     r8, [r8+18h]
 * 000000014035A34B: mov     [r8+28h], rcx
 * 000000014035A34F: mov     rcx, [r8+20h]
 * 000000014035A353: test    rcx, rcx
 * 000000014035A356: jz      short loc_14035A344
 * 000000014035A358: cmp     r8, rdx
 * 000000014035A35B: jz      short loc_14035A361
 * 000000014035A35D: mov     [rdx+20h], rcx
 * 000000014035A361: lea     rcx, [rax-4]
 * 000000014035A365: lock cmpxchg [r9], rcx
 * 000000014035A36A: jnz     short loc_14035A372
 * 000000014035A36C: add     rsp, 28h
 * 000000014035A370: retn
 * 000000014035A372: test    al, 1
 * 000000014035A374: jnz     short loc_14035A333
 * 000000014035A376: mov     rdx, rax
 * 000000014035A379: mov     rcx, r9
 * 000000014035A37C: call    ExpWakePushLock
 * 000000014035A381: jmp     short loc_14035A36C
 */
