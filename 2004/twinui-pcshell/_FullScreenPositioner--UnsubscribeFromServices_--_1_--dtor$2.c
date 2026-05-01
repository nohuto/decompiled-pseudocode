/*
 * XREFs of _FullScreenPositioner::UnsubscribeFromServices_::_1_::dtor$2 @ 0x1801A86DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FullScreenPositioner::UnsubscribeFromServices_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 96));
}
