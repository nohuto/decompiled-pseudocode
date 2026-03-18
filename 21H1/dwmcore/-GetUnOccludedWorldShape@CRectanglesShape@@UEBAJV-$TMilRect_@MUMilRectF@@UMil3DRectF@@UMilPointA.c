/*
 * XREFs of ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180035B50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180035ADC (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180036940 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180036DEC (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180055A20 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18006DA94 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x180075A60 (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DC3D0 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CRectanglesShape::GetUnOccludedWorldShape(
        struct CRectanglesShape *a1,
        const __m128i *a2,
        CMILMatrix *a3,
        CRectanglesShape **a4)
{
  char *v4; // rdi
  unsigned int v5; // r12d
  char *v6; // r15
  char *v7; // r14
  unsigned int v8; // r13d
  CMILMatrix *v9; // r9
  const __m128i *v10; // rbx
  __m128i v12; // xmm1
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  char v16; // al
  _BYTE *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r8
  unsigned int v20; // eax
  _OWORD *v21; // rbx
  __int64 v22; // rsi
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v24; // rcx
  int v25; // r8d
  CRectanglesShape *v26; // rsi
  CRectanglesShape *v27; // rbx
  int v28; // eax
  __int64 v29; // rcx
  __m128i v31; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-89h]
  char *v33; // [rsp+48h] [rbp-81h] BYREF
  char *v34; // [rsp+50h] [rbp-79h]
  char *v35; // [rsp+58h] [rbp-71h]
  const __m128i *v36; // [rsp+60h] [rbp-69h]
  CMILMatrix *v37; // [rsp+68h] [rbp-61h]
  CRectanglesShape **v38; // [rsp+70h] [rbp-59h]
  __int128 v39; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v40[64]; // [rsp+90h] [rbp-39h] BYREF

  v37 = a3;
  v4 = 0LL;
  v38 = a4;
  v5 = 0;
  v36 = a2;
  v6 = 0LL;
  v32 = 0;
  *a4 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v33 = 0LL;
  v9 = a3;
  v10 = a2;
  v34 = 0LL;
  v35 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    do
    {
      v39 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v9);
      v12 = _mm_loadu_si128(v10);
      v31 = v12;
      v31.m128i_i32[0] = v12.m128i_i32[0];
      if ( *(float *)&v39 > *(float *)v12.m128i_i32 )
      {
        v31.m128i_i32[0] = v39;
        v12.m128i_i32[0] = v39;
      }
      v13 = *(float *)&v31.m128i_i32[1];
      if ( *((float *)&v39 + 1) > *(float *)&v31.m128i_i32[1] )
      {
        v31.m128i_i32[1] = DWORD1(v39);
        v13 = *((float *)&v39 + 1);
      }
      v14 = *(float *)&v31.m128i_i32[2];
      if ( *(float *)&v31.m128i_i32[2] > *((float *)&v39 + 2) )
      {
        v31.m128i_i32[2] = DWORD2(v39);
        v14 = *((float *)&v39 + 2);
      }
      v15 = *(float *)&v31.m128i_i32[3];
      if ( *(float *)&v31.m128i_i32[3] > *((float *)&v39 + 3) )
      {
        v31.m128i_i32[3] = HIDWORD(v39);
        v15 = *((float *)&v39 + 3);
      }
      if ( v14 <= *(float *)v12.m128i_i32 || v15 <= v13 )
      {
        v31 = 0uLL;
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
      if ( v16 )
      {
        v17 = v40;
        v18 = 4LL;
        do
        {
          TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v17);
          v17 += 16;
          --v18;
        }
        while ( v18 );
        v20 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                &v39,
                &v31,
                v19,
                v40);
        if ( v20 )
        {
          v21 = v40;
          v22 = v20;
          do
          {
            if ( v7 == v4 )
            {
              std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
                &v33,
                v4,
                v21);
              v7 = v35;
              v4 = v34;
            }
            else
            {
              *(_OWORD *)v4 = *v21;
              v4 += 16;
              v34 = v4;
            }
            ++v21;
            --v22;
          }
          while ( v22 );
        }
        v10 = v36;
      }
      else if ( v7 == v4 )
      {
        std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
          &v33,
          v4,
          &v39);
        v7 = v35;
        v4 = v34;
      }
      else
      {
        *(_OWORD *)v4 = v39;
        v4 += 16;
        v34 = v4;
      }
      v9 = v37;
      ++v8;
    }
    while ( v8 < *((_DWORD *)a1 + 10) );
    v6 = v33;
    v5 = v32;
  }
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v24 = 0LL;
  v25 = *((_DWORD *)ObjectCache + 1);
  if ( v25 )
  {
    v24 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v24;
    *((_DWORD *)ObjectCache + 1) = v25 - 1;
  }
  if ( v24 || (v24 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    v26 = CRectanglesShape::CRectanglesShape(v24);
  else
    v26 = 0LL;
  v27 = v26;
  if ( v26 )
  {
    if ( v6 == v4
      || (v28 = CRectanglesShape::BuildFromRectFs(v26, v6, (unsigned int)((v4 - v6) >> 4)), v5 = v28, v28 >= 0) )
    {
      v27 = 0LL;
      *v38 = v26;
      v26 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xD3u, 0LL);
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v24, 0LL, 0, -2147024882, 0xCFu, 0LL);
  }
  if ( v26 )
    CRectanglesShape::`scalar deleting destructor'(v27, 1u);
  if ( v6 )
    std::_Deallocate<16,0>(v6, (v7 - v6) & 0xFFFFFFFFFFFFFFF0uLL);
  return v5;
}
