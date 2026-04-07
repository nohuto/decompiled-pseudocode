/*
 * XREFs of ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180055768
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800269B4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180044BDC (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180044D50 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800450BC (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800892BC (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180089458 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180089BE4 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?IsWindowTab@CWindowData@@QEAA_NXZ @ 0x18005515C (-IsWindowTab@CWindowData@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x180055468 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800554AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 */

char __fastcall IsWindowTab(struct CWindowData *this)
{
  char v2; // bl

  v2 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl)
    && this == (struct CWindowData *)-2LL )
  {
    return 1;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl) )
    return 0;
  if ( this != (struct CWindowData *)-1LL && CWindowData::IsWindowTab(this) )
    return 1;
  return v2;
}
