/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EDC00
 * Callers:
 *     <none>
 * Callees:
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x1800145C0 (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18005CC64 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180061250 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180062EF0 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800650B4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800979D0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1800B66E4 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800B6848 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B69BC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C0458 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C2CA8 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801EE0E0 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  unsigned int v5; // r14d
  CMILMatrix *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 v12; // rsi
  D2DMatrixHelper *v13; // rbx
  struct CSurfaceDrawListBrush *v14; // r15
  float v15; // r13d
  __m128i v16; // xmm6
  struct D2D_MATRIX_3X2_F *v17; // r9
  unsigned int v18; // xmm0_4
  unsigned int v19; // xmm1_4
  __int32 v20; // xmm1_4
  unsigned int v21; // xmm0_4
  CSurfaceDrawListBrush *v22; // rcx
  unsigned int v23; // r8d
  CSurfaceDrawListBrush *v24; // rax
  CSurfaceDrawListBrush *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rdx
  unsigned int v31; // r8d
  char v33; // [rsp+38h] [rbp-D0h]
  CSurfaceDrawListBrush *v34; // [rsp+40h] [rbp-C8h] BYREF
  float v35; // [rsp+48h] [rbp-C0h] BYREF
  float v36; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v37; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+80h] [rbp-88h]
  __int128 v39; // [rsp+90h] [rbp-78h]
  int v40; // [rsp+A0h] [rbp-68h]
  struct D2D_RECT_F v41; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v42[2]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v43; // [rsp+C8h] [rbp-40h]
  unsigned int v44; // [rsp+CCh] [rbp-3Ch]
  CSurfaceDrawListBrush **v45; // [rsp+D0h] [rbp-38h]
  CSurfaceDrawListBrush *v46; // [rsp+D8h] [rbp-30h] BYREF
  char v47; // [rsp+E0h] [rbp-28h]
  void *v48; // [rsp+E8h] [rbp-20h]
  int (*v49)(const struct CDrawListBrush *, void *); // [rsp+F0h] [rbp-18h]
  __m128i v50; // [rsp+F8h] [rbp-10h] BYREF
  __m256i v51; // [rsp+108h] [rbp+0h] BYREF
  __int128 v52; // [rsp+128h] [rbp+20h]
  __int128 v53; // [rsp+138h] [rbp+30h]
  int v54; // [rsp+148h] [rbp+40h]
  _BYTE v55[8]; // [rsp+158h] [rbp+50h] BYREF
  D2DMatrixHelper *v56; // [rsp+160h] [rbp+58h]
  _BYTE v57[72]; // [rsp+178h] [rbp+70h] BYREF
  struct D2D_RECT_F v58; // [rsp+1C0h] [rbp+B8h] BYREF

  v48 = a4;
  v49 = a3;
  v5 = 0;
  v54 = 0;
  CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 408), (struct CMILMatrix *)&v51);
  v6 = CMILMatrix::CMILMatrix((CMILMatrix *)v57, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
  v7 = *((_OWORD *)v6 + 1);
  *(_OWORD *)v37.m256i_i8 = *(_OWORD *)v6;
  v8 = *((_OWORD *)v6 + 2);
  *(_OWORD *)&v37.m256i_u64[2] = v7;
  v9 = *((_OWORD *)v6 + 3);
  LODWORD(v6) = *((_DWORD *)v6 + 16);
  v38 = v8;
  v40 = (int)v6;
  v39 = v9;
  CMILMatrix::Multiply((CMILMatrix *)&v37, (const struct CMILMatrix *)&v51);
  v54 = v40;
  v51 = v37;
  v52 = v38;
  v53 = v39;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v51, &v36, &v35);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v36 - 1.0) & _xmm) >= 0.000081380211
    || (v33 = 0, COERCE_FLOAT(COERCE_UNSIGNED_INT(v35 - 1.0) & _xmm) >= 0.000081380211) )
  {
    v33 = 1;
  }
  v10 = *((_QWORD *)this + 9);
  v11 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(v10 + 16) + 8LL) )
    return v5;
  while ( 1 )
  {
    v12 = **(_QWORD **)(v10 + 16) + 144LL * v11;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v10, (__int64)v55, v11);
    if ( (*(_BYTE *)(v12 + 4) & 2) == 0
      && *(_DWORD *)v12
      && *(_DWORD *)(v12 + 40) < *(_DWORD *)(*((_QWORD *)this + 9) + 56LL) )
    {
      break;
    }
