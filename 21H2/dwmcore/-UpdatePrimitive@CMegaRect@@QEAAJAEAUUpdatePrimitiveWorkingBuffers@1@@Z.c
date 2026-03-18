/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800B34D8
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800B57A0 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x180061CDC (-_Reallocate_exactly@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x1800A7724 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800B34A0 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     CreateMegaRectVertex @ 0x1800B3AEC (CreateMegaRectVertex.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1800B3CC4 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ??$GetRectangles@V?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@CRegion@@QEBAXV?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@Z @ 0x1800B4A90 (--$GetRectangles@V-$back_insert_iterator@V-$vector@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UM.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B6A5C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1801E308C (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x1801F1678 (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(CMegaRect *this, struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  __int64 *v2; // r15
  __int64 *v3; // r14
  gsl::details **v4; // rdi
  int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // r9
  char *v11; // rdx
  unsigned __int64 v12; // r13
  char *v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  char *v16; // rax
  char *v17; // rbx
  __int64 v18; // rdx
  char *v19; // rcx
  size_t v20; // rsi
  char *v21; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  CMegaRect *v25; // r14
  int v26; // eax
  __int64 v27; // rcx
  __int16 v28; // bx
  _QWORD *v29; // rsi
  int v30; // r12d
  char IsEmpty; // al
  __int64 v32; // r8
  __m128 v33; // xmm9
  __m128 v34; // xmm6
  float v35; // xmm1_4
  gsl::details *v36; // rdx
  gsl::details *v37; // rdx
  gsl::details *v38; // rdx
  __int16 v39; // r15
  gsl::details *v40; // rdx
  gsl::details *v41; // rdx
  gsl::details *v42; // rdx
  int v43; // xmm1_4
  unsigned int v44; // xmm0_4
  int v45; // xmm1_4
  double v46; // xmm0_8
  CRenderingBatchCommand *v47; // rcx
  int v48; // r8d
  struct CDrawListPrimitive *Primitive; // rax
  gsl::details *v50; // rcx
  char v51; // dl
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // rcx
  int v55; // edi
  __int64 v56; // rdx
  CRenderingBatchCommand *v57; // rbx
  __int64 *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  int v62; // [rsp+48h] [rbp-99h] BYREF
  int v63; // [rsp+4Ch] [rbp-95h]
  __int64 v64; // [rsp+50h] [rbp-91h]
  __int64 v65; // [rsp+58h] [rbp-89h] BYREF
  char *v66; // [rsp+60h] [rbp-81h]
  unsigned int v67; // [rsp+68h] [rbp-79h]
  int v68; // [rsp+6Ch] [rbp-75h]
  int v69; // [rsp+70h] [rbp-71h]
  int v70; // [rsp+74h] [rbp-6Dh]
  int v71; // [rsp+78h] [rbp-69h]
  __int64 v72; // [rsp+80h] [rbp-61h] BYREF
  CMegaRect *v73; // [rsp+88h] [rbp-59h]
  int v74[2]; // [rsp+90h] [rbp-51h] BYREF
  unsigned int v75; // [rsp+98h] [rbp-49h]
  int v76; // [rsp+9Ch] [rbp-45h]
  __int64 v77; // [rsp+A8h] [rbp-39h]
  gsl::details *v78; // [rsp+B0h] [rbp-31h]
  int v79[2]; // [rsp+B8h] [rbp-29h] BYREF
  unsigned int v80; // [rsp+C0h] [rbp-21h]
  int v81; // [rsp+C4h] [rbp-1Dh]
  unsigned int v82[4]; // [rsp+C8h] [rbp-19h] BYREF
  char v83; // [rsp+D8h] [rbp-9h]

  v2 = (__int64 *)((char *)a2 + 24);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v3 = (__int64 *)((char *)a2 + 48);
  v4 = (gsl::details **)((char *)a2 + 72);
  *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)this + 6);
  v73 = this;
  *(_QWORD *)v82 = a2;
  v81 = 4;
  v7 = 8 * v6 + 16;
  v8 = *((_QWORD *)this + 2);
  v9 = *((_QWORD *)this + 1);
  v72 = v8;
  *(_QWORD *)v79 = v8;
  LODWORD(v65) = v7;
  v80 = v7;
  CRegion::GetRectangles<std::back_insert_iterator<std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>>>(v9);
  v10 = (char *)v2[1];
  v11 = (char *)*v2;
  v12 = (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 4;
  v13 = &v10[-*v2];
  v66 = v10;
  v14 = 4 * v12 * v7;
  *(_QWORD *)v74 = 4 * v12;
  if ( v14 < (unsigned __int64)v13 )
  {
    v16 = &v11[v14];
    goto LABEL_5;
  }
  if ( v14 <= (unsigned __int64)v13 )
    goto LABEL_6;
  if ( v14 <= v2[2] - (__int64)v11 )
  {
    v15 = v14 - (_QWORD)v13;
    memset_0(v10, 0, v14 - (_QWORD)v13);
    v16 = &v66[v15];
LABEL_5:
    v2[1] = (__int64)v16;
    goto LABEL_6;
  }
  std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v2, 4 * v12 * v7);
LABEL_6:
  v17 = (char *)v3[1];
  v18 = *v3;
  v19 = &v17[-*v3];
  v66 = (char *)*v2;
  if ( v14 < (unsigned __int64)v19 )
  {
    v21 = (char *)(v18 + v14);
    goto LABEL_10;
  }
  if ( v14 <= (unsigned __int64)v19 )
    goto LABEL_11;
  if ( v14 <= v3[2] - v18 )
  {
    v20 = v14 - (_QWORD)v19;
    memset_0(v17, 0, v20);
    v21 = &v17[v20];
LABEL_10:
    v3[1] = (__int64)v21;
    goto LABEL_11;
  }
  std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v3, 4 * v12 * v7);
LABEL_11:
  v22 = *v3;
  v23 = 6 * v12;
  v24 = (v4[2] - *v4) >> 1;
  v77 = *v3;
  if ( 6 * v12 > v24 )
  {
    if ( v23 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<unsigned short>::_Reallocate_exactly((__int64)v4, v23);
  }
  v25 = v73;
  v67 = 0;
  if ( v12 )
  {
    v71 = 4 * v7;
    LODWORD(v64) = 3 * v7;
    v63 = 3 * v7;
    v69 = -2 * v7;
    v26 = -3 * v7;
    v27 = 0LL;
    v28 = 0;
    v70 = -v7;
    v29 = *(_QWORD **)v82;
    v30 = 0;
    v68 = v26;
    do
    {
      *(__m128 *)v82 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(*v29 + 16 * v27))), (__m128)_xmm);
      IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v82);
      v33 = (__m128)v82[3];
      v34 = (__m128)v82[1];
      if ( IsEmpty )
        v35 = 0.0;
      else
        v35 = (float)(*(float *)&v82[3] - *(float *)&v82[1]) * (float)(*(float *)&v82[2] - *(float *)v82);
      v36 = v4[1];
      LOWORD(v62) = v28;
      v30 += (int)v35;
      if ( v36 == v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v36, &v62);
        v32 = 2LL;
      }
      else
      {
        *(_WORD *)v36 = v28;
        v4[1] = (gsl::details *)((char *)v4[1] + v32);
      }
      v37 = v4[1];
      LOWORD(v62) = v28 + 1;
      if ( v37 == v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v37, &v62);
        v32 = 2LL;
      }
      else
      {
        *(_WORD *)v37 = v28 + 1;
        v4[1] = (gsl::details *)((char *)v4[1] + v32);
      }
      v38 = v4[1];
      v39 = v32 + v28;
      LOWORD(v62) = v32 + v28;
      if ( v38 == v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v38, &v62);
        v32 = 2LL;
      }
      else
      {
        *(_WORD *)v38 = v32 + v28;
        v4[1] = (gsl::details *)((char *)v4[1] + v32);
      }
      v40 = v4[1];
      LOWORD(v62) = v28;
      if ( v40 == v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v40, &v62);
        v32 = 2LL;
      }
      else
      {
        *(_WORD *)v40 = v28;
        v4[1] = (gsl::details *)((char *)v4[1] + v32);
      }
      v41 = v4[1];
      LOWORD(v62) = v39;
      if ( v41 == v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v41, &v62);
        v32 = 2LL;
      }
      else
      {
        *(_WORD *)v41 = v39;
        v4[1] = (gsl::details *)((char *)v4[1] + v32);
      }
      v42 = v4[1];
      LOWORD(v62) = v28 + 3;
      if ( v42 == v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v42, &v62);
      }
      else
      {
        *(_WORD *)v42 = v28 + 3;
        v4[1] = (gsl::details *)((char *)v4[1] + v32);
      }
      v22 = v77;
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v82[0], v34).m128_u32[0],
        (unsigned int)v79,
        *((_DWORD *)v25 + 6),
        (_DWORD)v66 + v68 + v64,
        v77 + v68 + v63);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v82[2], v34).m128_u32[0],
        (unsigned int)v79,
        *((_DWORD *)v25 + 6),
        (_DWORD)v66 + v69 + v64,
        v22 + v69 + v63);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v82[0], v33).m128_u32[0],
        (unsigned int)v79,
        *((_DWORD *)v25 + 6),
        (_DWORD)v66 + v64,
        v22 + v63);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v82[2], v33).m128_u32[0],
        (unsigned int)v79,
        *((_DWORD *)v25 + 6),
        (_DWORD)v66 + v70 + v64,
        v22 + v70 + v63);
      v28 += 4;
      v63 += v71;
      LODWORD(v64) = v71 + v64;
      v27 = ++v67;
    }
    while ( v67 < v12 );
    v62 = v30;
    v7 = v65;
  }
  v43 = *(_DWORD *)(v72 + 4);
  v79[0] = *(_DWORD *)v72;
  v44 = *(_DWORD *)((int)(2 * v7) + v72);
  v79[1] = v43;
  v45 = *(_DWORD *)((int)(2 * v7) + v72 + 4);
  v80 = v44;
  v81 = v45;
  v46 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)v79);
  v47 = *(CRenderingBatchCommand **)v25;
  v65 = 0LL;
  *(_QWORD *)&v82[2] = 0LL;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)*(float *)&v46 - v48;
  *(_QWORD *)v82 = &v65;
  v83 = 1;
  v72 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  Primitive = CRenderingBatchCommand::GetPrimitive(v47);
  v50 = *v4;
  v51 = *((_BYTE *)Primitive + 96);
  v52 = (v4[1] - *v4) >> 1;
  if ( v52 == -1 || !v50 && v52 )
  {
    gsl::details::terminate(v50);
    __debugbreak();
  }
  v77 = (v4[1] - *v4) >> 1;
  v81 = v74[0];
  v76 = v74[0];
  v53 = *((_DWORD *)v25 + 6);
  v78 = v50;
  *(_QWORD *)v79 = v22;
  v80 = v7;
  *(_QWORD *)v74 = v66;
  v75 = v7;
  v55 = CDrawListPrimitive::Create((int)v74, (int)v79, v53, (__int64)&v72, v51, (__int64)&v82[2]);
  if ( v83 )
  {
    v54 = *(_QWORD *)&v82[2];
    v56 = **(_QWORD **)v82;
    **(_QWORD **)v82 = *(_QWORD *)&v82[2];
    if ( v56 )
      std::default_delete<CDrawListPrimitive>::operator()();
  }
  if ( v55 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0LL, v55, 0x199u);
  }
  else
  {
    v57 = *(CRenderingBatchCommand **)v25;
    v58 = (__int64 *)(*(_QWORD *)v25 + 8LL);
    if ( v58 != &v65 )
    {
      v59 = v65;
      v65 = 0LL;
      v60 = *v58;
      *v58 = v59;
      if ( v60 )
        std::default_delete<CDrawListPrimitive>::operator()();
    }
    *((_OWORD *)v57 + 1) = CMILMatrix::Identity;
    *((_OWORD *)v57 + 2) = xmmword_1803D2630;
    *((_OWORD *)v57 + 3) = xmmword_1803D2640;
    *((_OWORD *)v57 + 4) = xmmword_1803D2650;
    *((_DWORD *)v57 + 20) = unk_1803D2660;
  }
  if ( v65 )
    std::default_delete<CDrawListPrimitive>::operator()();
  return (unsigned int)v55;
}
