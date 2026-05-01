/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A460
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180099B78 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@.c)
 * Callees:
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@@details@wil@@SA_NXZ @ 0x18009B1F8 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsPerfImprovements>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v3; // ebx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *result; // rax

  v2 = g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v2 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v2)(35409375LL, 0LL);
  else
    v5 = 0;
  *a2 = 0LL;
  v6 = v5 & 0xFFFFFF3F;
  v7 = 2 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3u)))));
  if ( (_DWORD)v6 )
  {
    v8 = 0;
    if ( (_DWORD)v6 == 2 )
      v8 = 16;
    v7 = v8 | (unsigned int)v7;
  }
  *(_DWORD *)a2 = v7;
  if ( (v7 & 0x10) != 0
    && (unsigned __int8)wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>>::IsEnabled(
                          v7,
                          16LL,
                          v6) )
  {
    v3 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
