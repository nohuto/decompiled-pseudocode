/*
 * XREFs of _FullScreenPositioner::UnsubscribeFromServices_::_1_::dtor$1 @ 0x1801A829E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FullScreenPositioner::UnsubscribeFromServices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 96));
}
