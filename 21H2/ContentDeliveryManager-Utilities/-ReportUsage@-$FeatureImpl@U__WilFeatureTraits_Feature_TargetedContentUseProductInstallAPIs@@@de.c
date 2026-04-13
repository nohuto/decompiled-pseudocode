/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D40C
 * Callers:
 *     ?StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z @ 0x18005ABB0 (-StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x18005B4D0 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x18005B8F0 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085F60 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005D2C8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProduc.c)
 */

__int64 (__fastcall *wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  int v3; // edi
  volatile unsigned __int32 v5; // r8d
  unsigned int v6; // esi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v8 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState(
                      (wil::details *)a1,
                      (signed __int32 *)&v8);
    v5 = v8;
  }
  result = 0LL;
  BYTE4(v9) = 3;
  LODWORD(v9) = 0;
  if ( (_BYTE)v3 )
    return wil::details::ReportUsageToService(a1 + 2, 0x8284B3u, (v5 >> 10) & 1, (v5 >> 11) & 1, (__int64)va, v6, v3);
  return result;
}
