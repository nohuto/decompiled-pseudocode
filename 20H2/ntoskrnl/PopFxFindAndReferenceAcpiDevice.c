/*
 * XREFs of PopFxFindAndReferenceAcpiDevice @ 0x1405691C8
 * Callers:
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14057C400 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     IoAcquireRemoveLockEx @ 0x140246210 (IoAcquireRemoveLockEx.c)
 */

__int64 __fastcall PopFxFindAndReferenceAcpiDevice(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  __int64 *i; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741810;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    if ( i - 25 == a1 )
    {
      v3 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(i + 9), (PVOID)0x66466F50, &Src, 1u, 0x20u);
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
