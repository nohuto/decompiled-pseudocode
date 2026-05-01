/*
 * XREFs of ?GetWindowsSearchBoxWidth@@YAH_N0@Z @ 0x180096E98
 * Callers:
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x180096A20 (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180013770 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsDeviceAADJoined@@YA_NXZ @ 0x1800970D0 (-IsDeviceAADJoined@@YA_NXZ.c)
 *     ?IsDeviceDomainJoined@@YA_NXZ @ 0x1800971BC (-IsDeviceDomainJoined@@YA_NXZ.c)
 *     ?IsSmallIconsMode@@YA_NXZ @ 0x180097230 (-IsSmallIconsMode@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer@@@details@wil@@QEAA_NXZ @ 0x180097654 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToCo.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon@@@details@wil@@QEAA_NXZ @ 0x180097694 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top.c)
 */

__int64 __fastcall GetWindowsSearchBoxWidth(unsigned __int8 a1, char a2)
{
  int v2; // esi
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::GetImpl'::`2'::impl)
    && a2
    && IsSmallIconsMode() )
  {
    return 258LL;
  }
  v5 = (_BYTE)v2 != 0 ? 344 : 320;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer>::GetImpl'::`2'::impl) )
  {
    if ( a2 && !IsDeviceDomainJoined() && !IsDeviceAADJoined() )
      goto LABEL_9;
    return v5;
  }
  if ( !a2 )
    return v5;
LABEL_9:
  v7 = 0;
  v6 = (_BYTE)v2 != 0 ? 344 : 320;
  if ( (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)(unsigned int)(v2 + 30), &v7) >= 0
    && v7 >= 0xF0
    && (int)v7 <= (int)v5 )
  {
    return v7;
  }
  return v6;
}
