/*
 * XREFs of ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180088E30
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800892B0 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800A7EE0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x1800B6DFC (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800F9440 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801854E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRectanglesShape::GetUnOccludedWorldShape(
        struct CRectanglesShape *a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r12
  char *v5; // rdi
  unsigned int v6; // eax
  char *v7; // r14
  __int64 v8; // r9
  const __m128i *v9; // rbx
  unsigned int v10; // r15d
  char *v11; // rsi
  __int64 v12; // rdx
  __m128i v13; // xmm0
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  char v17; // al
  _BYTE *v18; // rbx
  __int64 v19; // r12
  __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // edx
  _OWORD *v23; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r13
  SIZE_T v28; // r13
  HANDLE ProcessHeap; // rax
  char *v30; // rbx
  char *v31; // rax
  unsigned __int64 v32; // rsi
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v34; // rbx
  int v35; // edx
  __int64 v36; // rdi
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  unsigned __int64 v40; // rsi
  __int64 v42; // rcx
  LPVOID v43; // rax
  __int64 v44; // rcx
  __m128i v45; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v46; // [rsp+40h] [rbp-C0h]
  unsigned int v47; // [rsp+44h] [rbp-BCh]
  unsigned int v48; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  void *v50[2]; // [rsp+58h] [rbp-A8h] BYREF
  char *v51; // [rsp+68h] [rbp-98h]
  _OWORD *v52; // [rsp+70h] [rbp-90h]
  unsigned __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  struct CRectanglesShape *v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  _QWORD *v56; // [rsp+90h] [rbp-70h]
  void *v57[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v58[64]; // [rsp+B0h] [rbp-50h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v56 = a4;
  v4 = a4;
  v55 = a3;
  v49 = a2;
  *(_OWORD *)v50 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = a3;
  *v4 = 0LL;
  v9 = (const __m128i *)a2;
  v10 = 0;
  v54 = a1;
  v11 = 0LL;
  v51 = 0LL;
  v48 = 0;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( 1 )
    {
      v12 = *((_QWORD *)a1 + 2) + 16LL * v6;
      *(_OWORD *)v57 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v8, v12, v57);
      v13 = _mm_loadu_si128(v9);
      v45 = v13;
      v45.m128i_i32[0] = v13.m128i_i32[0];
      if ( *(float *)v57 > *(float *)v13.m128i_i32 )
      {
        v45.m128i_i32[0] = (__int32)v57[0];
        v13.m128i_i32[0] = (__int32)v57[0];
      }
      v14 = *(float *)&v45.m128i_i32[1];
      if ( *((float *)v57 + 1) > *(float *)&v45.m128i_i32[1] )
      {
        v45.m128i_i32[1] = HIDWORD(v57[0]);
        v14 = *((float *)v57 + 1);
      }
      v15 = *(float *)&v45.m128i_i32[2];
      if ( *(float *)&v45.m128i_i32[2] > *(float *)&v57[1] )
      {
        v45.m128i_i32[2] = (__int32)v57[1];
        v15 = *(float *)&v57[1];
      }
      v16 = *(float *)&v45.m128i_i32[3];
      if ( *(float *)&v45.m128i_i32[3] > *((float *)&v57[1] + 1) )
      {
        v45.m128i_i32[3] = HIDWORD(v57[1]);
        v16 = *((float *)&v57[1] + 1);
      }
      if ( v15 <= *(float *)v13.m128i_i32 || v16 <= v14 )
      {
        v17 = 0;
        v45 = 0uLL;
      }
      else
      {
        v17 = 1;
      }
      if ( v17 )
      {
        v18 = v58;
        v19 = 4LL;
        do
        {
          TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v18);
          v18 += 16;
          --v19;
        }
        while ( v19 );
        v46 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                v57,
                &v45,
                v20,
                v58);
        v21 = 0;
        v47 = 0;
        if ( v46 )
        {
          v22 = v46;
          v23 = v58;
          v52 = v58;
          do
          {
            if ( v5 == v11 )
            {
              v24 = (v5 - v7) >> 4;
              if ( v24 == 0xFFFFFFFFFFFFFFFLL )
                std::_Xlength_error("vector too long");
              v25 = (v11 - v7) >> 4;
              v45.m128i_i64[0] = v24 + 1;
              v26 = v25 >> 1;
              if ( v25 > 0xFFFFFFFFFFFFFFFLL - (v25 >> 1) )
                goto LABEL_58;
              v27 = v24 + 1;
              if ( v26 + v25 >= v24 + 1 )
                v27 = v26 + v25;
              if ( v27 > 0xFFFFFFFFFFFFFFFLL )
LABEL_58:
                std::_Throw_bad_array_new_length();
              v28 = 16 * v27;
              if ( v28 >= 0x1000 )
              {
                if ( v28 + 39 < v28 )
                  goto LABEL_58;
                v43 = operator new(v28 + 39);
                if ( !v43 )
                {
                  _o__invalid_parameter_noinfo_noreturn(v44);
                  __debugbreak();
LABEL_65:
                  ModuleFailFastForHRESULT(2147942414LL, retaddr);
                }
                v30 = (char *)(((unsigned __int64)v43 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
                *((_QWORD *)v30 - 1) = v43;
              }
              else if ( v28 )
              {
                ProcessHeap = GetProcessHeap();
                v30 = (char *)HeapAlloc(ProcessHeap, 0, v28);
                if ( !v30 )
                  goto LABEL_65;
              }
              else
              {
                v30 = 0LL;
              }
              v31 = v7;
              for ( *(_OWORD *)&v30[16 * v24] = *v52; v31 != v5; v31 += 16 )
                *(_OWORD *)&v31[v30 - v7] = *(_OWORD *)v31;
              if ( v7 )
              {
                v32 = 16 * v25;
                v53 = v32;
                v57[0] = v7;
                if ( v32 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned(v57, &v53);
                  v32 = v53;
                  v7 = (char *)v57[0];
                }
                operator delete(v7, v32);
              }
              v11 = &v30[v28];
              v23 = v52;
              v7 = v30;
              v21 = v47;
              v22 = v46;
              v5 = &v30[16 * v45.m128i_i64[0]];
              v50[0] = v30;
              v51 = &v30[v28];
            }
            else
            {
              *(_OWORD *)v5 = *v23;
              v5 += 16;
            }
            ++v21;
            v50[1] = v5;
            ++v23;
            v47 = v21;
            v52 = v23;
          }
          while ( v21 < v22 );
        }
        v9 = (const __m128i *)v49;
      }
      else if ( v5 == v11 )
      {
        std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
          v50,
          v5,
          v57);
        v11 = v51;
        v5 = (char *)v50[1];
        v7 = (char *)v50[0];
      }
      else
      {
        *(_OWORD *)v5 = *(_OWORD *)v57;
        v5 += 16;
        v50[1] = v5;
      }
      a1 = v54;
      v6 = v48 + 1;
      v48 = v6;
      if ( v6 >= *((_DWORD *)v54 + 10) )
        break;
      v8 = v55;
    }
    v4 = v56;
  }
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v34 = 0LL;
  v35 = *((_DWORD *)ObjectCache + 1);
  if ( v35 )
  {
    v34 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v34;
    *((_DWORD *)ObjectCache + 1) = v35 - 1;
  }
  if ( v34 || (v34 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v34[1] = 0LL;
    *v34 = &CRectanglesShape::`vftable';
    v34[2] = v34 + 6;
    v34[3] = v34 + 6;
    *((_DWORD *)v34 + 8) = 1;
    *(_QWORD *)((char *)v34 + 36) = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v34 + 6);
    v34[8] = 0LL;
    if ( v7 == v5 )
      goto LABEL_45;
    *((_DWORD *)v34 + 10) = 0;
    v36 = (v5 - v7) >> 4;
    DynArrayImpl<0>::ShrinkToSize(v34 + 2, 16LL);
    v37 = v34[8];
    if ( v37 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      v34[8] = 0LL;
    }
    v38 = DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
            v34 + 2,
            v7,
            (unsigned int)v36);
    v10 = v38;
    if ( v38 >= 0 )
    {
LABEL_45:
      *v4 = v34;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, v38, 0xD3u);
      CRectanglesShape::`scalar deleting destructor'((CRectanglesShape *)v34, 1u);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0LL, -2147024882, 0xCFu);
  }
  if ( v7 )
  {
    v57[0] = v7;
    v40 = (v11 - v7) & 0xFFFFFFFFFFFFFFF0uLL;
    v49 = v40;
    if ( v40 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v57, &v49);
      v40 = v49;
      v7 = (char *)v57[0];
    }
    operator delete(v7, v40);
  }
  return v10;
}
