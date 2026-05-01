/*
 * XREFs of _TabletModePositioner::CleanupBackgroundViews_::_1_::dtor$5 @ 0x1803F563A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::CleanupBackgroundViews_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 72));
}
