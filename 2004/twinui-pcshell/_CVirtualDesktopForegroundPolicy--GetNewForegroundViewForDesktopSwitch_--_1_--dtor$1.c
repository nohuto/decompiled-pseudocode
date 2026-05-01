/*
 * XREFs of _CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch_::_1_::dtor$1 @ 0x1804384C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 48));
}