LABEL_24:
    v10 = *((_QWORD *)this + 9);
    if ( ++v11 >= *(_DWORD *)(*(_QWORD *)(v10 + 16) + 8LL) )
      return v5;
  }
  while ( 1 )
  {
    v13 = v56;
    v14 = (struct CSurfaceDrawListBrush *)(*(_QWORD *)(*((_QWORD *)this + 9) + 104LL)
                                         + 48LL * *(unsigned int *)(v12 + 40));
    if ( *((_BYTE *)this + 52) )
    {
      ClipRectAndEdgeFlags(
        (__int64)v56,
        *((_DWORD *)v56 + 11),
        (__int64)this + 32,
        *((_DWORD *)this + 12),
        &v50,
        (int *)&v36);
      v15 = v36;
      v16 = v50;
    }
    else
    {
      v16 = _mm_loadu_si128((const __m128i *)v56);
      v15 = *((float *)v56 + 11);
      v36 = v15;
      v50 = v16;
    }
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v50.m128i_i32) )
      goto LABEL_23;
    if ( v33 )
    {
      v41 = (struct D2D_RECT_F)_mm_sub_ps(*(__m128 *)v13, (__m128)_xmm);
      D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)v13, &v41, &v58, v17);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)v42,
        (const struct D2D1::Matrix3x2F *)&v58,
        (D2DMatrixHelper *)((char *)v13 + 64));
      *(__int64 *)((char *)&v37.m256i_i64[1] + 4) = v42[1];
      v18 = v43;
      v19 = v44;
      v37.m256i_i64[0] = v42[0];
    }
    else
    {
      v20 = *((_DWORD *)v13 + 17);
      v37.m256i_i32[0] = *((_DWORD *)v13 + 16);
      v21 = *((_DWORD *)v13 + 18);
      v37.m256i_i32[1] = v20;
      *(__int64 *)((char *)&v37.m256i_i64[1] + 4) = __PAIR64__(*((_DWORD *)v13 + 19), v21);
      v18 = *((_DWORD *)v13 + 20);
      v19 = *((_DWORD *)v13 + 21);
    }
    v37.m256i_i32[2] = 0;
    v37.m256i_i32[5] = 0;
    v34 = 0LL;
    v46 = 0LL;
    v45 = &v34;
    LOWORD(v35) = *((_WORD *)this + 40);
    BYTE2(v35) = *((_BYTE *)this + 82);
    v37.m256i_i64[3] = __PAIR64__(v19, v18);
    LODWORD(v38) = 1065353216;
    v47 = 1;
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v14, (__int16 *)&v35, (__int64)&v37, &v46);
    if ( v47 )
    {
      v23 = (unsigned int)v45;
      v22 = *v45;
      *v45 = v46;
      if ( v22 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1, v23);
    }
    if ( (v5 & 0x80000000) != 0 )
      break;
    *((_BYTE *)v34 + 169) = 1;
    *((_OWORD *)v34 + 9) = *(_OWORD *)((char *)v13 + 88);
    v24 = v34;
    *(_OWORD *)((char *)v34 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v24 + 3) = *((_QWORD *)this + 3);
    v25 = v34;
    *((_BYTE *)v34 + 52) = 1;
    *((__m128i *)v25 + 2) = v16;
    *((float *)v25 + 12) = v15;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v34, (const struct D2D_VECTOR_2F *)this + 7);
    v26 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v49)(v34, v48);
    v5 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v26, 0xA6u, 0LL);
      goto LABEL_28;
    }
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v34, v27, v29);
LABEL_23:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v55) )
      goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0, v5, 0x9Au, 0LL);
LABEL_28:
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v34, v30, v31);
  return v5;
}
