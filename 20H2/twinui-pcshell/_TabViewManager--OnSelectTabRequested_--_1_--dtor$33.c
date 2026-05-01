/*
 * XREFs of _TabViewManager::OnSelectTabRequested_::_1_::dtor$33 @ 0x180273085
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::OnSelectTabRequested_::_1_::dtor_33(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~2u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
  }
}
