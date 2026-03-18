/*
 * XREFs of KeIsThreadRunning @ 0x14056B1E4
 * Callers:
 *     KeSetProcess @ 0x1402095F0 (KeSetProcess.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     KeRundownQueueCommon @ 0x140234888 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140234B28 (KeDeleteMutant.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     KiResumeThread @ 0x1402EF710 (KiResumeThread.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     KiRundownMutants @ 0x1402F0604 (KiRundownMutants.c)
 *     KeRegisterObjectNotification @ 0x1402F0D90 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     AlpcpQueueIoCompletion @ 0x1402F6750 (AlpcpQueueIoCompletion.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402F8040 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     KeInsertQueueEx @ 0x140311A50 (KeInsertQueueEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 *     IoSetIoCompletionEx2 @ 0x14035A850 (IoSetIoCompletionEx2.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     KiInsertQueueInternal @ 0x14035B608 (KiInsertQueueInternal.c)
 *     KeWakeWaitChain @ 0x14035B8F4 (KeWakeWaitChain.c)
 *     KeTryToInsertQueueApc @ 0x140570750 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406362D0 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
