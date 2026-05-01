/*
 * XREFs of _TabletModePositioner::ControlLost_::_1_::dtor$1 @ 0x1803F65B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::ControlLost_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 48));
}
