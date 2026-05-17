/*
 * XREFs of TppCritResetThread @ 0x1800547C4
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D250 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtSetInformationObject @ 0x18009DC20 (NtSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for TppCritResetThread @ 0x1800547C4
 * Reason: Hex-Rays returned no pseudocode for 0x1800547C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800547C4: test    rcx, rcx
 * 00000001800547C7: jnz     short loc_1800547CB
 * 00000001800547C9: retn
 * 00000001800547CB: mov     [rsp+arg_18], rdi
 * 00000001800547D0: mov     [rsp+Handle], rcx
 * 00000001800547D5: push    r14
 * 00000001800547D7: sub     rsp, 20h
 * 00000001800547DB: xor     r14d, r14d
 * 00000001800547DE: lea     r8, [rsp+28h+Handle]
 * 00000001800547E3: lea     rdi, [r14-2]
 * 00000001800547E7: mov     rcx, rdi
 * 00000001800547EA: lea     r9d, [r14+8]
 * 00000001800547EE: lea     edx, [r14+5]
 * 00000001800547F2: call    NtSetInformationThread
 * 00000001800547F7: lea     r9d, [r14+4]
 * 00000001800547FB: mov     [rsp+28h+arg_10], r14d
 * 0000000180054800: lea     r8, [rsp+28h+arg_10]
 * 0000000180054805: mov     rcx, rdi
 * 0000000180054808: lea     edx, [rdi+14h]
 * 000000018005480B: call    NtSetInformationThread
 * 0000000180054810: mov     rcx, [rsp+28h+Handle]
 * 0000000180054815: lea     r9d, [r14+2]
 * 0000000180054819: lea     r8, [rsp+28h+arg_8]
 * 000000018005481E: mov     [rsp+28h+arg_8], r14w
 * 0000000180054824: lea     edx, [rdi+6]
 * 0000000180054827: call    NtSetInformationObject
 * 000000018005482C: mov     rcx, [rsp+28h+Handle]; Handle
 * 0000000180054831: call    NtClose
 * 0000000180054836: lea     r9d, [r14+8]
 * 000000018005483A: mov     [rsp+28h+Handle], r14
 * 000000018005483F: lea     r8, [rsp+28h+Handle]
 * 0000000180054844: mov     rcx, rdi
 * 0000000180054847: lea     edx, [rdi+7]
 * 000000018005484A: call    NtSetInformationThread
 * 000000018005484F: mov     rdi, [rsp+28h+arg_18]
 * 0000000180054854: add     rsp, 20h
 * 0000000180054858: pop     r14
 * 000000018005485A: retn
 */
