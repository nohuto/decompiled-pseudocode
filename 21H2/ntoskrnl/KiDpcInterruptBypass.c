/*
 * XREFs of KiDpcInterruptBypass @ 0x140405CB0
 * Callers:
 *     KiChainedDispatch @ 0x1403FF5C0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FFF40 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400330 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400720 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400B10 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400F00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1404044B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404048B0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140404F60 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405CF0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140406550 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140405CB0
 * Reason: Hex-Rays returned no pseudocode for 0x140405CB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405CB0: sub     rsp, 8
 * 0000000140405CB4: mov     ecx, 2
 * 0000000140405CB9: mov     cr8, rcx
 * 0000000140405CBD: sti
 * 0000000140405CBE: mov     al, [rbp-57h]
 * 0000000140405CC1: mov     rcx, gs:188h
 * 0000000140405CCA: mov     [rcx+186h], al
 * 0000000140405CD0: call    KiDispatchInterrupt
 * 0000000140405CD5: cli
 * 0000000140405CD6: add     rsp, 8
 * 0000000140405CDA: retn
 */
