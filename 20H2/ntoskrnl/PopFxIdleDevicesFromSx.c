/*
 * XREFs of PopFxIdleDevicesFromSx @ 0x14038BAE4
 * Callers:
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     PoFxIdleDevice @ 0x14036D564 (PoFxIdleDevice.c)
 */

_QWORD *PopFxIdleDevicesFromSx()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rbx
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v2 = *(_QWORD *)(i + 48);
    if ( v2 && (*(_DWORD *)(i + 824) & 1) == 0 && !*(_BYTE *)(v2 + 216) )
    {
      PoFxIdleDevice(*(_QWORD *)(v2 + 32));
      _InterlockedAnd((volatile signed __int32 *)(v2 + 296), 0xFFFFEFFF);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
