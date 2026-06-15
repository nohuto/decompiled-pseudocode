/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005B18
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_30955612@@@details@wil@@QEAA_NXZ @ 0x18000DCCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_30955612@@@detail.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18000586C (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        signed __int32 *a1,
        int a2,
        int a3,
        const struct FEATURE_LOGGED_TRAITS *a4,
        int a5,
        int a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  int (*ProcAddress)(struct _RTL_FEATURE_USAGE_REPORT *); // rax
  HMODULE ModuleHandleW; // rax
  __int64 v15; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v16[24]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v17; // [rsp+70h] [rbp-29h]
  unsigned int v18; // [rsp+78h] [rbp-21h]
  __int64 v19; // [rsp+7Ch] [rbp-1Dh]
  int v20; // [rsp+84h] [rbp-15h]
  __int128 v21; // [rsp+88h] [rbp-11h] BYREF
  __int64 v22; // [rsp+98h] [rbp-1h]

  if ( a6 )
  {
    switch ( a6 )
    {
      case 1:
        v10 = a5 == 0 ? 4 : 0;
        goto LABEL_17;
      case 2:
        v10 = a5 != 0 ? 1 : 5;
        goto LABEL_17;
      case 3:
        v10 = a5 != 0 ? 2 : 6;
        goto LABEL_17;
      case 4:
        v10 = a5 != 0 ? 3 : 7;
        goto LABEL_17;
      case 5:
        v10 = a5 != 0 ? 8 : 10;
        goto LABEL_17;
      case 6:
        v10 = a5 != 0 ? 9 : 11;
        goto LABEL_17;
    }
    if ( (unsigned __int8)(a6 - 100) <= 0x31u )
    {
      v10 = (unsigned __int8)(a6 - 100) + (a5 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v10 = 255;
LABEL_17:
  v11 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v16, a1, v10);
  v12 = 1LL;
  v21 = *(_OWORD *)v11;
  v22 = *(_QWORD *)(v11 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(30955612LL, v10, 1LL, a1, &v21);
    if ( a2 )
    {
      v17 = 0LL;
      v19 = 0LL;
      v18 = v10;
      v20 = a3;
      ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(30955612LL, v10, 1LL);
    }
  }
  else if ( a2 && v10 != 254 )
  {
    v15 = 30955612LL;
    WORD2(v15) = v10;
    if ( a3 )
      HIWORD(v15) |= 1u;
    ProcAddress = g_wil_details_pfnRtlNotifyFeatureUsage;
    if ( g_wil_details_pfnRtlNotifyFeatureUsage )
      goto LABEL_28;
    ModuleHandleW = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = ModuleHandleW;
    }
    ProcAddress = (int (*)(struct _RTL_FEATURE_USAGE_REPORT *))GetProcAddress(ModuleHandleW, "RtlNotifyFeatureUsage");
    g_wil_details_pfnRtlNotifyFeatureUsage = ProcAddress;
    if ( ProcAddress )
LABEL_28:
      ((void (__fastcall *)(__int64 *, __int64))ProcAddress)(&v15, v12);
  }
  if ( !(_DWORD)v22 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(0x1D8585Cu, a4, 0LL, a5, (const enum wil_ReportingKind *)&a6, 0LL, 0, 1uLL);
  }
}
