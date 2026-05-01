/*
 * XREFs of _AppSwitchOperation::EvictApp_::_1_::dtor$2 @ 0x180406DA5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppSwitchOperation::EvictApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 128));
}
