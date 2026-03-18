/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0
 * Callers:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x14033A854 (SepIsAdminlessEnforcementModeEnabled.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14037FF1C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled.c)
 *     Feature_Servicing_30140909__private_IsEnabled @ 0x1403EBB18 (Feature_Servicing_30140909__private_IsEnabled.c)
 *     Feature_Servicing_29814886__private_IsEnabled @ 0x1403EBF4C (Feature_Servicing_29814886__private_IsEnabled.c)
 *     Feature_Servicing_30141497__private_IsEnabled @ 0x1403EC074 (Feature_Servicing_30141497__private_IsEnabled.c)
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x1403EC388 (KiLogControlProtectionUserModeReturnMismatch.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403EC428 (KiLogUserCetSetContextIpValidationFailure.c)
 *     Feature_Servicing_User_CET_25433400__private_IsEnabled @ 0x1403EC8EC (Feature_Servicing_User_CET_25433400__private_IsEnabled.c)
 *     Feature_Servicing_25906437__private_IsEnabled @ 0x1403F0F38 (Feature_Servicing_25906437__private_IsEnabled.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled @ 0x1403F13E0 (Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled.c)
 *     Feature_Servicing_2102c_29269619__private_IsEnabled @ 0x1403F15F0 (Feature_Servicing_2102c_29269619__private_IsEnabled.c)
 *     Feature_Servicing_2011c_29270241__private_IsEnabled @ 0x1403F1658 (Feature_Servicing_2011c_29270241__private_IsEnabled.c)
 *     WheaReportHwError @ 0x1405B5450 (WheaReportHwError.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     SeQuerySigningPolicyWorker @ 0x14066ED48 (SeQuerySigningPolicyWorker.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 *     KeInitializeVelocity @ 0x14077A538 (KeInitializeVelocity.c)
 *     PoClearTransitionMarker @ 0x14077A86C (PoClearTransitionMarker.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407B62F4 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408EDB60 (PopQueryPowerButtonBugcheckEnabled.c)
 *     KiInitializeVelocity @ 0x140A3F4E4 (KiInitializeVelocity.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14033A8FC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v9; // [rsp+30h] [rbp-28h]

  v9 = 1;
  a7 = 3;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a6 != 0 ? 2 : 6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v9) = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, v9, 1LL);
    }
  }
  return result;
}
