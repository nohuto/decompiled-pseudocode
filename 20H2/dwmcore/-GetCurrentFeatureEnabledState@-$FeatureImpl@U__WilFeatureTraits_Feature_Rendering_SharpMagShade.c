/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180191F6C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180191E24 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Rendering_SharpMagShader>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v3; // ebx
  int v5; // edx
  unsigned int v6; // ecx

  v2 = g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v2 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v2)(20238036LL, 0LL);
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
  *(_DWORD *)a2 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 >> 1)) & 8;
  return a2;
}
