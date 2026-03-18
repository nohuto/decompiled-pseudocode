/*
 * XREFs of ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x18025F9B8
 * Callers:
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802600D0 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18026017C (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18025F78C (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
struct Path::Segment *__fastcall CTrimPathOperation::InterpolateSegment(
        CTrimPathOperation *this,
        const struct Path::Segment *a2,
        double a3,
        float a4,
        struct D2D_POINT_2F *a5)
{
  float v7; // xmm7_4
  char *v8; // rdi
  struct D2D_POINT_2F v9; // xmm0_8
  __m128 v10; // xmm3
  float v11; // xmm1_4
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  float v15; // xmm1_4
  float v16; // xmm0_4
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v7 = *(float *)&a3;
  if ( *(_BYTE *)a2 == 2 )
  {
    v8 = (char *)this + 64;
    *((_QWORD *)this + 8) = *(_QWORD *)a2;
    *((_QWORD *)this + 9) = *((_QWORD *)a2 + 1);
    if ( a5 )
    {
      v13 = *(__m128 *)&a3;
      v14 = (__m128)(unsigned int)FLOAT_1_0;
      v14.m128_f32[0] = (float)((float)(1.0 - v7) * *((float *)this + 10)) + (float)(v7 * *((float *)this + 19));
      v13.m128_f32[0] = (float)(v7 * *((float *)this + 18)) + (float)((float)(1.0 - v7) * *((float *)this + 9));
      *a5 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v13, v14).m128_u64[0];
    }
    v15 = a4 * *((float *)this + 18);
    v16 = (float)(1.0 - a4) * *((float *)this + 9);
    *((float *)this + 19) = (float)(a4 * *((float *)this + 19)) + (float)((float)(1.0 - a4) * *((float *)this + 10));
    *((float *)this + 18) = v15 + v16;
  }
  else
  {
    if ( *(_BYTE *)a2 != 5 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v8 = (char *)this + 80;
    *((_QWORD *)this + 10) = *(_QWORD *)a2;
    *((_QWORD *)this + 11) = *((_QWORD *)a2 + 1);
    *((_QWORD *)this + 12) = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 13) = *((_QWORD *)a2 + 3);
    if ( CTrimPathOperation::InterpolateBezier(this, *(float *)&a3, a4, a5 != 0LL) )
    {
      *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)this + 120);
      *((_QWORD *)this + 13) = *((_QWORD *)this + 17);
      if ( a5 )
      {
        v9 = (struct D2D_POINT_2F)*((_QWORD *)this + 14);
LABEL_9:
        *a5 = v9;
      }
    }
    else
    {
      v10 = (__m128)(unsigned int)FLOAT_1_0;
      *((_BYTE *)this + 65) = *((_BYTE *)this + 81);
      v8 = (char *)this + 64;
      v11 = (float)((float)(1.0 - a4) * *((float *)this + 9)) + (float)(a4 * *((float *)this + 26));
      *((float *)this + 19) = (float)((float)(1.0 - a4) * *((float *)this + 10)) + (float)(a4 * *((float *)this + 27));
      *((float *)this + 18) = v11;
      if ( a5 )
      {
        v10.m128_f32[0] = 1.0 - *(float *)&a3;
        v12 = v10;
        v10.m128_f32[0] = (float)((float)(1.0 - *(float *)&a3) * *((float *)this + 10))
                        + (float)(*(float *)&a3 * *((float *)this + 27));
        v12.m128_f32[0] = (float)(v12.m128_f32[0] * *((float *)this + 9))
                        + (float)(*(float *)&a3 * *((float *)this + 26));
        v9 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v12, v10).m128_u64[0];
        goto LABEL_9;
      }
    }
  }
  return (struct Path::Segment *)v8;
}
