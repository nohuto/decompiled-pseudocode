/*
 * XREFs of ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18005D490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800567A4 (-GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResour.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800581B8 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x18005C210 (-IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18005D920 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CVisualSurfaceRenderStrategy::GetBrushParameters(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct D2D_SIZE_F *a3)
{
  CVisualSurface *v3; // rbx
  unsigned int v5; // r13d
  char v7; // r12
  char v8; // r15
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  CMatrixStack *v12; // rcx
  int v13; // r10d
  struct D2D_SIZE_F v14; // rax
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // xmm0_4
  CCachedVisualImage *v20; // rbx
  struct IBitmapResource *v21; // rdx
  int BrushParametersWorker; // eax
  unsigned int v23; // ecx
  struct D2D_SIZE_F v25; // rax
  int CVIForRealizationSize; // eax
  unsigned int v27; // ecx
  CMatrixStack *v28; // rcx
  int v29; // r10d
  struct D2D_VECTOR_2F v30; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v31; // [rsp+40h] [rbp-C8h] BYREF
  struct CCachedVisualImage *v32; // [rsp+58h] [rbp-B0h]
  __int128 v33; // [rsp+60h] [rbp-A8h]
  struct CCachedVisualImage *v34[4]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v35; // [rsp+90h] [rbp-78h] BYREF
  struct CCachedVisualImage *v36; // [rsp+A0h] [rbp-68h]
  __int128 v37; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-50h]
  __int128 v39; // [rsp+C8h] [rbp-40h]
  __int128 v40; // [rsp+D8h] [rbp-30h]
  int v41; // [rsp+E8h] [rbp-20h]
  __int128 v42; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v43; // [rsp+108h] [rbp+0h]
  __int128 v44; // [rsp+118h] [rbp+10h]
  __int128 v45; // [rsp+128h] [rbp+20h]
  int v46; // [rsp+138h] [rbp+30h]
  _BYTE v47[64]; // [rsp+148h] [rbp+40h] BYREF
  int v48; // [rsp+188h] [rbp+80h]
  __int128 v49; // [rsp+198h] [rbp+90h] BYREF
  int v50; // [rsp+1A8h] [rbp+A0h]
  int v51; // [rsp+1ACh] [rbp+A4h]

  v3 = (CVisualSurface *)*((_QWORD *)a2 + 13);
  v5 = *((_DWORD *)a2 + 25);
  v34[0] = 0LL;
  v7 = *((_BYTE *)v3 + 200);
  v8 = 0;
  v9 = CSurfaceBrush::ComputeLayout(a2, a3 + 1, (struct CContent::LayoutData *)v31.m[1], 0LL);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4C0u, 0LL);
    goto LABEL_12;
  }
  if ( v7 )
  {
    if ( *((_BYTE *)a2 + 169) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)&v42, (struct D2D_MATRIX_3X2_F *)v31.m[1]);
      v28 = (CMatrixStack *)(*(_QWORD *)a3 + 368LL);
      v48 = v29;
      v49 = v33;
      CMatrixStack::Top(v28, (struct CMILMatrix *)v47);
      v37 = v42;
      v38 = v43;
      v39 = v44;
      v40 = v45;
      v41 = v46;
      CMILMatrix::Multiply((CMILMatrix *)&v37, (const struct CMILMatrix *)v47);
      v31.m11 = 1.0;
      if ( CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)&v37, &v31.m12, &v31.m11, (__int64)&v49)
        && (v31.m12 < 1.0 || v31.m11 < 1.0) )
      {
        v5 = 3;
      }
      v8 = 1;
    }
    v25 = *a3;
    v30.x = 0.0;
    v30.y = 0.0;
    CVIForRealizationSize = CVisualSurface::GetCVIForRealizationSize(
                              v3,
                              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v25 + 40LL) + 928LL),
                              &v30,
                              &v30,
                              v34);
    v11 = CVIForRealizationSize;
    if ( CVIForRealizationSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, CVIForRealizationSize, 0x4E1u, 0LL);
      goto LABEL_12;
    }
  }
  else
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)&v42, (struct D2D_MATRIX_3X2_F *)v31.m[1]);
    v12 = (CMatrixStack *)(*(_QWORD *)a3 + 368LL);
    v48 = v13;
    CMatrixStack::Top(v12, (struct CMILMatrix *)v47);
    v37 = v42;
    v38 = v43;
    v39 = v44;
    v40 = v45;
    v41 = v46;
    CMILMatrix::Multiply((CMILMatrix *)&v37, (const struct CMILMatrix *)v47);
    v49 = v33;
    CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)&v37, &v31.m12, &v31.m11, (__int64)&v49);
    *(_QWORD *)&v49 = *((_BYTE *)v3 + 200) != 0 ? 96LL : 88LL;
    v14 = *a3;
    v30 = *(struct D2D_VECTOR_2F *)((char *)v3 + v49);
    v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 40LL) + 928LL);
    v30.x = v30.x * v31.m12;
    v30.y = v30.y * v31.m11;
    v16 = CVisualSurface::GetCVIForRealizationSize(v3, v15, &v30, &v30, v34);
    v11 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x517u, 0LL);
      goto LABEL_12;
    }
    v18 = v49;
    *(_QWORD *)&v33 = 0LL;
    DWORD2(v49) = 0;
    v50 = 0;
    v51 = 0;
    *(_OWORD *)&v34[1] = *(_OWORD *)&v31.m[1][0];
    v34[3] = v32;
    *(float *)&v19 = *(float *)((char *)v3 + v49) / v30.x;
    *((struct D2D_VECTOR_2F *)&v33 + 1) = v30;
    *(_QWORD *)&v49 = v19;
    *((float *)&v49 + 3) = *(float *)((char *)v3 + v18 + 4) / v30.y;
    MILMatrix3x2::SetProduct(
      (MILMatrix3x2 *)&v35,
      (const struct MILMatrix3x2 *)&v49,
      (const struct MILMatrix3x2 *)&v34[1]);
    *(_OWORD *)&v31.m[1][0] = v35;
    v32 = v36;
  }
  v20 = v34[0];
  if ( v34[0] )
    v21 = (struct CCachedVisualImage *)((char *)v34[0] + *(int *)(*((_QWORD *)v34[0] + 8) + 8LL) + 64);
  else
    v21 = 0LL;
  BrushParametersWorker = CBitmapResourceRenderStrategy::GetBrushParametersWorker(
                            a2,
                            v21,
                            (struct CContent::LayoutData *)v31.m[1],
                            v5,
                            (struct CBrushDrawListGenerator *)a3);
  v11 = BrushParametersWorker;
  if ( BrushParametersWorker < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, BrushParametersWorker, 0x539u, 0LL);
  }
  else if ( LODWORD(a3[9].width) )
  {
    if ( CCachedVisualImage::IsSameVisualTree(v20, *(const struct CVisualTree **)(*(_QWORD *)a3 + 7928LL)) )
    {
      LODWORD(a3[2].width) |= 0x100u;
    }
    else if ( !v7 || v8 )
    {
      LODWORD(a3[2].width) |= 0x40u;
    }
  }
LABEL_12:
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)v34);
  return v11;
}
