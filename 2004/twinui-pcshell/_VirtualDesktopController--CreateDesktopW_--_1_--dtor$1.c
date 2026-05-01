/*
 * XREFs of _VirtualDesktopController::CreateDesktopW_::_1_::dtor$1 @ 0x180376F0F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::CreateDesktopW_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
