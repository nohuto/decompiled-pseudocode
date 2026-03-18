/*
 * XREFs of ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18025B400
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x18004098C (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180048030 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x180048B9C (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18006D120 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D998 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRectanglesShape::IntersectWithRect(struct CRectanglesShape *a1, float *a2, CRectanglesShape **a3)
{
  __int128 *v3; // rsi
  __int128 *v4; // r15
  __int128 *v5; // r14
  unsigned int v6; // r12d
  unsigned int v7; // ebx
  struct CRectanglesShape *v9; // rdi
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
  unsigned int v22; // r8d
  CRectanglesShape *v23; // rdi
  CRectanglesShape *v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int128 *v28; // [rsp+30h] [rbp-40h] BYREF
  __int128 *v29; // [rsp+38h] [rbp-38h]
  __int128 *v30; // [rsp+40h] [rbp-30h]
  CRectanglesShape **v31; // [rsp+48h] [rbp-28h]
  __m128 v32; // [rsp+50h] [rbp-20h] BYREF

  v3 = 0LL;
  v31 = a3;
  *a3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v6 = 0;
  v29 = 0LL;
  v7 = 0;
  v30 = 0LL;
  v9 = a1;
  if ( *((_DWORD *)a1 + 10) )
  {
    do
    {
      v10 = *a2;
      a1 = (struct CRectanglesShape *)(2LL * v7);
      v11 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)v9 + 2) + 16LL * v7));
      v32 = v11;
      v32.m128_i32[0] = v11.m128_i32[0];
      v12 = v11.m128_f32[0];
      if ( v10 > v11.m128_f32[0] )
      {
        v32.m128_f32[0] = v10;
        v12 = v10;
        v11 = v32;
      }
      v13 = a2[1];
      v14 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
      if ( v13 > v14 )
      {
        v32.m128_f32[1] = a2[1];
        v14 = v13;
        v11 = v32;
      }
      v15 = a2[2];
      v16 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
      if ( v16 > v15 )
      {
        v32.m128_f32[2] = a2[2];
        v16 = v15;
        v11 = v32;
      }
      v17 = a2[3];
      v18 = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
      if ( v18 > v17 )
      {
        v32.m128_f32[3] = a2[3];
        v18 = v17;
        v11 = v32;
      }
      if ( v16 > v12 && v18 > v14 )
      {
        if ( v5 == v3 )
        {
          std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
            (__int64 *)&v28,
            v3,
            &v32);
          v5 = v30;
          v3 = v29;
        }
        else
        {
          *v3++ = (__int128)v11;
          v29 = v3;
        }
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)v9 + 10) );
    v4 = v28;
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
  if ( v20 || (v20 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    v23 = CRectanglesShape::CRectanglesShape(v20);
  else
    v23 = 0LL;
  v24 = v23;
  if ( v23 )
  {
    if ( v4 == v3 || (v25 = CRectanglesShape::BuildFromRectFs(v23, (__int64)v4, v3 - v4), v6 = v25, v25 >= 0) )
    {
      v24 = 0LL;
      *v31 = v23;
      v23 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x12Fu, 0LL);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0, -2147024882, 0x12Au, 0LL);
  }
  if ( v23 )
    CRectanglesShape::`scalar deleting destructor'(v24, 1, v22);
  if ( v4 )
    std::_Deallocate<16,0>(v4, ((char *)v5 - (char *)v4) & 0xFFFFFFFFFFFFFFF0uLL);
  return v6;
}
