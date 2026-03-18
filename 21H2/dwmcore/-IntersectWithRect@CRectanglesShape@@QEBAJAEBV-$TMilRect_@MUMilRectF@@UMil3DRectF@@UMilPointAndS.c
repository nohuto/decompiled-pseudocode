/*
 * XREFs of ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180191078
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800A7EE0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x1800B6DFC (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800D3334 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CRectanglesShape::IntersectWithRect(struct CRectanglesShape *a1, float *a2, CRectanglesShape **a3)
{
  char *v3; // rbx
  unsigned int v4; // r14d
  unsigned int v5; // edi
  struct CRectanglesShape *v8; // r15
  char *i; // rsi
  float v10; // xmm2_4
  __m128 v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v20; // rcx
  int v21; // r8d
  char *v22; // rdi
  CRectanglesShape *v23; // rax
  CRectanglesShape *v24; // r15
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  void *v29[2]; // [rsp+38h] [rbp-38h] BYREF
  char *v30; // [rsp+48h] [rbp-28h]
  void *v31[2]; // [rsp+50h] [rbp-20h] BYREF

  v3 = 0LL;
  v4 = 0;
  *a3 = 0LL;
  v5 = 0;
  v30 = 0LL;
  v8 = a1;
  *(_OWORD *)v29 = 0LL;
  for ( i = 0LL; v5 < *((_DWORD *)v8 + 10); ++v5 )
  {
    v10 = *a2;
    a1 = (struct CRectanglesShape *)(2LL * v5);
    v11 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)v8 + 2) + 16LL * v5));
    *(__m128 *)v31 = v11;
    LODWORD(v31[0]) = v11.m128_i32[0];
    v12 = v11.m128_f32[0];
    if ( v10 > v11.m128_f32[0] )
    {
      *(float *)v31 = v10;
      v12 = v10;
      v11 = *(__m128 *)v31;
    }
    v13 = a2[1];
    v14 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
    if ( v13 > v14 )
    {
      *((float *)v31 + 1) = a2[1];
      v14 = v13;
      v11 = *(__m128 *)v31;
    }
    v15 = a2[2];
    v16 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
    if ( v16 > v15 )
    {
      *(float *)&v31[1] = a2[2];
      v16 = v15;
      v11 = *(__m128 *)v31;
    }
    v17 = a2[3];
    v18 = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
    if ( v18 > v17 )
    {
      *((float *)&v31[1] + 1) = a2[3];
      v18 = v17;
      v11 = *(__m128 *)v31;
    }
    if ( v16 > v12 && v18 > v14 )
    {
      if ( i == v3 )
      {
        std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
          (__int64)v29,
          i,
          v31);
        v3 = v30;
        i = (char *)v29[1];
      }
      else
      {
        *(__m128 *)i = v11;
        i += 16;
        v29[1] = i;
      }
    }
  }
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v20 = 0LL;
  v21 = *((_DWORD *)ObjectCache + 1);
  if ( v21 )
  {
    v20 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v20;
    *((_DWORD *)ObjectCache + 1) = v21 - 1;
  }
  v22 = (char *)v29[0];
  if ( (v20 || (v20 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL)
    && (v23 = CRectanglesShape::CRectanglesShape(v20), (v24 = v23) != 0LL) )
  {
    if ( v22 == i || (v25 = CRectanglesShape::BuildFromRectFs(v23, v22, (i - v22) >> 4), v4 = v25, v25 >= 0) )
    {
      *a3 = v24;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x12Fu);
      CRectanglesShape::`scalar deleting destructor'(v24, 1);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0LL, -2147024882, 0x12Au);
  }
  if ( v22 )
  {
    v31[0] = v22;
    v28 = (v3 - v22) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v28 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v31, &v28);
      v22 = (char *)v31[0];
    }
    operator delete(v22);
  }
  return v4;
}
