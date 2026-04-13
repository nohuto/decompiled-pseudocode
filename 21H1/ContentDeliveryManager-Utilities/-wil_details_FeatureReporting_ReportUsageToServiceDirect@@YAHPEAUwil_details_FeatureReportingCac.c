/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800085F4
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180008764 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x1800175C4 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180008340 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  int (*ProcAddress)(struct _RTL_FEATURE_USAGE_REPORT *); // rax
  HMODULE ModuleHandleW; // rax
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+34h] [rbp-3Ch]
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+44h] [rbp-2Ch]
  int v20; // [rsp+4Ch] [rbp-24h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v10 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v17, a1, a5, a6);
  v11 = 0;
  v21 = *(_OWORD *)v10;
  v22 = *(_QWORD *)(v10 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v21);
    if ( a3 )
    {
      v17 = 0LL;
      v19 = 0LL;
      v18 = a5;
      v20 = a4;
      g_wil_details_recordFeatureUsage(a2, a5, 1LL, 0LL, &v17);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    v15 = a2;
    v16 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v16) |= 1u;
    ProcAddress = g_wil_details_pfnRtlNotifyFeatureUsage;
    if ( g_wil_details_pfnRtlNotifyFeatureUsage )
      goto LABEL_12;
    ModuleHandleW = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = ModuleHandleW;
    }
    ProcAddress = (int (*)(struct _RTL_FEATURE_USAGE_REPORT *))GetProcAddress(ModuleHandleW, "RtlNotifyFeatureUsage");
    g_wil_details_pfnRtlNotifyFeatureUsage = ProcAddress;
    if ( ProcAddress )
LABEL_12:
      ((void (__fastcall *)(unsigned int *))ProcAddress)(&v15);
  }
  LOBYTE(v11) = (_DWORD)v22 == 0;
  return v11;
}
