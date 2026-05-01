/*
 * XREFs of ?StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x180432D10
 * Callers:
 *     ?UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x180432EF0 (-UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800463E8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180093AA4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180432614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StopUsageTracking(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this)
{
  struct wil::details::IFunctorHost *v1; // r8
  const char *v2; // r9
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-68h] BYREF
  struct DiagnosticsInfo v5; // [rsp+30h] [rbp-58h] BYREF
  const char *v6; // [rsp+38h] [rbp-50h]
  __int64 v7; // [rsp+40h] [rbp-48h]
  __int16 v8; // [rsp+48h] [rbp-40h]
  _BYTE v9[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+64h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v13; // [rsp+90h] [rbp+8h] BYREF

  v13 = (char *)this - 120;
  v5 = (struct DiagnosticsInfo)retaddr;
  v6 = "pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp";
  v7 = 0LL;
  v8 = 100;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetImpl'::`2'::impl,
      1u,
      3u);
    v4[0] = off_1804A83A8;
    v4[1] = &v13;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v9, 20295383, &v5);
    wil::details::RunFunctor((wil::details *)v4, (struct wil::details::IFunctor *)v9, v1);
    if ( v10 )
      *(_DWORD *)(v10 + 16) = v11;
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x6B,
                     (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                     v2);
    return (unsigned int)v13;
  }
  return result;
}
