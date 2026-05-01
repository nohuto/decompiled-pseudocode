/*
 * XREFs of _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$1 @ 0x180245B1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HolographicPositioner::_RaiseViewRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 96));
}
