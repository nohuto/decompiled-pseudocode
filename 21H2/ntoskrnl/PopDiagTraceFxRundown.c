/*
 * XREFs of PopDiagTraceFxRundown @ 0x140395A18
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x14081CBF0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x140804994 (PopDiagTraceDeviceVerboseRundown.c)
 *     PopFxTraceDeviceRegistration @ 0x14082473C (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140992720 (PopDiagTraceFxPluginRegistration.c)
 */

char __fastcall PopDiagTraceFxRundown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  ULONG_PTR *j; // rbx
  __int64 v6; // r8
  ULONG_PTR *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      LOBYTE(v6) = 1;
      PopDiagTraceFxPluginRegistration(i, i[3], v6);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( j = (ULONG_PTR *)PopFxDeviceList; j != &PopFxDeviceList; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      if ( !a1 )
      {
        LOBYTE(v3) = 1;
        PopFxTraceDeviceRegistration(j, v3);
      }
      PopDiagTraceDeviceVerboseRundown(j, a1);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
