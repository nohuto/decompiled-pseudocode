/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180327D2C
 * Callers:
 *     _lambda_2a6490a8cf13452a213c8a59fbbd282a_::operator() @ 0x1800A0F80 (_lambda_2a6490a8cf13452a213c8a59fbbd282a_--operator().c)
 *     _lambda_6cb9c82818ac450c49952f27b766afb5_::operator() @ 0x1800A16DC (_lambda_6cb9c82818ac450c49952f27b766afb5_--operator().c)
 *     _lambda_e446c7c5fc519c205d2c977b283b134b_::operator() @ 0x1800A1F70 (_lambda_e446c7c5fc519c205d2c977b283b134b_--operator().c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803279A4 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x1803296A0 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x18032C7E4 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A42F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801FC2E0 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_7cc81168d6c0e2361bee2f6882a4617c___ @ 0x1803251EC (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_KBV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(__int64 a1, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rsi
  unsigned int v7; // ebx
  KBViewInfo **v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+58h] [rbp+20h]

  v6 = (RTL_SRWLOCK *)(a1 + 416);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 416));
  v10 = v6;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_7cc81168d6c0e2361bee2f6882a4617c___(
    &v9,
    *(KBViewInfo ***)(a1 + 424),
    *(KBViewInfo ***)(a1 + 432),
    a2);
  if ( v9 == *(KBViewInfo ***)(a1 + 432) )
  {
    v7 = -2147023728;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v9);
    v7 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
