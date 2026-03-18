/*
 * XREFs of ?CalculateFigureLength@Figure@CPathEmitterEdge@EmitterShapes@@QEAAX_N@Z @ 0x180207EAC
 * Callers:
 *     ?EndFigure@CPathEmitterEdge@EmitterShapes@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x1802082B0 (-EndFigure@CPathEmitterEdge@EmitterShapes@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800EECEB (sqrtf_0.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801DDD80 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 */

void __fastcall EmitterShapes::CPathEmitterEdge::Figure::CalculateFigureLength(
        EmitterShapes::CPathEmitterEdge::Figure *this,
        char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  float v5; // xmm0_4
  float *v6; // rdx
  float *v7; // rcx
  unsigned __int64 v8; // rax
  float v9; // xmm0_4
  float v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v4 = *((_QWORD *)this + 1);
    v5 = sqrtf_0(
           (float)((float)(*(float *)(v4 - 4) - *(float *)(*(_QWORD *)this + 4LL))
                 * (float)(*(float *)(v4 - 4) - *(float *)(*(_QWORD *)this + 4LL)))
         + (float)((float)(*(float *)(v4 - 8) - **(float **)this) * (float)(*(float *)(v4 - 8) - **(float **)this)));
    v6 = (float *)*((_QWORD *)this + 4);
    v10 = v5;
    if ( *((float **)this + 5) == v6 )
    {
      std::vector<float>::_Emplace_reallocate<float const &>((const void **)this + 3, v6, &v10);
    }
    else
    {
      *((_QWORD *)this + 4) += 4LL;
      *v6 = v5;
    }
  }
  *((_DWORD *)this + 12) = 0;
  v7 = (float *)*((_QWORD *)this + 3);
  v8 = (unsigned __int64)(*((_QWORD *)this + 4) - (_QWORD)v7 + 3LL) >> 2;
  if ( (unsigned __int64)v7 > *((_QWORD *)this + 4) )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = 0.0;
    do
    {
      v9 = v9 + *v7++;
      ++v2;
      *((float *)this + 12) = v9;
    }
    while ( v2 != v8 );
  }
}
