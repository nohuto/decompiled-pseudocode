/*
 * XREFs of KeIsThreadRunning @ 0x14050D594
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140245B40 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140246FD0 (IoSetIoCompletionEx.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     KeReleaseMutant @ 0x140249450 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140261630 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140263230 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRegisterObjectNotification @ 0x1402C048C (KeRegisterObjectNotification.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CD580 (NtAssociateWaitCompletionPacket.c)
 *     KeSetProcess @ 0x1402D4298 (KeSetProcess.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     KePulseEvent @ 0x1402F6B10 (KePulseEvent.c)
 *     KeRundownQueueCommon @ 0x1402FBA2C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1402FBCA8 (KeDeleteMutant.c)
 *     KeInsertQueueEx @ 0x1402FBFF8 (KeInsertQueueEx.c)
 *     KeWakeWaitChain @ 0x140308D4C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x14030BF98 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14031D0E0 (KeInsertQueue.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 *     KiResumeThread @ 0x140356190 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140356A08 (KiRundownMutants.c)
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
 *     KeTryToInsertQueueApc @ 0x140514D50 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x1405154C0 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405A91F0 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
