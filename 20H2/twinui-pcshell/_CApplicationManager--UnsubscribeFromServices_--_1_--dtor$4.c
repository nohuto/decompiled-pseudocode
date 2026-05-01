/*
 * XREFs of _CApplicationManager::UnsubscribeFromServices_::_1_::dtor$4 @ 0x18015482D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::UnsubscribeFromServices_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 96));
}
