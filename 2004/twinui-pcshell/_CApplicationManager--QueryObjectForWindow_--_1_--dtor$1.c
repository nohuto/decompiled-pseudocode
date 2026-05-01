/*
 * XREFs of _CApplicationManager::QueryObjectForWindow_::_1_::dtor$1 @ 0x18014F1F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::QueryObjectForWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 80));
}
