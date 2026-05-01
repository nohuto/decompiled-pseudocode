/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$18 @ 0x1800DB1EE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~8u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((void *)(a2 + 48));
  }
}
