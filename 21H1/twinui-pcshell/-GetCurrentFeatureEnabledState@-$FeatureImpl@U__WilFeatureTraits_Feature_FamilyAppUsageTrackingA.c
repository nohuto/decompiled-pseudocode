/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180430EF8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180430D00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180432614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEA.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v3; // ebx
  int v5; // edx
  unsigned int v6; // r8d
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  _QWORD *result; // rax

  v2 = g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v2 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v2)(21892848LL, 0LL);
  else
    v5 = 0;
  *a2 = 0LL;
  v6 = v5 & 0xFFFFFF3F;
  v7 = v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3))));
  v8 = 16LL;
  v9 = 2 * v7;
  if ( v6 )
  {
    v10 = 0;
    if ( v6 == 2 )
      v10 = 16;
    v9 |= v10;
  }
  *(_DWORD *)a2 = v9;
  if ( (v9 & 0x10) != 0 )
  {
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetImpl'::`2'::impl,
      v8);
    v9 = *(_DWORD *)a2;
    v3 = 8;
  }
  result = a2;
  *(_DWORD *)a2 = v3 | v9 & 0xFFFFFFF7;
  return result;
}
