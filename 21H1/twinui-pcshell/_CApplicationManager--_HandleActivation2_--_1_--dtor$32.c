/*
 * XREFs of _CApplicationManager::_HandleActivation2_::_1_::dtor$32 @ 0x1800DD6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall CApplicationManager::_HandleActivation2_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 236) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 236) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((void *)(a2 + 208));
  }
}
