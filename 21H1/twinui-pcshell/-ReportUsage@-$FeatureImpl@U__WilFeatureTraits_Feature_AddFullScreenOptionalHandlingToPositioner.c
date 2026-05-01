/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180009F90
 * Callers:
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180009ED0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180186520 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801867C0 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002C270 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180186994 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHan.c)
 */

__int64 wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetCachedFeatureEnabledState(
                      a1,
                      (__int64 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 0;
  v7 = 0;
  BYTE4(v9) = 3;
  v8 = WORD2(v9);
  return wil_details_FeatureReporting_ReportUsageToService(
           a1 + 2,
           10094528LL,
           ((unsigned int)v3 >> 8) & 1,
           ((unsigned int)v3 >> 9) & 1,
           &v7,
           v5,
           3);
}
