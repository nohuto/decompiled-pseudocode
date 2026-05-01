/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802C8598
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802C8158 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F2EA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAltTabView>::GetCurrentFeatureEnabledState(
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
    v5 = ((__int64 (__fastcall *)(__int64, __int64))v2)(7923995LL, 1LL);
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
  if ( (v6 & 0x10) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetImpl'::`2'::impl,
      1u,
      0);
    v6 = *(_DWORD *)a2;
    v3 = 8;
  }
  result = a2;
  *(_DWORD *)a2 = v3 | v6 & 0xFFFFFFF7;
  return result;
}
