/*
 * XREFs of ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180206B6C
 * Callers:
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180207DD0 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUFigure@CPathEmitterEdge@EmitterShapes@@PEAU123@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU123@0PEAU123@AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x1802077F4 (--$_Uninitialized_move@PEAUFigure@CPathEmitterEdge@EmitterShapes@@PEAU123@V-$allocator@UFigure@C.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x1802078AC (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180207958 (--0-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@Window.c)
 *     ?_Change_array@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@AEAAXQEAUFigure@CPathEmitterEdge@EmitterShapes@@_K1@Z @ 0x1802089C4 (-_Change_array@-$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V-$allocator@UFigure@CPathEmitte.c)
 */

__int64 __fastcall std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Emplace_reallocate<EmitterShapes::CPathEmitterEdge::Figure const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx

  v6 = (a2 - *a1) / 56;
  v7 = (a1[1] - *a1) / 56;
  if ( v7 == 0x492492492492492LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 56;
  v10 = v9 >> 1;
  if ( v9 <= 0x492492492492492LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 56 * v11;
  if ( v11 > 0x492492492492492LL )
    v12 = -1LL;
  v13 = 56 * v6;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = 56 * v6 + v14;
  std::vector<Windows::Foundation::Numerics::float2>::vector<Windows::Foundation::Numerics::float2>(v15, a3);
  std::vector<float>::vector<float>(v15 + 24, a3 + 24);
  v16 = v14;
  *(_DWORD *)(v15 + 48) = *(_DWORD *)(a3 + 48);
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<EmitterShapes::CPathEmitterEdge::Figure *,EmitterShapes::CPathEmitterEdge::Figure *,std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>(
      v18,
      a2,
      v14);
    v17 = a1[1];
    v16 = v15 + 56;
    v18 = a2;
  }
  std::_Uninitialized_move<EmitterShapes::CPathEmitterEdge::Figure *,EmitterShapes::CPathEmitterEdge::Figure *,std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>(
    v18,
    v17,
    v16);
  std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Change_array(a1, v14, v8, v11);
  return v13 + *a1;
}
