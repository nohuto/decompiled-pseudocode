/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800ED520
 * Callers:
 *     <none>
 * Callees:
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180014928 (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180049DF0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180053280 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057AD4 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080080 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1800C14CC (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800C1630 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800C17A4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C3328 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800C81A0 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801EFF20 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  unsigned int v5; // r15d
  int v6; // edi
  CMILMatrix *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rcx
  unsigned int i; // r12d
  __int64 v16; // r14
  D2DMatrixHelper *v17; // rsi
  struct CSurfaceDrawListBrush *v18; // r15
  float v19; // r13d
  __m128i v20; // xmm6
  struct D2D_MATRIX_3X2_F *v21; // r9
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm1_4
  __int32 v24; // xmm1_4
  unsigned int v25; // xmm0_4
  CSurfaceDrawListBrush *v26; // rcx
  unsigned int v27; // r8d
  CSurfaceDrawListBrush *v28; // rax
  CSurfaceDrawListBrush *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // r8d
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // rsi
  D2DMatrixHelper *v36; // r14
  __m128i v37; // xmm6
  __int32 v38; // xmm0_4
  unsigned int v39; // xmm1_4
  __int64 v40; // rax
  __int32 v41; // xmm0_4
  unsigned int v42; // xmm1_4
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // xmm0_4
  struct CSurfaceDrawListBrush *v46; // rcx
  unsigned int v47; // r8d
  CSurfaceDrawListBrush *v48; // rax
  CSurfaceDrawListBrush *v49; // rcx
  __int64 v50; // rdx
  unsigned int v51; // r8d
  __int64 v52; // rdx
  unsigned int v53; // r8d
  unsigned int v55; // [rsp+28h] [rbp-E0h]
  char v56; // [rsp+38h] [rbp-D0h]
  CSurfaceDrawListBrush *v57; // [rsp+40h] [rbp-C8h] BYREF
  float v58; // [rsp+48h] [rbp-C0h] BYREF
  float v59; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v60; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+80h] [rbp-88h]
  __int128 v62; // [rsp+90h] [rbp-78h]
  int v63; // [rsp+A0h] [rbp-68h]
  CSurfaceDrawListBrush **v64; // [rsp+A8h] [rbp-60h]
  CSurfaceDrawListBrush *v65; // [rsp+B0h] [rbp-58h] BYREF
  char v66; // [rsp+B8h] [rbp-50h]
  __m128i v67; // [rsp+C0h] [rbp-48h] BYREF
  struct D2D_RECT_F v68; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v69[2]; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v70; // [rsp+F0h] [rbp-18h]
  unsigned int v71; // [rsp+F4h] [rbp-14h]
  void *v72; // [rsp+F8h] [rbp-10h]
  int (*v73)(const struct CDrawListBrush *, void *); // [rsp+100h] [rbp-8h]
  _BYTE v74[8]; // [rsp+108h] [rbp+0h] BYREF
  D2DMatrixHelper *v75; // [rsp+110h] [rbp+8h]
  __m256i v76; // [rsp+128h] [rbp+20h] BYREF
  __int128 v77; // [rsp+148h] [rbp+40h]
  __int128 v78; // [rsp+158h] [rbp+50h]
  int v79; // [rsp+168h] [rbp+60h]
  _BYTE v80[72]; // [rsp+178h] [rbp+70h] BYREF
  struct D2D_RECT_F v81; // [rsp+1C0h] [rbp+B8h] BYREF

  v72 = a4;
  v5 = 0;
  v73 = a3;
  v6 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl) )
  {
    v79 = 0;
    CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 408), (struct CMILMatrix *)&v76);
    v10 = CMILMatrix::CMILMatrix((CMILMatrix *)v80, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
    v11 = *((_OWORD *)v10 + 1);
    *(_OWORD *)v60.m256i_i8 = *(_OWORD *)v10;
    v12 = *((_OWORD *)v10 + 2);
    *(_OWORD *)&v60.m256i_u64[2] = v11;
    v13 = *((_OWORD *)v10 + 3);
    LODWORD(v10) = *((_DWORD *)v10 + 16);
    v61 = v12;
    v63 = (int)v10;
    v62 = v13;
    CMILMatrix::Multiply((CMILMatrix *)&v60, (const struct CMILMatrix *)&v76);
    v79 = v63;
    v76 = v60;
    v77 = v61;
    v78 = v62;
    CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v76, &v59, &v58);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v59 - 1.0) & _xmm) >= 0.000081380211
      || (v56 = 0, COERCE_FLOAT(COERCE_UNSIGNED_INT(v58 - 1.0) & _xmm) >= 0.000081380211) )
    {
      v56 = 1;
    }
    v14 = *((_QWORD *)this + 9);
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)(v14 + 16) + 8LL); ++i )
    {
      v16 = **(_QWORD **)(v14 + 16) + 144LL * i;
      CPrimitiveGroupDrawListGenerator::GetIteratorForState(v14, (__int64)v74, i);
      if ( (*(_BYTE *)(v16 + 4) & 2) == 0
        && *(_DWORD *)v16
        && *(_DWORD *)(v16 + 40) < *(_DWORD *)(*((_QWORD *)this + 9) + 56LL) )
      {
        do
        {
          v17 = v75;
          v18 = (struct CSurfaceDrawListBrush *)(*(_QWORD *)(*((_QWORD *)this + 9) + 104LL)
                                               + 48LL * *(unsigned int *)(v16 + 40));
          if ( *((_BYTE *)this + 52) )
          {
            ClipRectAndEdgeFlags(
              (__int64)v75,
              *((_DWORD *)v75 + 11),
              (__int64)this + 32,
              *((_DWORD *)this + 12),
              &v67,
              (int *)&v59);
            v19 = v59;
            v20 = v67;
          }
          else
          {
            v20 = _mm_loadu_si128((const __m128i *)v75);
            v19 = *((float *)v75 + 11);
            v59 = v19;
            v67 = v20;
          }
          if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v67.m128i_i32) )
          {
            if ( v56 )
            {
              v68 = (struct D2D_RECT_F)_mm_sub_ps(*(__m128 *)v17, (__m128)_xmm);
              D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)v17, &v68, &v81, v21);
              D2D1::Matrix3x2F::SetProduct(
                (D2D1::Matrix3x2F *)v69,
                (const struct D2D1::Matrix3x2F *)&v81,
                (D2DMatrixHelper *)((char *)v17 + 64));
              *(__int64 *)((char *)&v60.m256i_i64[1] + 4) = v69[1];
              v22 = v70;
              v23 = v71;
              v60.m256i_i64[0] = v69[0];
            }
            else
            {
              v24 = *((_DWORD *)v17 + 17);
              v60.m256i_i32[0] = *((_DWORD *)v17 + 16);
              v25 = *((_DWORD *)v17 + 18);
              v60.m256i_i32[1] = v24;
              *(__int64 *)((char *)&v60.m256i_i64[1] + 4) = __PAIR64__(*((_DWORD *)v17 + 19), v25);
              v22 = *((_DWORD *)v17 + 20);
              v23 = *((_DWORD *)v17 + 21);
            }
            v60.m256i_i32[2] = 0;
            v60.m256i_i32[5] = 0;
            v57 = 0LL;
            v65 = 0LL;
            v64 = &v57;
            LOWORD(v58) = *((_WORD *)this + 40);
            BYTE2(v58) = *((_BYTE *)this + 82);
            v60.m256i_i64[3] = __PAIR64__(v23, v22);
            LODWORD(v61) = 1065353216;
            v66 = 1;
            v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(v18, (__int16 *)&v58, (__int64)&v60, &v65);
            if ( v66 )
            {
              v27 = (unsigned int)v64;
              v26 = *v64;
              *v64 = v65;
              if ( v26 )
                CSurfaceDrawListBrush::`vector deleting destructor'(v26, 1, v27);
            }
            if ( v6 < 0 )
            {
              v55 = 156;
              goto LABEL_51;
            }
            *((_BYTE *)v57 + 169) = 1;
            *((_OWORD *)v57 + 9) = *(_OWORD *)((char *)v17 + 88);
            v28 = v57;
            *(_OWORD *)((char *)v57 + 8) = *(_OWORD *)((char *)this + 8);
            *((_QWORD *)v28 + 3) = *((_QWORD *)this + 3);
            v29 = v57;
            *((_BYTE *)v57 + 52) = 1;
            *((__m128i *)v29 + 2) = v20;
            *((float *)v29 + 12) = v19;
            if ( *((_BYTE *)this + 64) )
              CSurfaceDrawListBrush::SetSnapToPixelsReference(v57, (const struct D2D_VECTOR_2F *)this + 7);
            v30 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v73)(v57, v72);
            v6 = v30;
            if ( v30 < 0 )
            {
              v55 = 168;
              goto LABEL_28;
            }
            std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v57, v31, v32);
          }
        }
        while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v74) );
      }
      v14 = *((_QWORD *)this + 9);
    }
    return (unsigned int)v6;
  }
  v34 = *((_QWORD *)this + 9);
  if ( !*(_DWORD *)(*(_QWORD *)(v34 + 16) + 8LL) )
    return (unsigned int)v6;
  while ( 1 )
  {
    v35 = **(_QWORD **)(v34 + 16) + 144LL * v5;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v34, (__int64)v74, v5);
    if ( (*(_BYTE *)(v35 + 4) & 2) == 0
      && *(_DWORD *)v35
      && *(_DWORD *)(v35 + 40) < *(_DWORD *)(*((_QWORD *)this + 9) + 56LL) )
    {
      break;
    }
LABEL_47:
    v34 = *((_QWORD *)this + 9);
    if ( ++v5 >= *(_DWORD *)(*(_QWORD *)(v34 + 16) + 8LL) )
      return (unsigned int)v6;
  }
  while ( 1 )
  {
    v36 = v75;
    if ( *((_BYTE *)this + 52) )
    {
      ClipRectAndEdgeFlags(
        (__int64)v75,
        *((_DWORD *)v75 + 11),
        (__int64)this + 32,
        *((_DWORD *)this + 12),
        &v67,
        (int *)&v59);
      v37 = v67;
    }
    else
    {
      v37 = _mm_loadu_si128((const __m128i *)v75);
      v67 = v37;
    }
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v67.m128i_i32) )
      goto LABEL_46;
    v57 = 0LL;
    v38 = *((_DWORD *)v36 + 16);
    v39 = *((_DWORD *)v36 + 17);
    v65 = 0LL;
    v64 = &v57;
    LOWORD(v58) = *((_WORD *)this + 40);
    BYTE2(v58) = *((_BYTE *)this + 82);
    v40 = *(unsigned int *)(v35 + 40);
    v60.m256i_i32[0] = v38;
    v41 = *((_DWORD *)v36 + 18);
    *(__int64 *)((char *)v60.m256i_i64 + 4) = v39;
    v42 = *((_DWORD *)v36 + 19);
    v43 = 3 * v40;
    v44 = *((_QWORD *)this + 9);
    v60.m256i_i32[3] = v41;
    v45 = *((_DWORD *)v36 + 20);
    v60.m256i_i64[2] = v42;
    v46 = (struct CSurfaceDrawListBrush *)(*(_QWORD *)(v44 + 104) + 16 * v43);
    v60.m256i_i64[3] = __PAIR64__(*((_DWORD *)v36 + 21), v45);
    v66 = 1;
    LODWORD(v61) = 1065353216;
    v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(v46, (__int16 *)&v58, (__int64)&v60, &v65);
    if ( v66 )
    {
      v26 = *v64;
      *v64 = v65;
      if ( v26 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v26, 1, v47);
    }
    if ( v6 < 0 )
      break;
    *((_OWORD *)v57 + 9) = *(_OWORD *)((char *)v36 + 88);
    v48 = v57;
    *(_OWORD *)((char *)v57 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v48 + 3) = *((_QWORD *)this + 3);
    v49 = v57;
    LODWORD(v48) = *((_DWORD *)v36 + 11);
    *((_BYTE *)v57 + 52) = 1;
    *((__m128i *)v49 + 2) = v37;
    *((_DWORD *)v49 + 12) = (_DWORD)v48;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v57, (const struct D2D_VECTOR_2F *)this + 7);
    v30 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))a3)(v57, a4);
    v6 = v30;
    if ( v30 < 0 )
    {
      v55 = 256;
LABEL_28:
      v33 = v30;
      goto LABEL_52;
    }
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v57, v50, v51);
LABEL_46:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v74) )
      goto LABEL_47;
  }
  v55 = 246;
LABEL_51:
  v33 = v6;
LABEL_52:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v26, 0LL, 0, v33, v55, 0LL);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v57, v52, v53);
  return (unsigned int)v6;
}
