/*
 * XREFs of ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x1800A8FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800463E8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180093AA4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180432614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4)
{
  struct wil::details::IFunctorHost *v4; // r8
  const char *v5; // r9
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+30h] [rbp-78h] BYREF
  struct DiagnosticsInfo v9; // [rsp+50h] [rbp-58h] BYREF
  const char *v10; // [rsp+58h] [rbp-50h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  __int16 v12; // [rsp+68h] [rbp-40h]
  _BYTE v13[8]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+84h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v17; // [rsp+B8h] [rbp+10h] BYREF
  char v18; // [rsp+C0h] [rbp+18h] BYREF
  int v19; // [rsp+C8h] [rbp+20h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v8[0] = &v17;
  v8[1] = &v18;
  v8[2] = &v19;
  v8[3] = a1 - 120;
  v9 = (struct DiagnosticsInfo)retaddr;
  v10 = "pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp";
  v11 = 0LL;
  v12 = 163;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsage();
    v7[0] = off_180471868;
    v7[1] = v8;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v13, 20295383, &v9);
    wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)v13, v4);
    if ( v14 )
      *(_DWORD *)(v14 + 16) = v15;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB8,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v5);
  }
  return result;
}
