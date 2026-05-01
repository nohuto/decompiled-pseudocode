/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009BEC8
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009BB5C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@.c)
 * Callees:
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007C444 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@@details@wil@@SA_NXZ @ 0x180099268 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@@details@w.c)
 */

_DWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCurrentVariantState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  unsigned int FeatureVariant; // eax
  unsigned int v5; // ecx
  int v6; // esi
  unsigned int v7; // ebx
  bool IsEnabled; // al
  int v9; // ecx
  unsigned int v10; // ecx
  _DWORD *result; // rax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = HIDWORD(a1);
  v12 = 0;
  FeatureVariant = (unsigned int)wil::details::WilApi_GetFeatureVariant(
                                   (wil::details *)0x1A1A690,
                                   3LL,
                                   (__int64)&v14,
                                   &v12,
                                   a3);
  *a2 = 0;
  v5 = v12;
  a2[1] = 0;
  v6 = FeatureVariant & 0x100;
  *a2 &= ~0x100u;
  v7 = FeatureVariant & 0xFFFFFE7F;
  *a2 = ((v5 != 0 ? 0x100 : 0) | *a2) ^ ((unsigned __int16)(4 * FeatureVariant) ^ ((v5 != 0 ? 0x100 : 0) | (unsigned __int16)*a2)) & 0x200;
  IsEnabled = wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_FeedsCore>>::IsEnabled();
  v9 = *a2;
  if ( IsEnabled )
  {
    if ( v7 )
    {
      v10 = ((unsigned __int16)v9 ^ (unsigned __int16)((_WORD)v7 << 10)) & 0xFC00 ^ v9;
      if ( v6 )
        a2[1] = v14;
      else
        a2[1] = 0;
    }
    else
    {
      a2[1] = 0;
      v10 = v9 & 0xFFFF03FF | 0x1800;
    }
  }
  else
  {
    a2[1] = 0;
    v10 = v9 & 0xFFFF03FF;
  }
  result = a2;
  *a2 = v10;
  return result;
}
