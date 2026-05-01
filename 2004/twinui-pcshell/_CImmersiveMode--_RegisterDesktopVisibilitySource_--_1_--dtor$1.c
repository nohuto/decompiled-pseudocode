/*
 * XREFs of _CImmersiveMode::_RegisterDesktopVisibilitySource_::_1_::dtor$1 @ 0x18016188A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveMode::_RegisterDesktopVisibilitySource_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 80));
}
