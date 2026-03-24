/*
 * XREFs of KiHandleMcheck @ 0x14050D2C0
 * Callers:
 *     KxMcheckAbort @ 0x140406180 (KxMcheckAbort.c)
 * Callees:
 *     HalHandleMcheck @ 0x1404B7B80 (HalHandleMcheck.c)
 *     KiFlushCurrentRsb @ 0x140A14600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x14050D2C0
 * Reason: Hex-Rays returned no pseudocode for 0x14050D2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014050D2C0: sub     rsp, 28h
 * 000000014050D2C4: call    HalHandleMcheck
 * 000000014050D2C9: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 000000014050D2CF: bt      eax, 19h
 * 000000014050D2D3: jnb     short loc_14050D2DA
 * 000000014050D2D5: call    KiFlushCurrentRsb
 * 000000014050D2DA: lfence
 * 000000014050D2DD: add     rsp, 28h
 * 000000014050D2E1: retn
 */
