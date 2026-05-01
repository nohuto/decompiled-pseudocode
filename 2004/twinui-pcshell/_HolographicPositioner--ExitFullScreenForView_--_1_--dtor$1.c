/*
 * XREFs of _HolographicPositioner::ExitFullScreenForView_::_1_::dtor$1 @ 0x180240B5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HolographicPositioner::ExitFullScreenForView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
