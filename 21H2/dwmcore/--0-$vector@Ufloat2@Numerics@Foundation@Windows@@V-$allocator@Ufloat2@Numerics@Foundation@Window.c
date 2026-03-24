/*
 * XREFs of ??0?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1802086E8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x1802078FC (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180208B60 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<Windows::Foundation::Numerics::float2>::vector<Windows::Foundation::Numerics::float2>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  SIZE_T v7; // rcx
  char *v8; // rax
  char *v9; // rdi
  size_t v10; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = (v4 - *(_QWORD *)a2) >> 3;
    v6 = 8 * v5;
    v7 = 8 * v5;
    if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
      v7 = -1LL;
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    *a1 = v8;
    v9 = v8;
    a1[1] = v8;
    a1[2] = &v8[v6];
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0(v8, *(const void **)a2, v10);
    a1[1] = &v9[v10];
  }
  return a1;
}
