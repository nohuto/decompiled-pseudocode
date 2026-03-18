/*
 * XREFs of EtwTraceEnqueueWork @ 0x1405A22F0
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRegisterObjectNotification @ 0x14026745C (KeRegisterObjectNotification.c)
 *     KeSetEventBoostPriorityEx @ 0x140274BF8 (KeSetEventBoostPriorityEx.c)
 *     KeSetProcess @ 0x14027BE30 (KeSetProcess.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1402818D0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140282320 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140282C40 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402837B0 (IoSetIoCompletionEx.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     KePulseEvent @ 0x1402F2EF0 (KePulseEvent.c)
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1402FA1B0 (KiResumeThread.c)
 *     KiRundownMutants @ 0x1402FAA28 (KiRundownMutants.c)
 *     NtAssociateWaitCompletionPacket @ 0x14030EF50 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x140327E90 (KeReleaseSemaphore.c)
 *     KeRundownQueueCommon @ 0x140338A5C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140338CD8 (KeDeleteMutant.c)
 *     KeInsertQueueEx @ 0x140339334 (KeInsertQueueEx.c)
 *     KeWakeWaitChain @ 0x140346B4C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x140349E58 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     KeInsertQueue @ 0x14035ACC0 (KeInsertQueue.c)
 *     KeInsertHeadQueue @ 0x140515B10 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1152);
  v7 = 0;
  v5 = a2;
  v6 = v3;
  v8 = &v5;
  v10 = 0;
  v9 = 12;
  return EtwTraceKernelEvent((int)&v8, 1, 0x21000000u, 1342, a3 != 0 ? 5250562 : 5244418);
}
