/*
 * XREFs of ?AddTriangles@CPathEmitterArea@EmitterShapes@@EEAAXPEBUD2D1_TRIANGLE@@I@Z @ 0x18020A690
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@QEAAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x1802093B4 (--$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@-$vector@UAreaTriangle@.c)
 */

void __fastcall EmitterShapes::CPathEmitterArea::AddTriangles(
        EmitterShapes::CPathEmitterArea *this,
        const struct D2D1_TRIANGLE *a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  FLOAT *p_y; // rbx
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int64 v8; // xmm0_8
  float v9; // eax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  float v12; // [rsp+38h] [rbp-20h]

  if ( a3 )
  {
    v4 = a3;
    p_y = &a2->point2.y;
    do
    {
      v12 = (float)((float)((float)((float)(p_y[2] - *(p_y - 2)) * *(p_y - 1))
                          + (float)((float)(*p_y - p_y[2]) * *(p_y - 3)))
                  + (float)((float)(*(p_y - 2) - *p_y) * p_y[1]))
          * 0.5;
      *((float *)this + 2) = v12 + *((float *)this + 2);
      v6 = *(_OWORD *)(p_y - 3);
      v7 = *((_QWORD *)this + 3);
      v8 = *(_QWORD *)(p_y + 1);
      v10 = v6;
      v11 = v8;
      if ( *((_QWORD *)this + 4) == v7 )
      {
        std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Emplace_reallocate<EmitterShapes::CPathEmitterArea::AreaTriangle const &>(
          (const void **)this + 2,
          (_BYTE *)v7,
          (__int64)&v10);
      }
      else
      {
        v9 = v12;
        *(_OWORD *)v7 = v6;
        *(_QWORD *)(v7 + 16) = v8;
        *(float *)(v7 + 24) = v9;
        *((_QWORD *)this + 3) += 28LL;
      }
      p_y += 6;
      --v4;
    }
    while ( v4 );
  }
}
