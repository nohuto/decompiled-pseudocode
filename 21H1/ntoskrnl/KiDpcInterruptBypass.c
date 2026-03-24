/*
 * XREFs of KiDpcInterruptBypass @ 0x1403FC500
 * Callers:
 *     KiChainedDispatch @ 0x1403F70E0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403F7900 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F7B90 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F7E20 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403F80B0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403F8330 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403F8E10 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1403FB2B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FB550 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FC540 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x1403FCC30 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1403FC500
 * Reason: Hex-Rays returned no pseudocode for 0x1403FC500
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FC500: sub     rsp, 8
 * 00000001403FC504: mov     ecx, 2
 * 00000001403FC509: mov     cr8, rcx
 * 00000001403FC50D: sti
 * 00000001403FC50E: mov     al, [rbp-57h]
 * 00000001403FC511: mov     rcx, gs:188h
 * 00000001403FC51A: mov     [rcx+186h], al
 * 00000001403FC520: call    KiDispatchInterrupt
 * 00000001403FC525: cli
 * 00000001403FC526: add     rsp, 8
 * 00000001403FC52A: retn
 */
