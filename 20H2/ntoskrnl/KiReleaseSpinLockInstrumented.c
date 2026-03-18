/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140514E58
 * Callers:
 *     IoRemoveIoCompletion @ 0x140207710 (IoRemoveIoCompletion.c)
 *     IopDequeueIrpFromThread @ 0x14021B3A0 (IopDequeueIrpFromThread.c)
 *     KeReleaseSpinLock @ 0x14021E6F0 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140283880 (PpmUpdatePerformanceFeedback.c)
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     KiExecuteAllDpcs @ 0x14028B270 (KiExecuteAllDpcs.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402F58B0 (NtAssociateWaitCompletionPacket.c)
 *     PsGetThreadProperty @ 0x1402F6900 (PsGetThreadProperty.c)
 *     KiCallInterruptServiceRoutine @ 0x14033E8C0 (KiCallInterruptServiceRoutine.c)
 *     IopQueueIrpToFileObject @ 0x1403403C0 (IopQueueIrpToFileObject.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409E80D0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A9A3C (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
