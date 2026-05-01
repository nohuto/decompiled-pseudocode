/*
 * XREFs of _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$2 @ 0x180449A8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
