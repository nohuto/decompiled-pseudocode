/*
 * XREFs of ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180257FFC
 * Callers:
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802590F0 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180077FE0 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D1B40 (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAUFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU123@0PEAU123@AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x180258BF8 (--$_Uninitialized_move@PEAUFigure@CPathEmitterEdge@EmitterShapes@@V-$allocator@UFigure@CPathEmit.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180258CB0 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@AEAAXQEAUFigure@CPathEmitterEdge@EmitterShapes@@_K1@Z @ 0x180259DC4 (-_Change_array@-$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V-$allocator@UFigure@CPathEmitte.c)
 */

__int64 __fastcall std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Emplace_reallocate<EmitterShapes::CPathEmitterEdge::Figure const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = 0x492492492492492LL;
  v7 = (a2 - *a1) / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<56>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + 56 * v7;
  std::vector<unsigned __int64>::vector<unsigned __int64>((_QWORD *)v14, a3);
  std::vector<float>::vector<float>(v14 + 24, a3 + 24);
  v15 = v13;
  *(_DWORD *)(v14 + 48) = *(_DWORD *)(a3 + 48);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<EmitterShapes::CPathEmitterEdge::Figure *>(v17, a2, v13);
    v16 = a1[1];
    v15 = v14 + 56;
    v17 = a2;
  }
  std::_Uninitialized_move<EmitterShapes::CPathEmitterEdge::Figure *>(v17, v16, v15);
  std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Change_array(a1, v13, v9, v4);
  return v14;
}
