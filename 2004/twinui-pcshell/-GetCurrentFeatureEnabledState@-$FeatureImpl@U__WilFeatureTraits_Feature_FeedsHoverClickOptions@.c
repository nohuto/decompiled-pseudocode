/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A3A0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180099A5C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@.c)
 * Callees:
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@@details@wil@@SA_NXZ @ 0x18009B1F8 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v3; // ebx
  int v5; // ecx
  unsigned int v6; // r9d
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rdx
  _QWORD *result; // rax

  v2 = g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v2 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v2)(31615770LL, 0LL);
  else
    v5 = 0;
  *a2 = 0LL;
  v6 = v5 & 0xFFFFFF3F;
  v7 = v5 & 0x40;
  v8 = (unsigned __int8)v5 & 0x80;
  v9 = 2 * (v8 | (4 * (v7 | (4 * (v6 & 3)))));
  if ( v6 )
  {
    v8 = 0LL;
    if ( v6 == 2 )
      v8 = 16LL;
    v10 = v9 & 0xFFFFFFEF | (unsigned int)v8;
  }
  else
  {
    v10 = v9 | 0x10u;
  }
  *(_DWORD *)a2 = v10;
  if ( (v10 & 0x10) != 0
    && (unsigned __int8)wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>>::IsEnabled(
                          v8,
                          v10,
                          16LL) )
  {
    v3 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
