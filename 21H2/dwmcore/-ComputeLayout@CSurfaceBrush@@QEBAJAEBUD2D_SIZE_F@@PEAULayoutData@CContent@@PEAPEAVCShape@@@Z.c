/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18000B3D0 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180056710 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18005D490 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800625C4 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800626F4 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B28D0 (-Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCD.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800CD204 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180229614 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18023FEF0 (-GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV-.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180240030 (-GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_.c)
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180240320 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800AEBA8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800D2F7C (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800F9440 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CContent::LayoutData *a3,
        struct CShape **a4)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // edx
  FLOAT height; // xmm1_4
  __m128 v14; // xmm6
  __int64 v15; // rcx
  __int64 v16; // xmm7_8
  const struct D2D1::Matrix3x2F *v17; // rcx
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  unsigned int v22; // xmm8_4
  unsigned int v23; // xmm9_4
  unsigned int v24; // xmm10_4
  unsigned int v25; // xmm11_4
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD, __int64); // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int128 v32; // xmm1
  struct CShape *v33; // rax
  struct CShape *v34; // rdx
  float width; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  unsigned __int32 v40; // xmm0_4
  unsigned __int32 v41; // xmm1_4
  int v42; // eax
  struct CShape *v43; // [rsp+48h] [rbp-C0h] BYREF
  float v44; // [rsp+50h] [rbp-B8h] BYREF
  float v45; // [rsp+54h] [rbp-B4h]
  _BYTE v46[80]; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v47; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-50h]
  struct D2D_MATRIX_3X2_F v49; // [rsp+C0h] [rbp-48h] BYREF
  void **v50; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-28h]
  void *v52; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE *v53; // [rsp+F0h] [rbp-18h]
  int v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+FCh] [rbp-Ch]
  _BYTE v56[16]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v57; // [rsp+118h] [rbp+10h]
  void **v58; // [rsp+128h] [rbp+20h] BYREF
  const struct D2D1::Matrix3x2F *v59; // [rsp+130h] [rbp+28h]
  void *v60; // [rsp+138h] [rbp+30h] BYREF
  _BYTE *v61; // [rsp+140h] [rbp+38h]
  int v62; // [rsp+148h] [rbp+40h]
  __int64 v63; // [rsp+14Ch] [rbp+44h]
  _BYTE v64[16]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v65; // [rsp+168h] [rbp+60h]
  __int128 v66; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v67[24]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v68[24]; // [rsp+1A0h] [rbp+98h] BYREF

  if ( a2->width <= 0.0 || a2->height <= 0.0 || !*((_QWORD *)this + 13) )
  {
    v11 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2003304441,
      0x1E9u);
    return (unsigned int)v11;
  }
  v8 = *((_QWORD *)this + 14);
  v43 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, CSurfaceBrush *, const struct D2D_SIZE_F *, float *, __int128 *, _BYTE *))(*(_QWORD *)v8 + 64LL))(
         v8,
         this,
         a2,
         &v44,
         &v66,
         v67);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v10,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v9,
      0x1FAu);
    goto LABEL_46;
  }
  v12 = *((_DWORD *)this + 24);
  v47.m128_u64[0] = 0LL;
  if ( !v12 )
    goto LABEL_44;
  if ( v12 == 1 )
  {
    v47.m128_u64[0] = 0LL;
    height = a2->height;
    v47.m128_i32[2] = LODWORD(a2->width);
    v47.m128_f32[3] = height;
    goto LABEL_8;
  }
  if ( (unsigned int)(v12 - 2) > 1 )
  {
    v38 = v47.m128_f32[1];
    width = v47.m128_f32[0];
    goto LABEL_45;
  }
  width = a2->width;
  if ( v44 != a2->width )
  {
    v37 = a2->height;
LABEL_48:
    v38 = width / (float)(v44 / v45);
    if ( v38 >= v37 != (v12 == 3) )
    {
      v38 = v37;
      width = v37 * (float)(v44 / v45);
    }
    goto LABEL_45;
  }
  v37 = a2->height;
  if ( v45 != v37 )
    goto LABEL_48;
LABEL_44:
  v38 = v45;
  width = v44;
LABEL_45:
  v39 = (float)(a2->width - width) * *((float *)this + 22);
  v47.m128_f32[1] = (float)(a2->height - v38) * *((float *)this + 23);
  v47.m128_f32[0] = v39;
  v47.m128_f32[3] = v47.m128_f32[1] + v38;
  v47.m128_f32[2] = width + v39;
  v40 = _mm_shuffle_ps(v47, v47, 85).m128_u32[0];
  v41 = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
  v47.m128_i32[3] = _mm_shuffle_ps(v47, v47, 255).m128_u32[0];
  *(unsigned __int64 *)((char *)v47.m128_u64 + 4) = __PAIR64__(v41, v40);
