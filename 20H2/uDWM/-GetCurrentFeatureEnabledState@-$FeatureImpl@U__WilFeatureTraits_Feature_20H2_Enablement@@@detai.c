/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180055384
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180054F74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@detail.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18005596C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Enablement>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v3; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  _QWORD *result; // rax

  v2 = g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v2 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, __int64))v2)(23811390LL, 3LL);
  else
    v5 = 0;
  *a2 = 0LL;
  v6 = 2 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))));
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    v7 = 0;
    if ( (v5 & 0xFFFFFF3F) == 2 )
      v7 = 16;
    v6 |= v7;
  }
  *(_DWORD *)a2 = v6;
  if ( (v6 & 0x10) != 0
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Rollback>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_20H2_Rollback>::GetImpl'::`2'::impl,
                          16LL) )
  {
    v3 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
