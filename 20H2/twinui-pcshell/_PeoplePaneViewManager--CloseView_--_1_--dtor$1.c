/*
 * XREFs of _PeoplePaneViewManager::CloseView_::_1_::dtor$1 @ 0x18025E328
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PeoplePaneViewManager::CloseView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
