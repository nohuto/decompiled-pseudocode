/*
 * XREFs of KiDpcInterruptBypass @ 0x1404036E0
 * Callers:
 *     KiChainedDispatch @ 0x1403FD300 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FDC50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FE010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403FE790 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403FEB50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140401FC0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140402390 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140403F40 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1404036E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404036E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404036E0: sub     rsp, 8
 * 00000001404036E4: mov     ecx, 2
 * 00000001404036E9: mov     cr8, rcx
 * 00000001404036ED: sti
 * 00000001404036EE: mov     al, [rbp-57h]
 * 00000001404036F1: mov     rcx, gs:188h
 * 00000001404036FA: mov     [rcx+186h], al
 * 0000000140403700: call    KiDispatchInterrupt
 * 0000000140403705: cli
 * 0000000140403706: add     rsp, 8
 * 000000014040370A: retn
 */
