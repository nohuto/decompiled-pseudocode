/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C
 * Callers:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x14027C0D0 (SepIsAdminlessEnforcementModeEnabled.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14038075C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled.c)
 *     Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714 (Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled.c)
 *     Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled @ 0x1403ED274 (Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled.c)
 *     Feature_Servicing_2110c_34820170__private_IsEnabled @ 0x1403ED2DC (Feature_Servicing_2110c_34820170__private_IsEnabled.c)
 *     Feature_Servicing_Apply_Layered_Group_Policy_33504626__private_IsEnabled @ 0x1403ED344 (Feature_Servicing_Apply_Layered_Group_Policy_33504626__private_IsEnabled.c)
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x1403ED4C0 (KiLogControlProtectionUserModeReturnMismatch.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403ED560 (KiLogUserCetSetContextIpValidationFailure.c)
 *     Feature_Servicing_2107_32739750__private_IsEnabled @ 0x1403F213C (Feature_Servicing_2107_32739750__private_IsEnabled.c)
 *     Feature_Servicing_2104_31612686__private_IsEnabled @ 0x1403F28E8 (Feature_Servicing_2104_31612686__private_IsEnabled.c)
 *     WheaReportHwError @ 0x1405B5B70 (WheaReportHwError.c)
 *     SeQuerySigningPolicyWorker @ 0x140617804 (SeQuerySigningPolicyWorker.c)
 *     MmCreatePeb @ 0x14065D900 (MmCreatePeb.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     KeInitializeVelocity @ 0x140782F40 (KeInitializeVelocity.c)
 *     PoClearTransitionMarker @ 0x140783274 (PoClearTransitionMarker.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407B9464 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408EEE50 (PopQueryPowerButtonBugcheckEnabled.c)
 *     KiInitializeVelocity @ 0x140A44D08 (KiInitializeVelocity.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14027C178 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
