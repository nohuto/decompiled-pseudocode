/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x18009B94C
 * Callers:
 *     LdrShutdownProcess @ 0x18005DAA0 (LdrShutdownProcess.c)
 *     Feature_Servicing_2206c_38427506__private_IsEnabled @ 0x18009B470 (Feature_Servicing_2206c_38427506__private_IsEnabled.c)
 *     Feature_SearchPackagePaths__private_IsEnabled @ 0x18009C4E0 (Feature_SearchPackagePaths__private_IsEnabled.c)
 *     Feature_Servicing_AppServerAI__private_IsEnabled @ 0x18009C970 (Feature_Servicing_AppServerAI__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18009B9DC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x18009BD40 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  int v8; // eax
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v13; // [rsp+30h] [rbp-28h]

  a7 = 3;
  v8 = wil_details_MapReportingKind(3LL, a6);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     v11,
                                                                                                     a2,
                                                                                                     v10,
                                                                                                     v9,
                                                                                                     v8);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v13 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, v13, 1LL);
    }
  }
  return result;
}
