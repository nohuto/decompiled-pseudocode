/*
 * XREFs of KeIsThreadRunning @ 0x140511514
 * Callers:
 *     KeRegisterObjectNotification @ 0x140206258 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseMutant @ 0x140218050 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140221690 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140223290 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetProcess @ 0x14023D910 (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x140242D58 (KeSetEventBoostPriorityEx.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x14028CF50 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x140295180 (KeInsertQueueEx.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     KiRundownMutants @ 0x1402D5C98 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KiResumeThread @ 0x1402D7924 (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     KiExpireTimer2 @ 0x1402E01F0 (KiExpireTimer2.c)
 *     IoSetIoCompletionEx @ 0x1402F1130 (IoSetIoCompletionEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402F58B0 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x1402FAEB0 (KeReleaseSemaphore.c)
 *     KePulseEvent @ 0x14030A3F0 (KePulseEvent.c)
 *     KeRundownQueueCommon @ 0x14030B17C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14030B3F8 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x140318018 (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x14031A71C (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1403610A0 (KeInsertQueue.c)
 *     KeTryToInsertQueueApc @ 0x140518CD0 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x140519440 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AD440 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
