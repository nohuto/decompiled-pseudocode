/*
 * XREFs of KeInitializeVelocity @ 0x1407939D0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407909DC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 (__fastcall *KeInitializeVelocity())(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v1; // [rsp+30h] [rbp-18h]
  int v2; // [rsp+30h] [rbp-18h]
  int v3; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_BamQosGrouping__private_reporting,
    0x1188553u,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v1);
  KiVelocityFlags |= 0x800u;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SchedulerFavoredCoreRotation__private_reporting,
    0x1188600u,
    0,
    0,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    v2);
  KiVelocityFlags |= 0x1000u;
  result = wil_details_FeatureReporting_ReportUsageToService(
             (int)&Feature_SchedulerQosPreemption__private_reporting,
             0x126E6F7u,
             0,
             0,
             (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
             1u,
             v3);
  KiVelocityFlags |= 0x4000u;
  return result;
}
