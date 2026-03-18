/*
 * XREFs of HvlNotifyLongSpinWait @ 0x14039D930
 * Callers:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x140273EE0 (MiLockOwnedProtoPage.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KiWaitForContextSwap @ 0x140299240 (KiWaitForContextSwap.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendRequestEx @ 0x1402F42D4 (KiIpiSendRequestEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiIdleLoop @ 0x140424300 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x140428BA0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x140428D90 (SwapContext.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlNotifyLongSpinWait(unsigned int a1)
{
  return HvcallInitiateHypercall(65544LL, a1, 0LL);
}
