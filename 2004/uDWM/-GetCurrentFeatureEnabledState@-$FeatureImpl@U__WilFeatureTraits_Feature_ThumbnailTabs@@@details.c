/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A850
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009A720 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180010A34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ThumbnailTabs>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v3; // ebx
  int v5; // edx
  int v6; // ecx

  v2 = g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v2 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, __int64))v2)(17317009LL, 3LL);
  else
    v5 = 0;
  *a2 = 0LL;
  v6 = 2 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))));
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    if ( (v5 & 0xFFFFFF3F) == 2 )
      v3 = 16;
    v6 |= v3;
  }
  *(_DWORD *)a2 = v6;
  if ( (v6 & 0x10) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0,
      0);
    v6 = *(_DWORD *)a2;
  }
  *(_DWORD *)a2 = v6 & 0xFFFFFFF7;
  return a2;
}
