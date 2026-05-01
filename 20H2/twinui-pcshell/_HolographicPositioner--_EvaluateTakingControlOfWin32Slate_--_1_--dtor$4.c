/*
 * XREFs of _HolographicPositioner::_EvaluateTakingControlOfWin32Slate_::_1_::dtor$4 @ 0x180244053
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall HolographicPositioner::_EvaluateTakingControlOfWin32Slate_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 128) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 128) &= ~2u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 48));
  }
}
