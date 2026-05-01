/*
 * XREFs of _TabletModePositioner::OnShellHookMessage_::_1_::dtor$1 @ 0x1803F9CBA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::OnShellHookMessage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 40));
}
