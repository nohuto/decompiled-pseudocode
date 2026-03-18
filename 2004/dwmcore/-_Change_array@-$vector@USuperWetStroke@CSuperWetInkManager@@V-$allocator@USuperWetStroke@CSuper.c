/*
 * XREFs of ?_Change_array@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x1801975A8
 * Callers:
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180195BB4 (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@0AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x18015615C (--$_Destroy_range@V-$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetS.c)
 */

__int64 __fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 80 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 80LL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 80 * a3;
  result = a2 + 80 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
