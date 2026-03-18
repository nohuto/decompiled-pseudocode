/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180195D38
 * Callers:
 *     ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUVailSuperWetStroke@CSuperWetInkManager@@XZ @ 0x180196040 (--$emplace_back@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWet.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@PEAU12@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180195FF0 (--$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@PEAU12@V-$allocator@UVailSupe.c)
 *     ?_Change_array@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUVailSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x18019764C (-_Change_array@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWetStrok.c)
 */

__int64 __fastcall std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Emplace_reallocate<>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  SIZE_T v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r10

  v4 = (unsigned __int128)((a2 - *a1) * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64;
  v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 4);
  v6 = (a1[1] - *a1) / 88;
  if ( v6 == 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 88;
  v9 = v8 >> 1;
  if ( v8 <= 0x2E8BA2E8BA2E8BALL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = 88 * v10;
  if ( v10 > 0x2E8BA2E8BA2E8BALL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = 88 * v5;
  v14 = v12;
  *(_DWORD *)(v13 + v12 + 81) = 0;
  *(_WORD *)(v13 + v12 + 85) = 0;
  *(_BYTE *)(v13 + v12 + 87) = 0;
  *(_QWORD *)(v13 + v12) = 0LL;
  *(_QWORD *)(v13 + v12 + 8) = 0LL;
  *(_QWORD *)(v13 + v12 + 16) = -1LL;
  *(_OWORD *)(v13 + v12 + 24) = 0LL;
  *(_OWORD *)(v13 + v12 + 40) = 0LL;
  *(_OWORD *)(v13 + v12 + 56) = 0LL;
  *(_QWORD *)(v13 + v12 + 72) = 0LL;
  *(_BYTE *)(v13 + v12 + 80) = 0;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *,CSuperWetInkManager::VailSuperWetStroke *,std::allocator<CSuperWetInkManager::VailSuperWetStroke>>(
      v16,
      a2,
      v12);
    v15 = a1[1];
    v14 = v17 + v13 + 88;
    v16 = a2;
  }
  std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *,CSuperWetInkManager::VailSuperWetStroke *,std::allocator<CSuperWetInkManager::VailSuperWetStroke>>(
    v16,
    v15,
    v14);
  std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Change_array(a1, v18, v7, v10);
  return v13 + *a1;
}
