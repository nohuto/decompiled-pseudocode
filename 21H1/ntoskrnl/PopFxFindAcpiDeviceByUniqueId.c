/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x14037BB20
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x1405784D0 (PopFxAcpiPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140723798 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopFxRegisterDeviceWorker @ 0x14079CBDC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140237750 (IoAcquireRemoveLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     RtlCompareUnicodeString @ 0x14061BCF0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(PCUNICODE_STRING String2, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbx
  NTSTATUS v6; // edi
  __int64 *i; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    v5 = i - 25;
    if ( i[3] && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 27), String2, 0) )
    {
      if ( a2 )
        v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 34), (PVOID)0x66466F50, &Src, 1u, 0x20u);
      else
        v6 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( v6 >= 0 && a2 )
    *a2 = v5;
  return (unsigned int)v6;
}
