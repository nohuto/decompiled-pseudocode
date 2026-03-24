/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140516998
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402043D0 (IoRemoveIoCompletion.c)
 *     KiInsertQueueDpc @ 0x14021FD60 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140224070 (PpmUpdatePerformanceFeedback.c)
 *     KeReleaseSpinLock @ 0x140229C10 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x1402472B0 (KiExecuteAllDpcs.c)
 *     NtCancelTimer @ 0x140248B00 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     KiCallInterruptServiceRoutine @ 0x14027A9B0 (KiCallInterruptServiceRoutine.c)
 *     PsGetThreadProperty @ 0x140292580 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x140293860 (IopQueueIrpToFileObject.c)
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x14034B290 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x140353760 (IopDequeueIrpFromThread.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409E50C0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405AB448 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
