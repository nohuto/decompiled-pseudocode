/*
 * XREFs of TppCritResetThread @ 0x180054774
 * Callers:
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009CFB0 (NtSetInformationThread.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtSetInformationObject @ 0x18009D980 (NtSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for TppCritResetThread @ 0x180054774
 * Reason: Hex-Rays returned no pseudocode for 0x180054774
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180054774: test    rcx, rcx
 * 0000000180054777: jnz     short loc_18005477B
 * 0000000180054779: retn
 * 000000018005477B: mov     [rsp+arg_18], rdi
 * 0000000180054780: mov     [rsp+Handle], rcx
 * 0000000180054785: push    r14
 * 0000000180054787: sub     rsp, 20h
 * 000000018005478B: xor     r14d, r14d
 * 000000018005478E: lea     r8, [rsp+28h+Handle]
 * 0000000180054793: lea     rdi, [r14-2]
 * 0000000180054797: mov     rcx, rdi
 * 000000018005479A: lea     r9d, [r14+8]
 * 000000018005479E: lea     edx, [r14+5]
 * 00000001800547A2: call    NtSetInformationThread
 * 00000001800547A7: lea     r9d, [r14+4]
 * 00000001800547AB: mov     [rsp+28h+arg_10], r14d
 * 00000001800547B0: lea     r8, [rsp+28h+arg_10]
 * 00000001800547B5: mov     rcx, rdi
 * 00000001800547B8: lea     edx, [rdi+14h]
 * 00000001800547BB: call    NtSetInformationThread
 * 00000001800547C0: mov     rcx, [rsp+28h+Handle]
 * 00000001800547C5: lea     r9d, [r14+2]
 * 00000001800547C9: lea     r8, [rsp+28h+arg_8]
 * 00000001800547CE: mov     [rsp+28h+arg_8], r14w
 * 00000001800547D4: lea     edx, [rdi+6]
 * 00000001800547D7: call    NtSetInformationObject
 * 00000001800547DC: mov     rcx, [rsp+28h+Handle]; Handle
 * 00000001800547E1: call    NtClose
 * 00000001800547E6: lea     r9d, [r14+8]
 * 00000001800547EA: mov     [rsp+28h+Handle], r14
 * 00000001800547EF: lea     r8, [rsp+28h+Handle]
 * 00000001800547F4: mov     rcx, rdi
 * 00000001800547F7: lea     edx, [rdi+7]
 * 00000001800547FA: call    NtSetInformationThread
 * 00000001800547FF: mov     rdi, [rsp+28h+arg_18]
 * 0000000180054804: add     rsp, 20h
 * 0000000180054808: pop     r14
 * 000000018005480A: retn
 */
