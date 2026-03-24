/*
 * XREFs of KiHandleMcheck @ 0x14050CC70
 * Callers:
 *     KxMcheckAbort @ 0x140404E80 (KxMcheckAbort.c)
 * Callees:
 *     HalHandleMcheck @ 0x1404B74A0 (HalHandleMcheck.c)
 *     KiFlushCurrentRsb @ 0x140A14600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x14050CC70
 * Reason: Hex-Rays returned no pseudocode for 0x14050CC70
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014050CC70: sub     rsp, 28h
 * 000000014050CC74: call    HalHandleMcheck
 * 000000014050CC79: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 000000014050CC7F: bt      eax, 19h
 * 000000014050CC83: jnb     short loc_14050CC8A
 * 000000014050CC85: call    KiFlushCurrentRsb
 * 000000014050CC8A: lfence
 * 000000014050CC8D: add     rsp, 28h
 * 000000014050CC91: retn
 */
