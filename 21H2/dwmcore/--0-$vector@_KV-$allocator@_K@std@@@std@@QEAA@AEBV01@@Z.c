/*
 * XREFs of ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D1B40
 * Callers:
 *     ?OnRenderTargetBeginRender@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800794C4 (-OnRenderTargetBeginRender@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAV.c)
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180257FFC (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802590F0 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B7030 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

_QWORD *__fastcall std::vector<unsigned __int64>::vector<unsigned __int64>(_QWORD *a1, __int64 a2)
{
  const void *v3; // r14
  __int64 v4; // rbp
  signed __int64 v5; // rbp
  SIZE_T size_of; // rax
  char *v7; // rax
  char *v8; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = v4 - (_QWORD)v3;
    size_of = std::_Get_size_of_n<8>(v5 >> 3);
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = &v7[8 * (v5 >> 3)];
    memmove_0(v7, v3, v5);
    a1[1] = &v8[8 * (v5 >> 3)];
  }
  return a1;
}
