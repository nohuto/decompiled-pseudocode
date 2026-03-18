/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C001A5FC
 * Callers:
 *     Feature_Servicing_LimitNXPXHCIControllerTo32bitDMA__private_IsEnabled @ 0x1C001A28C (Feature_Servicing_LimitNXPXHCIControllerTo32bitDMA__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C001A680 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C001A9F4 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // r9d
  int v10; // r10d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 3;
  v6 = wil_details_MapReportingKind(3LL, a6);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     v8,
                                                                                                     v7,
                                                                                                     v10,
                                                                                                     v9,
                                                                                                     v6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v12 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(41080294LL, &Feature_Servicing_LimitNXPXHCIControllerTo32bitDMA_logged_traits, 0LL, a6, &v13, 0LL, v12, 1LL);
    }
  }
  return result;
}
