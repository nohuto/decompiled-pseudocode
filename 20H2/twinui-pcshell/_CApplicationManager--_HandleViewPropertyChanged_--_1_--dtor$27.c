/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$27 @ 0x1801029D4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_27(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~0x20u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((void *)(a2 + 112));
  }
}
