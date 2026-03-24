/*
 * XREFs of HvlNotifyLongSpinWait @ 0x140390140
 * Callers:
 *     KeRemoveQueueEx @ 0x1402047D0 (KeRemoveQueueEx.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14021D170 (ExpAcquireSpinLockExclusive.c)
 *     KxFlushEntireTb @ 0x14022F980 (KxFlushEntireTb.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402315C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiZeroLargePages @ 0x140232520 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x140234070 (MiMapPagesToZero.c)
 *     KeRemovePriQueue @ 0x1402421D0 (KeRemovePriQueue.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLockOwnedProtoPage @ 0x14031A320 (MiLockOwnedProtoPage.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     KeFlushMultipleRangeTb @ 0x14033B620 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendRequestEx @ 0x14033B9A0 (KiIpiSendRequestEx.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403582C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiIdleLoop @ 0x140402950 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x1404065E0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x1404067C0 (SwapContext.c)
 *     PopHandleNextState @ 0x1409930D0 (PopHandleNextState.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403904C0 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlNotifyLongSpinWait(unsigned int a1)
{
  return HvcallInitiateHypercall(65544LL, a1, 0LL);
}
