/*
 * XREFs of HvlNotifyLongSpinWait @ 0x14038FC70
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     KeRemovePriQueue @ 0x14028E810 (KeRemovePriQueue.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiIpiSendRequestEx @ 0x1402BF9B0 (KiIpiSendRequestEx.c)
 *     KeFlushMultipleRangeTb @ 0x1402BFBA0 (KeFlushMultipleRangeTb.c)
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x1402C2890 (MiMapPagesToZero.c)
 *     MiLockOwnedProtoPage @ 0x1402CABD0 (MiLockOwnedProtoPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KxFlushEntireTb @ 0x1402EA300 (KxFlushEntireTb.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiIdleLoop @ 0x140400500 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x140403FD0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 *     PopHandleNextState @ 0x1409960D0 (PopHandleNextState.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FFF0 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlNotifyLongSpinWait(unsigned int a1)
{
  return HvcallInitiateHypercall(65544LL, a1, 0LL);
}
