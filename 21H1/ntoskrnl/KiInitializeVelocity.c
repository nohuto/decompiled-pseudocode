/*
 * XREFs of KiInitializeVelocity @ 0x140A3F4E4
 * Callers:
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403AB484 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DA510 (RtlQueryImageFileKeyOption.c)
 */

NTSTATUS KiInitializeVelocity()
{
  NTSTATUS result; // eax
  ULONG v1; // ecx
  int v2; // [rsp+30h] [rbp-18h]
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]
  ULONG v14; // [rsp+50h] [rbp+8h] BYREF

  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistReflectPriority__private_reporting,
    0xCE8A22u,
    0,
    0,
    (__int64)&Feature_PdttSupport_logged_traits,
    0,
    v2);
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistPreemptionPriorityKick__private_reporting,
    0xD245DCu,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v3);
  KiVelocityFlags |= 2u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistThreadFlag__private_reporting,
    0xCE8A33u,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v4);
  KiVelocityFlags |= 4u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistForegroundBoostBias__private_reporting,
    0xDDFB0Eu,
    0,
    0,
    (__int64)&Feature_PdttSupport_logged_traits,
    0,
    v5);
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistEnableBAM__private_reporting,
    0xDE148Cu,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v6);
  KiVelocityFlags |= 0x10u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistSystemIrql__private_reporting,
    0xFDEFC5u,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v7);
  KiVelocityFlags |= 0x200u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistHRTimer__private_reporting,
    0xDF826Fu,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v8);
  KiVelocityFlags |= 0x40u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAggressiveForegroundBoost__private_reporting,
    0xDEF75Cu,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v9);
  KiForegroundBoostTicks = 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistAllowRealTime__private_reporting,
    0xE4A238u,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v10);
  KiVelocityFlags |= 0x80u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerAssistLongSpinWait__private_reporting,
    0xFDEFDFu,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v11);
  KiVelocityFlags |= 0x400u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_ReduceTimerWakes__private_reporting,
    0x13AEA48u,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v12);
  KiVelocityFlags |= 0x2000u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_DisableLowQosTimerResolution__private_reporting,
    0x13AEA4Du,
    0,
    0,
    (__int64)&Feature_PdttSupport_logged_traits,
    0,
    v13);
  v14 = 0;
  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    result = RtlQueryImageFileKeyOption(KiDisableFgBoostDecayRegistryHandle, L"DisableFGBoostDecay", 4, &v14, 4u, 0LL);
    v1 = v14;
    if ( result < 0 )
      v1 = 0;
    v14 = v1;
    if ( v1 )
      KiForegrounBoostVelocityFlag = 1;
  }
  return result;
}
