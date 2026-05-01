/*
 * XREFs of ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x180430860
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800463E8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180093AA4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180432614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps(
        __int64 a1,
        _QWORD *a2)
{
  struct wil::details::IFunctorHost *v2; // r8
  const char *v3; // r9
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-68h] BYREF
  struct DiagnosticsInfo v7; // [rsp+40h] [rbp-58h] BYREF
  const char *v8; // [rsp+48h] [rbp-50h]
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int16 v10; // [rsp+58h] [rbp-40h]
  _BYTE v11[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+74h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v15; // [rsp+A8h] [rbp+10h] BYREF

  v15 = a2;
  *a2 = 0LL;
  v5[0] = a1 - 120;
  v5[1] = &v15;
  v7 = (struct DiagnosticsInfo)retaddr;
  v8 = "pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp";
  v9 = 0LL;
  v10 = 112;
  LOBYTE(a2) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetImpl'::`2'::impl,
      a2);
    v6[0] = off_180471878;
    v6[1] = v5;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v11, 20295383, &v7);
    wil::details::RunFunctor((wil::details *)v6, (struct wil::details::IFunctor *)v11, v2);
    if ( v12 )
      *(_DWORD *)(v12 + 16) = v13;
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x83,
                     (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                     v3);
    return (unsigned int)v15;
  }
  return result;
}
