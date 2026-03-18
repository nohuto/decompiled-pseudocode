/*
 * XREFs of ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1800B6BF0
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800A7EE0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x1800B6DFC (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x1800D3378 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CRegionShape::IntersectWithRect(__int64 a1, float *a2, CRectanglesShape **a3)
{
  char *v3; // rbx
  FastRegion::Internal::CRgnData *v5; // rcx
  unsigned int v6; // r14d
  struct CRectanglesShape *v8; // rcx
  char *v9; // rdi
  float v10; // xmm0_4
  FastRegion::Internal::CRgnData *v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v20; // rcx
  int v21; // r8d
  char *v22; // rsi
  CRectanglesShape *v23; // rax
  CRectanglesShape *v24; // r15
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  unsigned __int64 v29; // [rsp+30h] [rbp-49h] BYREF
  void *v30[2]; // [rsp+38h] [rbp-41h] BYREF
  char *v31; // [rsp+48h] [rbp-31h]
  char v32[8]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-21h]
  int *v34; // [rsp+60h] [rbp-19h]
  __int64 v35; // [rsp+68h] [rbp-11h]
  int v36; // [rsp+70h] [rbp-9h]
  void *v37[2]; // [rsp+80h] [rbp+7h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v5 = *(FastRegion::Internal::CRgnData **)(a1 + 16);
  v6 = 0;
  v31 = 0LL;
  *(_OWORD *)v30 = 0LL;
  FastRegion::Internal::CRgnData::BeginIterator(v5, (struct FastRegion::CRegion::Iterator *)v32);
  v9 = 0LL;
  while ( (unsigned __int64)v34 < v33 )
  {
    v10 = *a2;
    v11 = (FastRegion::Internal::CRgnData *)(2 * v36);
    v12 = (float)*v34;
    v13 = (float)*(int *)(v35 + 4LL * (_QWORD)v11);
    v14 = (float)*(int *)(v35 + 4LL * (_QWORD)v11 + 4);
    v15 = (float)v34[2];
    *(float *)v37 = v13;
    *((float *)v37 + 1) = v12;
    v37[1] = (void *)__PAIR64__(LODWORD(v15), LODWORD(v14));
    if ( v10 > v13 )
    {
      *(float *)v37 = v10;
      v13 = v10;
    }
    v16 = a2[1];
    if ( v16 > v12 )
    {
      *((float *)v37 + 1) = a2[1];
      v12 = v16;
    }
    v17 = a2[2];
    if ( v14 > v17 )
    {
      *(float *)&v37[1] = a2[2];
      v14 = v17;
    }
    v18 = a2[3];
    if ( v15 > v18 )
    {
      *((float *)&v37[1] + 1) = a2[3];
      v15 = v18;
    }
    if ( v14 <= v13 || v15 <= v12 )
    {
      v37[1] = 0LL;
      v37[0] = 0LL;
    }
    else if ( v9 == v3 )
    {
      std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
        v30,
        v9,
        v37);
      v3 = v31;
      v9 = (char *)v30[1];
    }
    else
    {
      *(_OWORD *)v9 = *(_OWORD *)v37;
      v9 += 16;
      v30[1] = v9;
    }
    FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v32);
  }
  ObjectCache = CThreadContext::GetObjectCache(v8);
  v20 = 0LL;
  v21 = *((_DWORD *)ObjectCache + 1);
  if ( v21 )
  {
    v20 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v20;
    *((_DWORD *)ObjectCache + 1) = v21 - 1;
  }
  v22 = (char *)v30[0];
  if ( (v20 || (v20 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL)
    && (v23 = CRectanglesShape::CRectanglesShape(v20), (v24 = v23) != 0LL) )
  {
    if ( v22 == v9
      || (CRectanglesShape::Reset(v23),
          v25 = DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
                  (__int64)v24 + 16,
                  v22,
                  (v9 - v22) >> 4),
          v6 = v25,
          v25 >= 0) )
    {
      *a3 = v24;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x8Au);
      CRectanglesShape::`scalar deleting destructor'(v24, 1);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0LL, -2147024882, 0x85u);
  }
  if ( v22 )
  {
    v37[0] = v22;
    v27 = (v3 - v22) & 0xFFFFFFFFFFFFFFF0uLL;
    v29 = v27;
    if ( v27 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v37, &v29);
      v27 = v29;
      v22 = (char *)v37[0];
    }
    operator delete(v22, v27);
  }
  return v6;
}
