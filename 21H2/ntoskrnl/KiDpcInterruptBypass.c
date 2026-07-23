/*
 * XREFs of KiDpcInterruptBypass @ 0x140405E90
 * Callers:
 *     KiChainedDispatch @ 0x1403FF7A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140400120 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400510 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400900 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400CF0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404010E0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140404690 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140404A90 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140406730 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140405E90
 * Reason: Hex-Rays returned no pseudocode for 0x140405E90
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405E90: sub     rsp, 8
 * 0000000140405E94: mov     ecx, 2
 * 0000000140405E99: mov     cr8, rcx
 * 0000000140405E9D: sti
 * 0000000140405E9E: mov     al, [rbp-57h]
 * 0000000140405EA1: mov     rcx, gs:188h
 * 0000000140405EAA: mov     [rcx+186h], al
 * 0000000140405EB0: call    KiDispatchInterrupt
 * 0000000140405EB5: cli
 * 0000000140405EB6: add     rsp, 8
 * 0000000140405EBA: retn
 */
