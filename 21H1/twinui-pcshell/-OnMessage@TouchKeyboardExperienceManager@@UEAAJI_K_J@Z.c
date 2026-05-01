/*
 * XREFs of ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x18032CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A4258 (-OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@@details@wil@@QEAA_NXZ @ 0x1800A481C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@.c)
 *     ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18032C1D8 (-OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnMessage(
        TouchKeyboardExperienceManager *this,
        int a2,
        __int64 a3,
        const WCHAR *a4)
{
  if ( a2 == 26 )
  {
    if ( CompareStringOrdinal(a4, -1, L"ConvertibleSlateMode", -1, 1) == 2 )
      TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  }
  else if ( a2 == 126
         && wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::GetImpl'::`2'::impl) )
  {
    TouchKeyboardExperienceManager::OnDisplayChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  }
  return 0LL;
}
