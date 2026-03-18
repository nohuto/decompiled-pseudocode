/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704
 * Callers:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1402FD6B8 (SepIsAdminlessEnforcementModeEnabled.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14038251C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled.c)
 *     Feature_MSRC76458_DisableTransactedRename__private_IsEnabled @ 0x1403EFBDC (Feature_MSRC76458_DisableTransactedRename__private_IsEnabled.c)
 *     Feature_Servicing_AzureVMHang__private_IsEnabled @ 0x1403F01C4 (Feature_Servicing_AzureVMHang__private_IsEnabled.c)
 *     Feature_Servicing_CopyFileImprovement__private_IsEnabled @ 0x1403F022C (Feature_Servicing_CopyFileImprovement__private_IsEnabled.c)
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x1403F16B0 (KiLogControlProtectionUserModeReturnMismatch.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403F1750 (KiLogUserCetSetContextIpValidationFailure.c)
 *     Feature_Servicing_SetVadPageSize__private_IsEnabled @ 0x1403F2038 (Feature_Servicing_SetVadPageSize__private_IsEnabled.c)
 *     Feature_Servicing_37028738__private_IsEnabled @ 0x1403F420C (Feature_Servicing_37028738__private_IsEnabled.c)
 *     Feature_Servicing_2206c_38536160__private_IsEnabled @ 0x1403F6778 (Feature_Servicing_2206c_38536160__private_IsEnabled.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     Feature_Servicing_AddInitProcessProperty__private_IsEnabled @ 0x1403F7748 (Feature_Servicing_AddInitProcessProperty__private_IsEnabled.c)
 *     Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled @ 0x1403F7828 (Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled.c)
 *     WheaReportHwError @ 0x1405B96D0 (WheaReportHwError.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 *     SeQuerySigningPolicyWorker @ 0x14069004C (SeQuerySigningPolicyWorker.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     PoClearTransitionMarker @ 0x140790C64 (PoClearTransitionMarker.c)
 *     KeInitializeVelocity @ 0x1407939D0 (KeInitializeVelocity.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407C7CF4 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408F4A60 (PopQueryPowerButtonBugcheckEnabled.c)
 *     KiInitializeVelocity @ 0x140A4AFA8 (KiInitializeVelocity.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402FD760 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
