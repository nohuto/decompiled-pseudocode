/*
 * XREFs of _TabletModePositioner::ViewRemoved_::_1_::dtor$2 @ 0x18040072B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::ViewRemoved_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 128));
}
