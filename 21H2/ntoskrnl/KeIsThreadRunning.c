/*
 * XREFs of KeIsThreadRunning @ 0x140513294
 * Callers:
 *     IoSetIoCompletionEx @ 0x14020DF30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x14020E110 (KeInsertQueueEx.c)
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeRundownQueueCommon @ 0x140227F1C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140228198 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x14023B588 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KePulseEvent @ 0x14025FA60 (KePulseEvent.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueue @ 0x14029EAA0 (KeInsertQueue.c)
 *     KeRegisterObjectNotification @ 0x1402A7858 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CDF20 (NtAssociateWaitCompletionPacket.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KeSetProcess @ 0x1402F652C (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeTryToInsertQueueApc @ 0x14051AA50 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x14051B1C0 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AF070 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
