/*
 * XREFs of ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x1802A08FC
 * Callers:
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802A100C (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802A10B8 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1802A06CC (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
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
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  float v17; // xmm1_4
  float v18; // xmm0_4
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v7 = *(float *)&a3;
  if ( *(_BYTE *)a2 == 2 )
  {
    v8 = (char *)this + 64;
    *((_QWORD *)this + 8) = *(_QWORD *)a2;
    *((_QWORD *)this + 9) = *((_QWORD *)a2 + 1);
    if ( a5 )
    {
      v15 = *(__m128 *)&a3;
      v16 = (__m128)(unsigned int)FLOAT_1_0;
      v16.m128_f32[0] = (float)((float)(1.0 - v7) * *((float *)this + 10)) + (float)(v7 * *((float *)this + 19));
      v15.m128_f32[0] = (float)(v7 * *((float *)this + 18)) + (float)((float)(1.0 - v7) * *((float *)this + 9));
      *a5 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v15, v16).m128_u64[0];
    }
    v17 = a4 * *((float *)this + 18);
    v18 = (float)(1.0 - a4) * *((float *)this + 9);
    *((float *)this + 19) = (float)(a4 * *((float *)this + 19)) + (float)((float)(1.0 - a4) * *((float *)this + 10));
    *((float *)this + 18) = v17 + v18;
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
      v8 = (char *)this + 64;
      *((_BYTE *)this + 65) = *((_BYTE *)this + 81);
      v11 = *((float *)this + 9);
      v12 = *((float *)this + 26);
      v13 = (float)((float)(1.0 - a4) * *((float *)this + 10)) + (float)(a4 * *((float *)this + 27));
      *((float *)this + 18) = (float)(v12 * a4) + (float)(v11 * (float)(1.0 - a4));
      *((float *)this + 19) = v13;
      if ( a5 )
      {
        v10.m128_f32[0] = 1.0 - v7;
        v14 = v10;
        v10.m128_f32[0] = (float)((float)(1.0 - v7) * *((float *)this + 10)) + (float)(v7 * *((float *)this + 27));
        v14.m128_f32[0] = (float)(v14.m128_f32[0] * v11) + (float)(v12 * v7);
        v9 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v14, v10).m128_u64[0];
        goto LABEL_9;
      }
    }
  }
  return (struct Path::Segment *)v8;
}
