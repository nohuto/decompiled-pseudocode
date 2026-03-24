/*
 * XREFs of EtwTraceEnqueueWork @ 0x1405A77C0
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
 *     KeInsertHeadQueue @ 0x14051AF80 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
