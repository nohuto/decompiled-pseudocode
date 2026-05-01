/*
 * XREFs of _CClassicWindowManager::HandleWindowReplaced_::_1_::dtor$4 @ 0x1801633B9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CClassicWindowManager::HandleWindowReplaced_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 144) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 144) &= ~2u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 152));
  }
}
