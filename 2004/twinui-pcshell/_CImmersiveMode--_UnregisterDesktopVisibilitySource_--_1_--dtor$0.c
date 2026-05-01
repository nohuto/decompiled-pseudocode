/*
 * XREFs of _CImmersiveMode::_UnregisterDesktopVisibilitySource_::_1_::dtor$0 @ 0x180161D0F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveMode::_UnregisterDesktopVisibilitySource_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
