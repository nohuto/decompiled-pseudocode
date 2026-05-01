/*
 * XREFs of _CApplicationViewManager::SetAppStateForViews_::_1_::dtor$4 @ 0x18016BEA5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall CApplicationViewManager::SetAppStateForViews_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 168) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 168) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)(a2 + 56));
  }
}
