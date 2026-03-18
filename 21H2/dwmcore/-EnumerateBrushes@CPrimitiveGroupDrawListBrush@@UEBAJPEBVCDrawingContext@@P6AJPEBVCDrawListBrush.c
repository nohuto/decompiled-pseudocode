/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18000BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x18000C284 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x18000C2A8 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800555F0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800860E4 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180088C60 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x1800E49FC (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x18024065C (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  unsigned int v5; // r14d
  CMILMatrix *v6; // rax
  bool v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rsi
  bool v11; // zf
  D2DMatrixHelper *v12; // rbx
  float v13; // r12d
  __m128i v14; // xmm6
  struct D2D_MATRIX_3X2_F *v15; // r9
  __int64 v16; // r11
  __int32 v17; // xmm1_4
  unsigned int v18; // xmm0_4
  unsigned int v19; // xmm0_4
  unsigned int v20; // xmm1_4
  CSurfaceDrawListBrush *v21; // rcx
  CSurfaceDrawListBrush *v22; // rax
  CSurfaceDrawListBrush *v23; // rax
  CSurfaceDrawListBrush *v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  CSurfaceDrawListBrush *v28; // [rsp+38h] [rbp-D0h] BYREF
  float v29; // [rsp+48h] [rbp-C0h] BYREF
  float v30[2]; // [rsp+58h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush **v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-98h]
  unsigned int v34; // [rsp+74h] [rbp-94h]
  __m256i v35; // [rsp+78h] [rbp-90h] BYREF
  __int128 v36; // [rsp+98h] [rbp-70h]
  __int128 v37; // [rsp+A8h] [rbp-60h]
  int v38; // [rsp+B8h] [rbp-50h]
  struct D2D_RECT_F v39; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-38h]
  void *v41; // [rsp+D8h] [rbp-30h]
  int (*v42)(const struct CDrawListBrush *, void *); // [rsp+E0h] [rbp-28h]
  struct D2D_RECT_F v43; // [rsp+E8h] [rbp-20h] BYREF
  __m256i v44; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v45; // [rsp+118h] [rbp+10h]
  __int128 v46; // [rsp+128h] [rbp+20h]
  int v47; // [rsp+138h] [rbp+30h]
  _BYTE v48[8]; // [rsp+148h] [rbp+40h] BYREF
  D2DMatrixHelper *v49; // [rsp+150h] [rbp+48h]
  _BYTE v50[72]; // [rsp+168h] [rbp+60h] BYREF
  struct D2D_RECT_F v51; // [rsp+1B0h] [rbp+A8h] BYREF

  v41 = a4;
  v42 = a3;
  v5 = 0;
  v47 = 0;
  CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 368), (struct CMILMatrix *)&v44);
  v6 = CMILMatrix::CMILMatrix((CMILMatrix *)v50, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
  v35 = *(__m256i *)v6;
  v36 = *((_OWORD *)v6 + 2);
  v37 = *((_OWORD *)v6 + 3);
  v38 = *((_DWORD *)v6 + 16);
  CMILMatrix::Multiply((CMILMatrix *)&v35, (const struct CMILMatrix *)&v44);
  v47 = v38;
  v44 = v35;
  v45 = v36;
  v46 = v37;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v44, v30, &v29);
  v7 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v30[0] - 1.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 - 1.0) & _xmm) >= 0.000081380211;
  v8 = *((_QWORD *)this + 9);
  v9 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v8 + 16) + 8LL) )
    return v5;
  while ( 1 )
  {
    v10 = **(_QWORD **)(v8 + 16) + 144 * v9;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v8, v48, (unsigned int)v9);
    if ( (*(_BYTE *)(v10 + 4) & 2) == 0
      && *(_DWORD *)v10
      && *(_DWORD *)(v10 + 40) < *(_DWORD *)(*((_QWORD *)this + 9) + 32LL) )
    {
      break;
    }
LABEL_23:
    v8 = *((_QWORD *)this + 9);
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *(_DWORD *)(*(_QWORD *)(v8 + 16) + 8LL) )
      return v5;
  }
  while ( 1 )
  {
    v11 = *((_BYTE *)this + 52) == 0;
    v12 = v49;
    v40 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) + 24LL * *(unsigned int *)(v10 + 40);
    if ( v11 )
    {
      v14 = _mm_loadu_si128((const __m128i *)v49);
      v13 = *((float *)v49 + 11);
      v30[0] = v13;
      v43 = (struct D2D_RECT_F)v14;
    }
    else
    {
      ClipRectAndEdgeFlags(v49, *((unsigned int *)v49 + 11), (char *)this + 32, *((unsigned int *)this + 12), &v43, v30);
      v13 = v30[0];
      v14 = (__m128i)v43;
    }
    if ( IsEmpty(&v43) )
      goto LABEL_22;
    if ( v7 )
    {
      v39 = (struct D2D_RECT_F)_mm_sub_ps(*(__m128 *)v12, (__m128)_xmm);
      D2DMatrixHelper::ComputeRectangleTransform(v12, &v39, &v51, v15);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v31,
        (const struct D2D1::Matrix3x2F *)&v51,
        (D2DMatrixHelper *)((char *)v12 + 64));
      *(__int64 *)((char *)&v35.m256i_i64[1] + 4) = v32;
      v19 = v33;
      v20 = v34;
      v35.m256i_i64[0] = (__int64)v31;
    }
    else
    {
      v17 = *((_DWORD *)v12 + 17);
      v35.m256i_i32[0] = *((_DWORD *)v12 + 16);
      v18 = *((_DWORD *)v12 + 18);
      v35.m256i_i32[1] = v17;
      *(__int64 *)((char *)&v35.m256i_i64[1] + 4) = __PAIR64__(*((_DWORD *)v12 + 19), v18);
      v19 = *((_DWORD *)v12 + 20);
      v20 = *((_DWORD *)v12 + 21);
    }
    v35.m256i_i32[2] = 0;
    v35.m256i_i32[5] = 0;
    v28 = 0LL;
    v32 = 0LL;
    v31 = &v28;
    LOWORD(v29) = *((_WORD *)this + 40);
    BYTE2(v29) = *((_BYTE *)this + 82);
    v35.m256i_i64[3] = __PAIR64__(v20, v19);
    LODWORD(v36) = 1065353216;
    LOBYTE(v33) = 1;
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v16, &v29, &v35, &v32);
    if ( (_BYTE)v33 )
    {
      v21 = *v31;
      *v31 = (CSurfaceDrawListBrush *)v32;
      if ( v21 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1u);
    }
    if ( (v5 & 0x80000000) != 0 )
      break;
    *((_BYTE *)v28 + 147) = 1;
    v22 = v28;
    *(_OWORD *)((char *)v28 + 120) = *(_OWORD *)((char *)v12 + 88);
    *((_BYTE *)v22 + 145) = 0;
    v23 = v28;
    *(_OWORD *)((char *)v28 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v23 + 3) = *((_QWORD *)this + 3);
    v24 = v28;
    *((_BYTE *)v28 + 52) = 1;
    *((__m128i *)v24 + 2) = v14;
    *((float *)v24 + 12) = v13;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v28, (const struct D2D_VECTOR_2F *)this + 7);
    v25 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v42)(v28, v41);
    v5 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xA6u, 0LL);
      goto LABEL_30;
    }
    if ( v28 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
LABEL_22:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v48) )
      goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, 0LL, 0, v5, 0x9Au, 0LL);
LABEL_30:
  if ( v28 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
  return v5;
}
