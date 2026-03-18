/*
 * XREFs of PsCaptureExceptionPort @ 0x140707008
 * Callers:
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     DbgkForwardException @ 0x14071E1F0 (DbgkForwardException.c)
 *     PspFreezeProcessWorker @ 0x140906A40 (PspFreezeProcessWorker.c)
 *     ExpRaiseHardError @ 0x140951A4C (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rdi
  void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( !*(_QWORD *)(a1 + 1200) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  v4 = (void *)(*(_QWORD *)(a1 + 1200) & 0xFFFFFFFFFFFFFFF8uLL);
  ObfReferenceObject(v4);
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
  return v4;
}