LABEL_8:
  *(_QWORD *)&v49.m[0][1] = 0LL;
  *(_QWORD *)&v49.m[2][0] = v47.m128_u64[0];
  v49.m11 = (float)(v47.m128_f32[2] - v47.m128_f32[0]) / v44;
  v49.m22 = (float)(v47.m128_f32[3] - v47.m128_f32[1]) / v45;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v47,
    (const struct D2D1::Matrix3x2F *)v67,
    (const struct D2D1::Matrix3x2F *)&v49);
  v14 = v47;
  v15 = *((_QWORD *)this + 15);
  v16 = v48;
  *(_QWORD *)&v49.m[2][0] = v48;
  *(__m128 *)&v49.m11 = v47;
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, _BYTE *))(*(_QWORD *)v15 + 208LL))(v15, a2, v68);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v47,
      (const struct D2D1::Matrix3x2F *)&v49,
      (const struct D2D1::Matrix3x2F *)v68);
    v14 = v47;
    v16 = v48;
    *(__m128 *)&v49.m11 = v47;
    *(_QWORD *)&v49.m[2][0] = v48;
  }
  if ( !D2D1::Matrix3x2F::IsIdentity((CSurfaceBrush *)((char *)this + 128)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v47, (const struct D2D1::Matrix3x2F *)&v49, v17);
    v14 = v47;
    v16 = v48;
    *(__m128 *)&v49.m11 = v47;
    *(_QWORD *)&v49.m[2][0] = v48;
  }
  if ( a4 )
  {
    v18 = a2->width;
    v19 = a2->height;
    v60 = v64;
    v59 = 0LL;
    v61 = v64;
    v20 = v18 + 0.0;
    v21 = v19 + 0.0;
    v58 = &CRectanglesShape::`vftable';
    v62 = 1;
    v63 = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v64);
    v65 = 0LL;
    HIDWORD(v63) = 0;
    DynArrayImpl<0>::ShrinkToSize(&v60, 16LL);
    if ( v65 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
      v65 = 0LL;
    }
    v47.m128_u64[0] = 0LL;
    v47.m128_u64[1] = __PAIR64__(LODWORD(v21), LODWORD(v20));
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)&v60,
      &v47,
      1u);
    v22 = v66;
    v23 = DWORD1(v66);
    v24 = DWORD2(v66);
    v25 = HIDWORD(v66);
    v52 = v56;
    v53 = v56;
    v51 = 0LL;
    v50 = &CRectanglesShape::`vftable';
    v54 = 1;
    v55 = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v56);
    v57 = 0LL;
    HIDWORD(v55) = 0;
    DynArrayImpl<0>::ShrinkToSize(&v52, 16LL);
    if ( v57 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      v57 = 0LL;
    }
    v47.m128_u64[0] = __PAIR64__(v23, v22);
    v47.m128_u64[1] = __PAIR64__(v25, v24);
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)&v52,
      &v47,
      1u);
    CMILMatrix::CMILMatrix((CMILMatrix *)v46, &v49);
    *(_QWORD *)&v49.m[1][0] = 0LL;
    *(_QWORD *)&v49.m11 = &v43;
    LOBYTE(v49.m[2][0]) = 1;
    v26 = CShape::TryOptimizedCombinePaths(&v58, 0LL, &v50, v46, 1, v49.m[1]);
    v11 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v26, 0x1CCu);
    }
    else if ( !*(_QWORD *)&v49.m[1][0] )
    {
      v42 = CShape::D2DCombine(&v58, v27, &v50, v46, 1, v49.m[1]);
      v11 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v42, 0x1D7u);
    }
    if ( LOBYTE(v49.m[2][0]) )
    {
      v28 = *(_QWORD *)&v49.m11;
      v29 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v49.m11;
      **(_QWORD **)&v49.m11 = *(_QWORD *)&v49.m[1][0];
      if ( v29 )
        std::default_delete<CShape>::operator()(v28, v29);
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        v28,
        &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v11,
        0x22Eu);
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v43 + 16LL))(v43) )
      {
        v50 = &CRectanglesShape::`vftable';
        HIDWORD(v55) = 0;
        DynArrayImpl<0>::ShrinkToSize(&v52, 16LL);
        if ( v57 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
          v57 = 0LL;
        }
        if ( v52 != v53 )
        {
          DefaultHeap::Free(v52);
          v52 = 0LL;
        }
        v31 = v51;
        if ( v51 )
        {
          v51 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        v58 = &CRectanglesShape::`vftable';
        HIDWORD(v63) = 0;
        DynArrayImpl<0>::ShrinkToSize(&v60, 16LL);
        if ( v65 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
          v65 = 0LL;
        }
        if ( v60 != v61 )
        {
          DefaultHeap::Free(v60);
          v60 = 0LL;
        }
        v17 = v59;
        if ( v59 )
        {
          v59 = 0LL;
          (*(void (__fastcall **)(const struct D2D1::Matrix3x2F *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        goto LABEL_36;
      }
      v11 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(
        v30,
        &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2003304441,
        0x233u);
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v50);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v58);
    goto LABEL_46;
  }
LABEL_36:
  v32 = v66;
  *(__m128 *)a3 = v14;
  *((_QWORD *)a3 + 2) = v16;
  *(_OWORD *)((char *)a3 + 24) = v32;
  if ( a4 )
  {
    v33 = v43;
    v34 = 0LL;
    v43 = 0LL;
    *a4 = v33;
    goto LABEL_38;
  }
LABEL_46:
  v34 = v43;
LABEL_38:
  if ( v34 )
    std::default_delete<CShape>::operator()((__int64)v17, (__int64 (__fastcall ***)(_QWORD, __int64))v34);
  return (unsigned int)v11;
}
