/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140516BD8
 * Callers:
 *     PsGetThreadProperty @ 0x1402104F0 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x1402117D0 (IopQueueIrpToFileObject.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiCallInterruptServiceRoutine @ 0x140268950 (KiCallInterruptServiceRoutine.c)
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C8970 (PpmUpdatePerformanceFeedback.c)
 *     KeReleaseSpinLock @ 0x1402CE500 (KeReleaseSpinLock.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x1402EBB00 (KiExecuteAllDpcs.c)
 *     NtCancelTimer @ 0x1402ED350 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x14035E4B0 (IopDequeueIrpFromThread.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409E60C0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405AB678 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
