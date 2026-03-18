/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x14056E8CC
 * Callers:
 *     IopQueueIrpToFileObject @ 0x140211BD0 (IopQueueIrpToFileObject.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KdPollBreakIn @ 0x1402223B0 (KdPollBreakIn.c)
 *     PsGetThreadProperty @ 0x140223C50 (PsGetThreadProperty.c)
 *     KiCallInterruptServiceRoutine @ 0x140294110 (KiCallInterruptServiceRoutine.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402A7370 (IopCancelIrpsInFileObjectList.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403072A0 (PpmUpdatePerformanceFeedback.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     IopDequeueIrpFromThread @ 0x1403489B0 (IopDequeueIrpFromThread.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140A9E300 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140632CBC (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
