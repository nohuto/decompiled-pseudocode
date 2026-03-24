/*
 * XREFs of KiDpcInterruptBypass @ 0x1403FD790
 * Callers:
 *     KiChainedDispatch @ 0x1403F8370 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403F8B90 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F8E20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F90B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403F9340 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403F95C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1403FC540 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FC7E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FCD20 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FD7D0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x1403FDEC0 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1403FD790
 * Reason: Hex-Rays returned no pseudocode for 0x1403FD790
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FD790: sub     rsp, 8
 * 00000001403FD794: mov     ecx, 2
 * 00000001403FD799: mov     cr8, rcx
 * 00000001403FD79D: sti
 * 00000001403FD79E: mov     al, [rbp-57h]
 * 00000001403FD7A1: mov     rcx, gs:188h
 * 00000001403FD7AA: mov     [rcx+186h], al
 * 00000001403FD7B0: call    KiDispatchInterrupt
 * 00000001403FD7B5: cli
 * 00000001403FD7B6: add     rsp, 8
 * 00000001403FD7BA: retn
 */
