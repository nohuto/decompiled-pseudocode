/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800807F4
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18008440C (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$FillAllRectangles@V?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@CRegion@@QEBAXV?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@Z @ 0x180045A78 (--$FillAllRectangles@V-$back_insert_iterator@V-$vector@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL.c)
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180045C98 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800800F4 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     CreateMegaRectVertex @ 0x180080DA8 (CreateMegaRectVertex.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180082FB8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180083684 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18008370C (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x180086864 (-_Reallocate_exactly@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800869C0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x1801AC134 (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(CMegaRect *this, struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  char *v2; // r12
  char *v3; // r15
  gsl::details **v4; // rdi
  int v7; // eax
  FastRegion::Internal::CRgnData **v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, __int64); // r12
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int16 v20; // si
  __int64 v21; // r8
  double v22; // xmm0_8
  int v23; // edx
  gsl::details *v24; // rdx
  gsl::details *v25; // rdx
  gsl::details *v26; // rdx
  gsl::details *v27; // rdx
  gsl::details *v28; // rdx
  gsl::details *v29; // rdx
  int v30; // r12d
  __m128 v31; // xmm6
  __m128 v32; // xmm6
  __int32 v33; // xmm1_4
  double v34; // xmm0_8
  __int64 v35; // rax
  char v36; // si
  __int64 v37; // rax
  gsl::details *v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rcx
  int v41; // ebx
  __int64 (__fastcall ***v42)(_QWORD, __int64); // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rcx
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // [rsp+48h] [rbp-79h] BYREF
  __int64 (__fastcall ***v51)(_QWORD, __int64); // [rsp+50h] [rbp-71h] BYREF
  int v52; // [rsp+58h] [rbp-69h]
  __int32 *v53; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-59h]
  int v55; // [rsp+6Ch] [rbp-55h]
  unsigned int v56; // [rsp+70h] [rbp-51h]
  int v57; // [rsp+74h] [rbp-4Dh]
  __int32 *v58; // [rsp+78h] [rbp-49h]
  int v59; // [rsp+80h] [rbp-41h]
  __int32 *v60; // [rsp+88h] [rbp-39h] BYREF
  __int64 (__fastcall ***v61)(_QWORD, __int64); // [rsp+90h] [rbp-31h] BYREF
  _QWORD v62[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 (__fastcall ****v63)(_QWORD, __int64); // [rsp+A8h] [rbp-19h]
  unsigned int v64[2]; // [rsp+B0h] [rbp-11h] BYREF
  char v65; // [rsp+B8h] [rbp-9h]
  __m128 v66; // [rsp+C0h] [rbp-1h] BYREF

  v2 = (char *)a2 + 24;
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v3 = (char *)a2 + 48;
  v4 = (gsl::details **)((char *)a2 + 72);
  *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 9);
  v60 = (__int32 *)*((_QWORD *)this + 2);
  v53 = v60;
  v7 = *((_DWORD *)this + 6);
  v8 = (FastRegion::Internal::CRgnData **)*((_QWORD *)this + 1);
  v55 = 4;
  v9 = 8 * v7 + 16;
  v54 = v9;
  CRegion::FillAllRectangles<std::back_insert_iterator<std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>>>(
    v8,
    (__int64)a2);
  v10 = *(_QWORD *)v2;
  v62[0] = (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 4;
  v61 = (__int64 (__fastcall ***)(_QWORD, __int64))(4LL * v62[0]);
  v11 = 4LL * v62[0] * v9;
  v12 = *((_QWORD *)v2 + 1) - v10;
  if ( v11 < v12 )
  {
    *((_QWORD *)v2 + 1) = v10 + v11;
  }
  else if ( v11 > v12 )
  {
    if ( v11 <= *((_QWORD *)v2 + 2) - v10 )
    {
      v48 = v10 + v11;
      memset_0(*((void **)v2 + 1), 0, v10 + v11 - *((_QWORD *)v2 + 1));
      *((_QWORD *)v2 + 1) = v48;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v2, 4LL * v62[0] * v9);
    }
  }
  v13 = *(_QWORD *)v3;
  v58 = *(__int32 **)v2;
  v14 = *((_QWORD *)v3 + 1) - v13;
  if ( v11 < v14 )
  {
    *((_QWORD *)v3 + 1) = v13 + v11;
  }
  else if ( v11 > v14 )
  {
    if ( v11 <= *((_QWORD *)v3 + 2) - v13 )
    {
      v49 = v13 + v11;
      memset_0(*((void **)v3 + 1), 0, v13 + v11 - *((_QWORD *)v3 + 1));
      *((_QWORD *)v3 + 1) = v49;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v3, v11);
    }
  }
  v15 = *(__int64 (__fastcall ****)(_QWORD, __int64))v3;
  v16 = v62[0];
  v17 = (v4[2] - *v4) >> 1;
  v51 = v15;
  if ( 6LL * v62[0] > v17 )
  {
    if ( (unsigned __int64)(6LL * v62[0]) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    std::vector<unsigned short>::_Reallocate_exactly(v4);
  }
  v18 = v54;
  v56 = 0;
  v52 = 0;
  if ( v62[0] )
  {
    v57 = 2 * v54;
    HIDWORD(v50) = 2 * v54;
    LODWORD(v62[0]) = -v54;
    v19 = 0LL;
    v20 = 0;
    v59 = -2 * v54;
    do
    {
      v66 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(*(_QWORD *)a2 + 16 * v19))), (__m128)_xmm);
      v22 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v66);
      LOWORD(v50) = v20;
      v52 = (int)*(float *)&v22 + v23;
      v24 = v4[1];
      if ( v4[2] == v24 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v24, &v50);
        v21 = 2LL;
      }
      else
      {
        *(_WORD *)v24 = v20;
        v4[1] = (gsl::details *)((char *)v4[1] + v21);
      }
      v25 = v4[1];
      LOWORD(v50) = v20 + 1;
      if ( v4[2] == v25 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v25, &v50);
        v26 = (gsl::details *)*((_QWORD *)a2 + 10);
        v21 = 2LL;
      }
      else
      {
        *(_WORD *)v25 = v20 + 1;
        v4[1] = (gsl::details *)((char *)v4[1] + v21);
        v26 = v4[1];
      }
      LOWORD(v50) = v20 + 3;
      if ( v4[2] == v26 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v26, &v50);
        v27 = (gsl::details *)*((_QWORD *)a2 + 10);
        v21 = 2LL;
      }
      else
      {
        *(_WORD *)v26 = v20 + 3;
        v4[1] = (gsl::details *)((char *)v4[1] + v21);
        v27 = v4[1];
      }
      LOWORD(v50) = v20;
      if ( v4[2] == v27 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v27, &v50);
        v28 = (gsl::details *)*((_QWORD *)a2 + 10);
        v21 = 2LL;
      }
      else
      {
        *(_WORD *)v27 = v20;
        v4[1] = (gsl::details *)((char *)v4[1] + v21);
        v28 = v4[1];
      }
      LOWORD(v50) = v20 + 3;
      if ( v4[2] == v28 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v28, &v50);
        v29 = (gsl::details *)*((_QWORD *)a2 + 10);
        v21 = 2LL;
      }
      else
      {
        *(_WORD *)v28 = v20 + 3;
        v4[1] = (gsl::details *)((char *)v4[1] + v21);
        v29 = v4[1];
      }
      LOWORD(v50) = v21 + v20;
      if ( v4[2] == v29 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v29, &v50);
      }
      else
      {
        *(_WORD *)v29 = v21 + v20;
        v4[1] = (gsl::details *)((char *)v4[1] + v21);
      }
      v30 = v57;
      v31 = (__m128)v66.m128_u32[1];
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v66.m128_u32[0], (__m128)v66.m128_u32[1]).m128_u32[0],
        (unsigned int)&v53,
        *((_DWORD *)this + 6),
        (_DWORD)v58 + v59 + v57,
        (__int64)v51 + v59 + HIDWORD(v50));
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v66.m128_u32[2], v31).m128_u32[0],
        (unsigned int)&v53,
        *((_DWORD *)this + 6),
        (_DWORD)v58 + LODWORD(v62[0]) + v30,
        (__int64)v51 + LODWORD(v62[0]) + HIDWORD(v50));
      v32 = (__m128)v66.m128_u32[3];
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v66.m128_u32[0], (__m128)v66.m128_u32[3]).m128_u32[0],
        (unsigned int)&v53,
        *((_DWORD *)this + 6),
        (_DWORD)v58 + v30,
        (__int64)v51 + SHIDWORD(v50));
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v66.m128_u32[2], v32).m128_u32[0],
        (unsigned int)&v53,
        *((_DWORD *)this + 6),
        (_DWORD)v58 + v30 + v18,
        (__int64)v51 + (int)(v18 + HIDWORD(v50)));
      v20 += 4;
      HIDWORD(v50) += 4 * v18;
      v19 = ++v56;
      v57 = 4 * v18 + v30;
    }
    while ( v56 < v16 );
    v15 = v51;
  }
  v33 = v60[1];
  v66.m128_i32[0] = *v60;
  *(unsigned __int64 *)((char *)v66.m128_u64 + 4) = __PAIR64__(*(__int32 *)((char *)v60 + (int)(3 * v18)), v33);
  v66.m128_i32[3] = *(__int32 *)((char *)v60 + (int)(3 * v18) + 4);
  v34 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v66);
  v51 = 0LL;
  *(_QWORD *)v64 = 0LL;
  v65 = 1;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)*(float *)&v34 - v52;
  v63 = &v51;
  v35 = *(_QWORD *)this;
  v60 = (__int32 *)_mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  v36 = *(_BYTE *)(*(_QWORD *)(v35 + 184) + 97LL);
  v37 = gsl::narrow<__int64,unsigned __int64>((v4[1] - *v4) >> 1);
  v38 = *v4;
  if ( v37 < 0 || !v38 && v37 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v38);
    __debugbreak();
  }
  v39 = *((unsigned int *)this + 6);
  v62[0] = v37;
  v55 = (int)v61;
  v62[1] = v38;
  LOBYTE(v38) = 1;
  v53 = v58;
  v66.m128_u64[0] = (unsigned __int64)v15;
  v66.m128_u64[1] = __PAIR64__((unsigned int)v61, v18);
  v54 = v18;
  v41 = CDrawListPrimitive::Create(v38, &v53, &v66, v39, v62, &v60, v36, v64, v50);
  if ( v65 )
  {
    v40 = *(_QWORD *)v64;
    v42 = *v63;
    *v63 = *(__int64 (__fastcall ****)(_QWORD, __int64))v64;
    if ( v42 )
      std::default_delete<CShape>::operator()(v40, v42);
  }
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v41, 0x1A5u, 0LL);
  }
  else
  {
    v43 = *(_QWORD *)this;
    v44 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)(v44 + 8);
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)(v44 + 24);
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)(v44 + 40);
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)(v44 + 56);
    *((_DWORD *)this + 26) = *(_DWORD *)(v44 + 72);
    v45 = (__int64 *)CHWDrawListEntry::ReplacePrimitive(v43, &v61, &v51, &CMILMatrix::Identity);
    std::unique_ptr<CDrawListPrimitive>::operator=((__int64 *)this + 4, v45);
    if ( v61 )
      std::default_delete<CShape>::operator()(v46, v61);
  }
  if ( v51 )
    std::default_delete<CShape>::operator()(v46, v51);
  return (unsigned int)v41;
}
