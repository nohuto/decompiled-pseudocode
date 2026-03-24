/*
 * XREFs of KiHandleMcheck @ 0x140510BF0
 * Callers:
 *     KxMcheckAbort @ 0x14040C840 (KxMcheckAbort.c)
 * Callees:
 *     HalHandleMcheck @ 0x1404BB0A0 (HalHandleMcheck.c)
 *     KiFlushCurrentRsb @ 0x140A1A740 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x140510BF0
 * Reason: Hex-Rays returned no pseudocode for 0x140510BF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140510BF0: sub     rsp, 28h
 * 0000000140510BF4: call    HalHandleMcheck
 * 0000000140510BF9: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 0000000140510BFF: bt      eax, 19h
 * 0000000140510C03: jnb     short loc_140510C0A
 * 0000000140510C05: call    KiFlushCurrentRsb
 * 0000000140510C0A: lfence
 * 0000000140510C0D: add     rsp, 28h
 * 0000000140510C11: retn
 */
