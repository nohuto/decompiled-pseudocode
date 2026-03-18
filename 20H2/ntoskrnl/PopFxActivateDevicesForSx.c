/*
 * XREFs of PopFxActivateDevicesForSx @ 0x14038BBB8
 * Callers:
 *     PopFxPrepareDevicesForShutdown @ 0x14056A0FC (PopFxPrepareDevicesForShutdown.c)
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 */

_QWORD *__fastcall PopFxActivateDevicesForSx(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rbx
  __int64 v4; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v4 = *(_QWORD *)(i + 48);
    if ( v4 && *(unsigned __int8 *)(v4 + 216) < a1 && (*(_DWORD *)(i + 824) & 1) == 0 )
    {
      PopFxActivateDevice(*(_QWORD *)(v4 + 32), 0, 0);
      _InterlockedOr((volatile signed __int32 *)(v4 + 296), 0x1000u);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
