/*
 * XREFs of ?GetLargestOccluder@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAV2@@Z @ 0x1800B8D00
 * Callers:
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CArrayBasedCoverageSet::GetLargestOccluder(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  float i; // xmm5_4
  __int64 v6; // rcx
  const __m128i *v8; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // r9
  int v11; // r10d
  __m128i v12; // xmm0
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm7_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  __m128i v20; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v4 = a1;
  for ( i = 0.0; (unsigned int)v3 < *(_DWORD *)(v4 + 24); v3 = (unsigned int)(v11 + 1) )
  {
    v6 = *(_QWORD *)v4 + 36 * v3;
    if ( *(_DWORD *)(v6 + 16) >= a3 )
      break;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v6) )
    {
      v12 = _mm_loadu_si128(v8);
      v20 = v12;
      if ( *(float *)v9 > *(float *)v12.m128i_i32 )
        v12.m128i_i32[0] = *(_DWORD *)v9;
      v13 = *(float *)&v20.m128i_i32[1];
      v14 = *(float *)&v20.m128i_i32[1];
      if ( *(float *)(v9 + 4) > *(float *)&v20.m128i_i32[1] )
      {
        v13 = *(float *)(v9 + 4);
        v14 = v13;
      }
      v15 = *(float *)&v20.m128i_i32[2];
      v16 = *(float *)&v20.m128i_i32[2];
      v17 = *(float *)&v20.m128i_i32[2];
      if ( *(float *)&v20.m128i_i32[2] > *(float *)(v9 + 8) )
      {
        v15 = *(float *)(v9 + 8);
        v16 = v15;
        v17 = v15;
      }
      v18 = *(float *)&v20.m128i_i32[3];
      if ( *(float *)&v20.m128i_i32[3] > *(float *)(v9 + 12) )
      {
        v18 = *(float *)(v9 + 12);
        v16 = v17;
      }
      if ( v15 > *(float *)v12.m128i_i32 && v18 > v14 )
      {
        v19 = (float)(v16 - *(float *)v12.m128i_i32) * (float)(v18 - v13);
        if ( v19 > i )
        {
          i = v19;
          *v10 = *(_OWORD *)v9;
        }
      }
    }
  }
  return i > 0.0;
}
