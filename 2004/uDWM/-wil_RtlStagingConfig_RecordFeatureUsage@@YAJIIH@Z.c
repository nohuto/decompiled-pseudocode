/*
 * XREFs of ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18007FB10
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180010B8C (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x180021870 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18002E660 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18004E630 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_RtlStagingConfig_RecordFeatureUsage(int a1, __int16 a2, int a3)
{
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  int v6; // [rsp+48h] [rbp+20h] BYREF
  __int16 v7; // [rsp+4Ch] [rbp+24h]
  __int16 v8; // [rsp+4Eh] [rbp+26h]

  v8 = 0;
  v6 = a1;
  v7 = a2;
  if ( a3 )
    v8 |= 1u;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlNotifyFeatureUsage;
  if ( g_wil_details_pfnRtlNotifyFeatureUsage )
    return ((__int64 (__fastcall *)(int *))ProcAddress)(&v6);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlNotifyFeatureUsage");
  g_wil_details_pfnRtlNotifyFeatureUsage = (int (*)(struct _RTL_FEATURE_USAGE_REPORT *))ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(int *))ProcAddress)(&v6);
  else
    return 3221225785LL;
}
