/*
 * XREFs of PsCaptureExceptionPort @ 0x1406B1148
 * Callers:
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     DbgkForwardException @ 0x14071FF90 (DbgkForwardException.c)
 *     PspFreezeProcessWorker @ 0x140907CF0 (PspFreezeProcessWorker.c)
 *     ExpRaiseHardError @ 0x140952DEC (ExpRaiseHardError.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rdi
  void *v4; // rbx

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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
