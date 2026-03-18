/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x1408EEE50
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140573410 (PopPowerButtonWorkCallback.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 PopQueryPowerButtonBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  unsigned int v2; // ebx
  int v3; // edi
  int v5; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  v1 = PopPowerButtonBugcheckConfig;
  v2 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      v2 = 1;
    else
      wil_details_FeatureReporting_ReportUsageToService(
        (int)&Feature_PowerButtonBugcheck__private_reporting,
        0x8DF90Eu,
        0,
        0,
        (__int64)&Feature_PPLEnforcement_logged_traits,
        0,
        v5);
  }
  byte_140C205D8 = v2;
  return v2;
}
