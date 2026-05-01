/*
 * XREFs of ?RuntimeClassInitialize@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAAJXZ @ 0x180455E34
 * Callers:
 *     ??$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180452968 (--$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F4C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?FamilyAppUsageManagerStarted@AppUsageTelemetry@@SAXXZ @ 0x180453BB8 (-FamilyAppUsageManagerStarted@AppUsageTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::RuntimeClassInitialize(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this)
{
  int v2; // eax
  _OWORD v4[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  AppUsageTelemetry::FamilyAppUsageManagerStarted((__int64)this);
  v4[0] = GUID_94c92056_6eff_5931_8491_99b92030d9e2;
  v4[1] = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1LL);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      52LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
