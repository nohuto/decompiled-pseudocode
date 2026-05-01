/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18007C3A8
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18007C2CC (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details.c)
 * Callees:
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007C444 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

unsigned int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCurrentVariantState(
        __int64 a1,
        unsigned int *a2,
        int *a3)
{
  unsigned int FeatureVariant; // eax
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  int *v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = HIDWORD(a1);
  v9 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                     (wil::details *)0x1126927,
                     3u,
                     (enum FEATURE_CHANGE_TIME)&v11,
                     &v9,
                     a3,
                     v8);
  *a2 = 0;
  v5 = ((v9 != 0 ? 0x100 : 0) | *a2 & 0xFFFFFEFF) ^ ((unsigned __int16)(4 * FeatureVariant) ^ ((v9 != 0 ? 0x100 : 0) | (unsigned __int16)*a2)) & 0x200;
  if ( (FeatureVariant & 0xFFFFFE7F) != 0 )
  {
    v6 = ((unsigned __int16)v5 ^ (unsigned __int16)((FeatureVariant & 0xFE7F) << 10)) & 0xFC00 ^ v5;
    if ( (FeatureVariant & 0x100) != 0 )
      a2[1] = v11;
    else
      a2[1] = 0;
  }
  else
  {
    a2[1] = 0;
    v6 = v5 & 0xFFFF03FF | 0x800;
  }
  *a2 = v6;
  return a2;
}
