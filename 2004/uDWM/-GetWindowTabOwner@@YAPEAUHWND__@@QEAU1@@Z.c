/*
 * XREFs of ?GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x180055EE0
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180007D30 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x180055468 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 */

HANDLE __fastcall GetWindowTabOwner(HWND a1)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl) )
    return GetPropW(a1, (LPCWSTR)0xA920);
  else
    return 0LL;
}
