/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x180311D4C
 * Callers:
 *     ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1800B3DB4 (--$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMana.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B3FDC (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18030F1AC (--$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::__lambda_fac65b3379140ccb2da51a4d302d8ccb_ @ 0x18030FF60 (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--__lambda_fac65b3379140ccb2da51a4d302d8ccb_.c)
 *     ??1?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18030FFCC (--1-$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1803124C0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180312400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$C_ea_180312400.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IAltTabViewHostInternal>::Release(v1);
  }
  return result;
}
