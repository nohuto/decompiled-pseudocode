/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140510ED8
 * Callers:
 *     KiExecuteAllDpcs @ 0x140207510 (KiExecuteAllDpcs.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x1402543D0 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140271E60 (PpmUpdatePerformanceFeedback.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CD580 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSpinLock @ 0x1402E7EE0 (KeReleaseSpinLock.c)
 *     PsGetThreadProperty @ 0x1402ED8B0 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x1402EE060 (IopQueueIrpToFileObject.c)
 *     KiCallInterruptServiceRoutine @ 0x140327EB0 (KiCallInterruptServiceRoutine.c)
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409E2050 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A58AC (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
