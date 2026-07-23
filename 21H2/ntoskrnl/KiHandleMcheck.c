/*
 * XREFs of KiHandleMcheck @ 0x140512960
 * Callers:
 *     KxMcheckAbort @ 0x14040F200 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413E80 (KiFlushCurrentRsb.c)
 *     HalHandleMcheck @ 0x1404BCCA0 (HalHandleMcheck.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x140512960
 * Reason: Hex-Rays returned no pseudocode for 0x140512960
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140512960: sub     rsp, 28h
 * 0000000140512964: call    HalHandleMcheck
 * 0000000140512969: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140512970: mov     rcx, 20000000000h
 * 000000014051297A: test    rcx, rax
 * 000000014051297D: jz      short loc_140512984
 * 000000014051297F: call    KiFlushCurrentRsb
 * 0000000140512984: lfence
 * 0000000140512987: add     rsp, 28h
 * 000000014051298B: retn
 */
