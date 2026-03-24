/*
 * XREFs of KiHandleMcheck @ 0x140512720
 * Callers:
 *     KxMcheckAbort @ 0x14040F100 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413D80 (KiFlushCurrentRsb.c)
 *     HalHandleMcheck @ 0x1404BCA60 (HalHandleMcheck.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x140512720
 * Reason: Hex-Rays returned no pseudocode for 0x140512720
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140512720: sub     rsp, 28h
 * 0000000140512724: call    HalHandleMcheck
 * 0000000140512729: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140512730: mov     rcx, 20000000000h
 * 000000014051273A: test    rcx, rax
 * 000000014051273D: jz      short loc_140512744
 * 000000014051273F: call    KiFlushCurrentRsb
 * 0000000140512744: lfence
 * 0000000140512747: add     rsp, 28h
 * 000000014051274B: retn
 */
