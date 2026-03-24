/*
 * XREFs of ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1802098DC
 * Callers:
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18000AD70 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLineSegment::Intersects(
        CLineSegment *this,
        const struct CLineSegment *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  float v3; // xmm2_4
  __m128 v4; // xmm7
  __m128 v5; // xmm8
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm6_4
  bool result; // al

  v3 = *((float *)a2 + 3);
  v4 = (__m128)*((unsigned int *)this + 2);
  v5 = (__m128)*((unsigned int *)this + 3);
  v6 = *((float *)this + 2) * v3;
  v7 = *((float *)this + 3) * *((float *)a2 + 2);
  *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  result = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - v7) & _xmm) >= 0.0000011920929 )
  {
    v8 = (float)((float)(v3 * (float)(*(float *)a2 - *(float *)this))
               - (float)((float)(*((float *)a2 + 1) - *((float *)this + 1)) * *((float *)a2 + 2)))
       / (float)(v6 - v7);
    v9 = (float)(v5.m128_f32[0] * (float)(*(float *)this - *(float *)a2))
       - (float)((float)(*((float *)this + 1) - *((float *)a2 + 1)) * v4.m128_f32[0]);
    v4.m128_f32[0] = (float)(v4.m128_f32[0] * v8) + *(float *)this;
    v5.m128_f32[0] = (float)(v5.m128_f32[0] * v8) + *((float *)this + 1);
    v10 = v9 / (float)(v7 - v6);
    *(_QWORD *)a3 = _mm_unpacklo_ps(v4, v5).m128_u64[0];
    if ( v10 >= 0.0 && v10 <= 1.0 && v8 >= 0.0 && v8 <= 1.0 )
      return 1;
  }
  return result;
}
