/*
 * XREFs of _TabViewManager::OnViewCanTabChanged_::_1_::dtor$11 @ 0x180274BB1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::OnViewCanTabChanged_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 48));
  }
}
