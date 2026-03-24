/*
 * XREFs of KeIsThreadRunning @ 0x140513054
 * Callers:
 *     KeRegisterObjectNotification @ 0x140202F18 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140229620 (NtAssociateWaitCompletionPacket.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140242B70 (NtReleaseWorkerFactoryWorker.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x140246230 (IoSetIoCompletionEx2.c)
 *     KiTimerWaitTest @ 0x140247DF0 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x14024B5C0 (KiExpireTimer2.c)
 *     KeSetProcess @ 0x140251D1C (KeSetProcess.c)
 *     KeReleaseSemaphoreEx @ 0x1402631F0 (KeReleaseSemaphoreEx.c)
 *     KePulseEvent @ 0x140271AC0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x140277650 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1402784F0 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1402798D0 (KiResumeThread.c)
 *     IoSetIoCompletionEx @ 0x14028FFC0 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x1402901A0 (KeInsertQueueEx.c)
 *     KeReleaseSemaphore @ 0x14029AC70 (KeReleaseSemaphore.c)
 *     KeRundownQueueCommon @ 0x1402A9DDC (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1402AA058 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x1402BA75C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x1402BCED8 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402CCD30 (KeInsertQueue.c)
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x1403424B0 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeTryToInsertQueueApc @ 0x14051A810 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x14051AF80 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AEE40 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
