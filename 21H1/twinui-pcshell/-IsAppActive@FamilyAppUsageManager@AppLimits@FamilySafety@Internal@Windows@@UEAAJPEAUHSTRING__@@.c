/*
 * XREFs of ?IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180431B90
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800463E8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180093AA4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180432614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        HSTRING a2,
        unsigned __int8 *a3)
{
  struct wil::details::IFunctorHost *v3; // r8
  const char *v4; // r9
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-68h] BYREF
  struct DiagnosticsInfo v8; // [rsp+48h] [rbp-50h] BYREF
  const char *v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int16 v11; // [rsp+60h] [rbp-38h]
  _BYTE v12[8]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+7Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  HSTRING v16; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 *v17; // [rsp+B0h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  *a3 = 0;
  v7[0] = &v16;
  v7[1] = &v17;
  v7[2] = (char *)this - 120;
  v8 = (struct DiagnosticsInfo)retaddr;
  v9 = "pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp";
  v10 = 0LL;
  v11 = 136;
  LOBYTE(a2) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetImpl'::`2'::impl,
      a2);
    v6[0] = off_1804A83A0;
    v6[1] = v7;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v12, 20295383, &v8);
    wil::details::RunFunctor((wil::details *)v6, (struct wil::details::IFunctor *)v12, v3);
    if ( v13 )
      *(_DWORD *)(v13 + 16) = v14;
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x8F,
                     (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                     v4);
    return (unsigned int)v17;
  }
  return result;
}
