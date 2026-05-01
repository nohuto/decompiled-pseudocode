/*
 * XREFs of _CApplicationManager::UnsubscribeFromServices_::_1_::dtor$1 @ 0x180154809
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::UnsubscribeFromServices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 96));
}
