/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A8A8
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009A1C0 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@.c)
 * Callees:
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007DC28 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18009E430 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NW4.c)
 */

unsigned int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCurrentVariantState(
        __int64 a1,
        unsigned int *a2,
        int *a3)
{
  unsigned int FeatureVariant; // eax
  unsigned int v5; // ecx
  int v6; // esi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char IsEnabled; // al
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int *result; // rax
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = HIDWORD(a1);
  v13 = 0;
  FeatureVariant = (unsigned int)wil::details::WilApi_GetFeatureVariant(
                                   (wil::details *)0x1A1A690,
                                   3LL,
                                   (__int64)&v15,
                                   &v13,
                                   a3);
  *a2 = 0;
  v5 = v13;
  a2[1] = 0;
  v6 = FeatureVariant & 0x100;
  *a2 &= ~0x100u;
  v7 = v5 != 0 ? 0x100 : 0;
  v8 = FeatureVariant & 0xFFFFFE7F;
  *a2 = (v7 | *a2) ^ ((unsigned __int16)(4 * FeatureVariant) ^ ((v5 != 0 ? 0x100 : 0) | (unsigned __int16)*a2)) & 0x200;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(
                &`wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetImpl'::`2'::impl,
                v7,
                256LL);
  v10 = *a2;
  if ( IsEnabled )
  {
    if ( v8 )
    {
      v11 = ((unsigned __int16)v10 ^ (unsigned __int16)((_WORD)v8 << 10)) & 0xFC00 ^ v10;
      if ( v6 )
        a2[1] = v15;
      else
        a2[1] = 0;
    }
    else
    {
      a2[1] = 0;
      v11 = v10 & 0xFFFF03FF | 0x1800;
    }
  }
  else
  {
    a2[1] = 0;
    v11 = v10 & 0xFFFF03FF;
  }
  result = a2;
  *a2 = v11;
  return result;
}
