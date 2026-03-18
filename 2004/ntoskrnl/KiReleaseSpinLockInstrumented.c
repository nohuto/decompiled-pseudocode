/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140511528
 * Callers:
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140218E10 (PpmUpdatePerformanceFeedback.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x140290C50 (IopDequeueIrpFromThread.c)
 *     KiExecuteAllDpcs @ 0x14029A020 (KiExecuteAllDpcs.c)
 *     KiCallInterruptServiceRoutine @ 0x1402DE090 (KiCallInterruptServiceRoutine.c)
 *     NtCancelTimer @ 0x1402FFD50 (NtCancelTimer.c)
 *     NtAssociateWaitCompletionPacket @ 0x14030EF50 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSpinLock @ 0x140322B60 (KeReleaseSpinLock.c)
 *     PsGetThreadProperty @ 0x1403271E0 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x140327990 (IopQueueIrpToFileObject.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409E20B0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A5F9C (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
