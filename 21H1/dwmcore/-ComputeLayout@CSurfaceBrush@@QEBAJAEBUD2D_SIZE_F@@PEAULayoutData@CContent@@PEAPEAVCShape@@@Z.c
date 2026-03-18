/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800549E0
 * Callers:
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001A51C (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001D950 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180046610 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004F1AC (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180052A08 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800B82CC (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801F23C0 (-GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConten.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180036E30 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180053160 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800950D4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DC3D0 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAVISwapChainRealization@@PEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801F21CC (-GetSwapChainSize@CSurfaceBrush@@AEBAJPEAVISwapChainRealization@@PEAUD2D_SIZE_F@@PEAUD2D_RECT_F@.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18025E340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CContent::LayoutData *a3,
        struct CShape **a4)
{
  CSurfaceBrush *v7; // rdi
  int v8; // r12d
  int (__fastcall ***v9)(_QWORD, GUID *, struct ISwapChainRealization **); // rcx
  CSurfaceBrush *v10; // rcx
  char v11; // al
  float left; // xmm12_4
  float top; // xmm11_4
  float right; // xmm14_4
  float bottom; // xmm13_4
  float width; // xmm5_4
  float height; // xmm4_4
  int v18; // edx
  float v19; // xmm0_4
  float v20; // xmm1_4
  __m128 v21; // xmm2
  __m128 v22; // xmm2
  __m128 v23; // xmm2
  __m128 v24; // xmm9
  __int64 v25; // rcx
  __int64 v26; // xmm10_8
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 (__fastcall ***v34)(_QWORD, __int64); // rdx
  __int64 v35; // rcx
  _BYTE *v36; // rcx
  _BYTE *v37; // rdx
  __int64 v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rdx
  struct D2D_RECT_F v41; // xmm1
  __int64 v42; // rcx
  __int64 v43; // rcx
  float v45; // xmm3_4
  float v46; // xmm1_4
  float v47; // xmm7_4
  __m128 width_low; // xmm2
  float v49; // xmm0_4
  float v50; // xmm3_4
  __m128 v51; // xmm2
  int SwapChainSize; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  char *v57; // rcx
  struct CShape *v58; // [rsp+38h] [rbp-D0h] BYREF
  struct ISwapChainRealization *v59; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v61; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_RECT_F v62; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_MATRIX_3X2_F v63; // [rsp+68h] [rbp-A0h] BYREF
  float v64[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v65; // [rsp+90h] [rbp-78h]
  unsigned __int32 v66; // [rsp+98h] [rbp-70h]
  unsigned __int32 v67; // [rsp+9Ch] [rbp-6Ch]
  __int64 v68; // [rsp+A0h] [rbp-68h]
  __int128 v69; // [rsp+A8h] [rbp-60h]
  __int64 v70; // [rsp+B8h] [rbp-50h]
  int v71; // [rsp+C0h] [rbp-48h]
  __int64 v72; // [rsp+C4h] [rbp-44h]
  struct D2D_SIZE_F v73[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int32 v74; // [rsp+E8h] [rbp-20h]
  __int32 v75; // [rsp+ECh] [rbp-1Ch]
  struct D2D_MATRIX_3X2_F v76; // [rsp+F0h] [rbp-18h] BYREF
  void **v77; // [rsp+108h] [rbp+0h] BYREF
  __int64 v78; // [rsp+110h] [rbp+8h]
  void *v79; // [rsp+118h] [rbp+10h] BYREF
  _BYTE *v80; // [rsp+120h] [rbp+18h]
  int v81; // [rsp+128h] [rbp+20h]
  __int64 v82; // [rsp+12Ch] [rbp+24h]
  _BYTE v83[16]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v84; // [rsp+148h] [rbp+40h]
  void **v85; // [rsp+158h] [rbp+50h] BYREF
  __int64 v86; // [rsp+160h] [rbp+58h]
  void *lpMem; // [rsp+168h] [rbp+60h] BYREF
  _BYTE *v88; // [rsp+170h] [rbp+68h]
  int v89; // [rsp+178h] [rbp+70h]
  __int64 v90; // [rsp+17Ch] [rbp+74h]
  _BYTE v91[16]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v92; // [rsp+198h] [rbp+90h]

  v7 = this;
  v8 = 0;
  if ( a2->width <= 0.0 || a2->height <= 0.0 || (this = (CSurfaceBrush *)*((_QWORD *)this + 12)) == 0LL )
  {
    v8 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802DCD60, 2u, -2003304441, 0x399u, 0LL);
    return (unsigned int)v8;
  }
  v58 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  if ( (**(int (__fastcall ***)(CSurfaceBrush *, GUID *, _QWORD **))this)(
         this,
         &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
         &v61) >= 0
    && (*(int (__fastcall **)(_QWORD *, __int64 *))(*v61 + 48LL))(v61, &v60) >= 0
    && (v9 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChainRealization **))(*(int *)(*(_QWORD *)(v60 + 8) + 4LL)
                                                                                   + v60
                                                                                   + 8),
        (**v9)(v9, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v59) >= 0) )
  {
    SwapChainSize = CSurfaceBrush::GetSwapChainSize(v10, v59, v73, &v62, &v76);
    v8 = SwapChainSize;
    if ( SwapChainSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, &dword_1802DCD60, 2u, SwapChainSize, 0x3B1u, 0LL);
      goto LABEL_67;
    }
    bottom = v62.bottom;
    right = v62.right;
    top = v62.top;
    left = v62.left;
    height = v73[0].height;
    width = v73[0].width;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 12) + 56LL))(*((_QWORD *)v7 + 12), 200LL);
    *(_OWORD *)&v76.m11 = _xmm;
    if ( v11 )
    {
      v54 = *((_QWORD *)v7 + 12);
      v55 = 80LL;
      *(_QWORD *)&v76.m[2][0] = 0LL;
      left = 0.0;
      top = 0.0;
      if ( !*(_BYTE *)(v54 + 152) )
        v55 = 72LL;
      width = *(float *)(v55 + v54);
      height = *(float *)(v55 + v54 + 4);
      right = width + 0.0;
      bottom = height + 0.0;
    }
    else
    {
      left = *((float *)v7 + 34);
      top = *((float *)v7 + 35);
      right = *((float *)v7 + 36);
      bottom = *((float *)v7 + 37);
      width = right - left;
      LODWORD(v76.dx) = LODWORD(left) ^ _xmm;
      height = bottom - top;
      LODWORD(v76.dy) = LODWORD(top) ^ _xmm;
    }
    v62.bottom = bottom;
    v62.right = right;
    v62.top = top;
    v62.left = left;
  }
  v18 = *((_DWORD *)v7 + 22);
  v73[0] = 0LL;
  if ( v18 == 1 )
  {
    v19 = a2->width;
    v20 = a2->height;
    v73[0] = 0LL;
    v21 = _mm_shuffle_ps(*(__m128 *)&v73[0].width, *(__m128 *)&v73[0].width, 210);
    v21.m128_f32[0] = v19;
  }
  else
  {
    if ( v18 )
    {
      if ( (unsigned int)(v18 - 2) > 1 )
      {
        v47 = v73[0].height;
        v45 = v73[0].width;
      }
      else
      {
        v45 = a2->width;
        v46 = a2->height;
        v47 = a2->width / (float)(width / height);
        if ( v47 >= v46 != (v18 == 3) )
        {
          v47 = a2->height;
          v45 = (float)(width / height) * v46;
        }
      }
    }
    else
    {
      v45 = width;
      v47 = height;
    }
    width_low = (__m128)LODWORD(a2->width);
    width_low.m128_f32[0] = (float)(width_low.m128_f32[0] - v45) * *((float *)v7 + 20);
    v49 = (float)(a2->height - v47) * *((float *)v7 + 21);
    v50 = v45 + width_low.m128_f32[0];
    v51 = _mm_shuffle_ps(width_low, width_low, 225);
    v51.m128_f32[0] = v49;
    v21 = _mm_shuffle_ps(v51, v51, 198);
    v20 = v49 + v47;
    v21.m128_f32[0] = v50;
  }
  v22 = _mm_shuffle_ps(v21, v21, 39);
  v22.m128_f32[0] = v20;
  v23 = _mm_shuffle_ps(v22, v22, 57);
  v74 = v23.m128_i32[0];
  v75 = v23.m128_i32[1];
  *(_QWORD *)&v73[0].height = 0LL;
  v73[0].width = (float)(v23.m128_f32[2] - v23.m128_f32[0]) / width;
  v73[1].height = (float)(v23.m128_f32[3] - v23.m128_f32[1]) / height;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v63,
    (const struct D2D1::Matrix3x2F *)&v76,
    (const struct D2D1::Matrix3x2F *)v73);
  v24 = *(__m128 *)&v63.m11;
  v25 = *((_QWORD *)v7 + 13);
  v26 = *(_QWORD *)&v63.m[2][0];
  v76 = v63;
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_SIZE_F *))(*(_QWORD *)v25 + 224LL))(
      v25,
      a2,
      v73);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v63,
      (const struct D2D1::Matrix3x2F *)&v76,
      (const struct D2D1::Matrix3x2F *)v73);
    v24 = *(__m128 *)&v63.m11;
    v26 = *(_QWORD *)&v63.m[2][0];
    v76 = v63;
  }
  if ( *((float *)v7 + 28) != 1.0
    || *((float *)v7 + 29) != 0.0
    || *((float *)v7 + 30) != 0.0
    || *((float *)v7 + 31) != 1.0
    || *((float *)v7 + 32) != 0.0
    || *((float *)v7 + 33) != 0.0 )
  {
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v63,
      (const struct D2D1::Matrix3x2F *)&v76,
      (CSurfaceBrush *)((char *)v7 + 112));
    v26 = *(_QWORD *)&v63.m[2][0];
    v24 = *(__m128 *)&v63.m11;
    *(_QWORD *)&v76.m[2][0] = *(_QWORD *)&v63.m[2][0];
  }
  if ( !a4 )
    goto LABEL_46;
  v27 = a2->width;
  lpMem = v91;
  v28 = a2->height;
  v88 = v91;
  v29 = v27 + 0.0;
  v30 = v28 + 0.0;
  v86 = 0LL;
  v85 = &CRectanglesShape::`vftable';
  v89 = 1;
  v90 = 1LL;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v91);
  v92 = 0LL;
  HIDWORD(v90) = 0;
  if ( lpMem != v88 )
  {
    operator delete(lpMem);
    lpMem = v88;
    LODWORD(v90) = v89;
    if ( v92 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
      v92 = 0LL;
    }
  }
  v73[1].width = v29;
  v73[1].height = v30;
  v73[0] = 0LL;
  DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    (__int64)&lpMem,
    v73,
    1LL);
  v78 = 0LL;
  v79 = v83;
  v77 = &CRectanglesShape::`vftable';
  v80 = v83;
  v81 = 1;
  v82 = 1LL;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v83);
  v84 = 0LL;
  HIDWORD(v82) = 0;
  if ( v79 != v80 )
  {
    operator delete(v79);
    v79 = v80;
    LODWORD(v82) = v81;
    if ( v84 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
      v84 = 0LL;
    }
  }
  v73[0].width = left;
  v73[0].height = top;
  v73[1].width = right;
  v73[1].height = bottom;
  DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    (__int64)&v79,
    v73,
    1LL);
  v64[0] = v24.m128_f32[0];
  LODWORD(v64[1]) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
  *(_QWORD *)&v76.m11 = &v58;
  v66 = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  v69 = _xmm;
  v67 = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
  v70 = *(_QWORD *)&v76.m[2][0];
  v72 = 1065353216LL;
  v65 = 0LL;
  v68 = 0LL;
  v71 = 0;
  *(_QWORD *)&v76.m[1][0] = 0LL;
  LOBYTE(v76.m[2][0]) = 1;
  v31 = CShape::TryOptimizedCombinePaths(
          (struct CRectanglesShape *)&v85,
          0LL,
          (CShape *)&v77,
          v64,
          1,
          (struct CShape **)v76.m[1]);
  v8 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v31, 0x170u, 0LL);
  }
  else if ( !*(_QWORD *)&v76.m[1][0] )
  {
    v56 = CShape::D2DCombine(&v85, v32, &v77, v64, 1, v76.m[1]);
    v8 = v56;
    if ( v56 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v56, 0x17Bu, 0LL);
  }
  if ( LOBYTE(v76.m[2][0]) )
  {
    v33 = *(_QWORD *)&v76.m11;
    v34 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v76.m11;
    **(_QWORD **)&v76.m11 = *(_QWORD *)&v76.m[1][0];
    if ( v34 )
      std::default_delete<CShape>::operator()(v33, v34);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802DCD60, 2u, v8, 0x3FFu, 0LL);
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v58 + 16LL))(v58) )
    {
      v36 = v79;
      v37 = v80;
      v77 = &CRectanglesShape::`vftable';
      HIDWORD(v82) = 0;
      if ( v79 != v80 )
      {
        operator delete(v79);
        v37 = v80;
        v36 = v80;
        v79 = v80;
        LODWORD(v82) = v81;
      }
      if ( v84 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
        v37 = v80;
        v36 = v79;
        v84 = 0LL;
      }
      if ( v36 != v37 )
      {
        operator delete(v36);
        v79 = 0LL;
      }
      v38 = v78;
      if ( v78 )
      {
        v78 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v39 = lpMem;
      v40 = v88;
      v85 = &CRectanglesShape::`vftable';
      HIDWORD(v90) = 0;
      if ( lpMem != v88 )
      {
        operator delete(lpMem);
        v40 = v88;
        v39 = v88;
        lpMem = v88;
        LODWORD(v90) = v89;
      }
      if ( v92 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
        v40 = v88;
        v39 = lpMem;
        v92 = 0LL;
      }
      if ( v39 != v40 )
      {
        operator delete(v39);
        lpMem = 0LL;
      }
      v25 = v86;
      if ( v86 )
      {
        v86 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
LABEL_46:
      v41 = v62;
      *(__m128 *)a3 = v24;
      *((_QWORD *)a3 + 2) = v26;
      *(struct D2D_RECT_F *)((char *)a3 + 24) = v41;
      if ( a4 )
      {
        *a4 = v58;
        v58 = 0LL;
      }
      if ( v59 )
      {
        v57 = (char *)v59 + *(int *)(*((_QWORD *)v59 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v57 + 16LL))(v57);
      }
      if ( v60 )
      {
        v42 = *(int *)(*(_QWORD *)(v60 + 8) + 4LL) + v60 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      if ( v61 )
      {
        v43 = (__int64)v61 + *(int *)(v61[1] + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      goto LABEL_54;
    }
    v8 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v35, &dword_1802DCD60, 2u, -2003304441, 0x404u, 0LL);
  }
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v77);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v85);
LABEL_67:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v59);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v60);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v61);
LABEL_54:
  if ( v58 )
    std::default_delete<CShape>::operator()(v25, (__int64 (__fastcall ***)(_QWORD, __int64))v58);
  return (unsigned int)v8;
}
