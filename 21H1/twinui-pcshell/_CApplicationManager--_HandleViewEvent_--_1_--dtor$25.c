/*
 * XREFs of _CApplicationManager::_HandleViewEvent_::_1_::dtor$25 @ 0x1800DB164
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall CApplicationManager::_HandleViewEvent_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 216) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 216) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((void *)(a2 + 56));
  }
}
