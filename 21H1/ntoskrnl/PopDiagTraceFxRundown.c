/*
 * XREFs of PopDiagTraceFxRundown @ 0x14033C478
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1406FF180 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x1406FE03C (PopDiagTraceDeviceVerboseRundown.c)
 *     PopFxTraceDeviceRegistration @ 0x1406FE27C (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxPluginRegistration @ 0x1408E61DC (PopDiagTraceFxPluginRegistration.c)
 */

_QWORD *PopDiagTraceFxRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  ULONG_PTR *i; // rbx
  __int64 v3; // rdx
  ULONG_PTR *j; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
  for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
  {
    LOBYTE(v1) = 1;
    PopDiagTraceFxPluginRegistration(i, i[3], v1);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( j = (ULONG_PTR *)PopFxDeviceList; j != &PopFxDeviceList; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      LOBYTE(v3) = 1;
      PopFxTraceDeviceRegistration(j, v3);
      PopDiagTraceDeviceVerboseRundown(j);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
}
