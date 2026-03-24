/*
 * XREFs of ??$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@PEAU12@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180194DA0
 * Callers:
 *     ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180194AE8 (--$_Emplace_reallocate@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *,CSuperWetInkManager::VailSuperWetStroke *,std::allocator<CSuperWetInkManager::VailSuperWetStroke>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 80) = *(_QWORD *)(a1 + 80);
    a3 += 88LL;
    a1 += 88LL;
  }
  return a3;
}
