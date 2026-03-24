/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180194964
 * Callers:
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180196120 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180194D10 (--$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@V-$allocator@USuperWetStro.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x180196340 (-_Change_array@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuper.c)
 */

__int64 __fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  SIZE_T v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx

  v4 = (unsigned __int128)((a2 - *a1) * (__int128)0x6666666666666667LL) >> 64;
  v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 5);
  v6 = (a1[1] - *a1) / 80;
  if ( v6 == 0x333333333333333LL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 80;
  v9 = v8 >> 1;
  if ( v8 <= 0x333333333333333LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = 80 * v10;
  if ( v10 > 0x333333333333333LL )
    v11 = -1LL;
  v12 = 80 * v5;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  *(_DWORD *)(v12 + v13 + 73) = 0;
  *(_WORD *)(v12 + v13 + 77) = 0;
  *(_BYTE *)(v12 + v13 + 79) = 0;
  *(_QWORD *)(v12 + v13 + 8) = 0LL;
  *(_QWORD *)(v12 + v13) = 0LL;
  *(_OWORD *)(v12 + v13 + 16) = 0LL;
  *(_OWORD *)(v12 + v13 + 32) = 0LL;
  *(_OWORD *)(v12 + v13 + 48) = 0LL;
  *(_QWORD *)(v12 + v13 + 64) = 0LL;
  *(_BYTE *)(v12 + v13 + 72) = 0;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<CSuperWetInkManager::SuperWetStroke *,CSuperWetInkManager::SuperWetStroke *,std::allocator<CSuperWetInkManager::SuperWetStroke>>(
      v15,
      a2);
    v14 = a1[1];
    v15 = a2;
  }
  std::_Uninitialized_move<CSuperWetInkManager::SuperWetStroke *,CSuperWetInkManager::SuperWetStroke *,std::allocator<CSuperWetInkManager::SuperWetStroke>>(
    v15,
    v14);
  std::vector<CSuperWetInkManager::SuperWetStroke>::_Change_array(a1, v13, v7, v10);
  return v12 + *a1;
}
