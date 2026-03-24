/*
 * XREFs of ??$_Uninitialized_move@PEAUFigure@CPathEmitterEdge@EmitterShapes@@PEAU123@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU123@0PEAU123@AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x180208584
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x1802078FC (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure@CPathEmitterEdge@EmitterShapes@@0AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x180207740 (--$_Destroy_range@V-$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<EmitterShapes::CPathEmitterEdge::Figure *,EmitterShapes::CPathEmitterEdge::Figure *,std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  int v6; // ecx

  if ( a1 != a2 )
  {
    v4 = a1 + 40;
    v5 = (char *)a3 - a1;
    do
    {
      v6 = *(_DWORD *)(v4 + 8);
      *a3 = 0LL;
      *(_QWORD *)&v5[v4 - 32] = 0LL;
      *(_QWORD *)&v5[v4 - 24] = 0LL;
      *a3 = *(_QWORD *)(v4 - 40);
      a3 += 7;
      *(_QWORD *)&v5[v4 - 32] = *(_QWORD *)(v4 - 32);
      *(_QWORD *)&v5[v4 - 24] = *(_QWORD *)(v4 - 24);
      *(_QWORD *)(v4 - 40) = 0LL;
      *(_QWORD *)(v4 - 32) = 0LL;
      *(_QWORD *)(v4 - 24) = 0LL;
      *(_QWORD *)&v5[v4 - 16] = 0LL;
      *(_QWORD *)&v5[v4 - 8] = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      *(_QWORD *)&v5[v4 - 16] = *(_QWORD *)(v4 - 16);
      *(_QWORD *)&v5[v4 - 8] = *(_QWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_DWORD *)&v5[v4 + 8] = v6;
      *(_QWORD *)(v4 - 16) = 0LL;
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      v4 += 56LL;
    }
    while ( v4 - 40 != a2 );
  }
  std::_Destroy_range<std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>((__int64)a3, (__int64)a3);
  return a3;
}
