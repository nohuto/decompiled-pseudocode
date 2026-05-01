/*
 * XREFs of ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18034BED8
 * Callers:
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_7cc81168d6c0e2361bee2f6882a4617c___ @ 0x18034631C (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_KBV.c)
 *     _lambda_3e53f08b81f91dd8dc90e3c0055f1792_::operator() @ 0x180347B28 (_lambda_3e53f08b81f91dd8dc90e3c0055f1792_--operator().c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x180348D3C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180348ECC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18034A3C0 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B3C34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ??B_Atomic_bool@std@@QEBA_NXZ @ 0x18021EBEC (--B_Atomic_bool@std@@QEBA_NXZ.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x18034A3A0 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 */

char __fastcall KBViewInfo::IsValid(KBViewInfo *this)
{
  char v2; // di

  v2 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( std::_Atomic_bool::operator bool((_BYTE *)this + 32)
    || !*((_BYTE *)this + 33)
    || (unsigned int)KBViewInfo::GetFirstViewType(this) == -1
    || *((_DWORD *)this + 26) == -1 )
  {
    return 0;
  }
  return v2;
}
