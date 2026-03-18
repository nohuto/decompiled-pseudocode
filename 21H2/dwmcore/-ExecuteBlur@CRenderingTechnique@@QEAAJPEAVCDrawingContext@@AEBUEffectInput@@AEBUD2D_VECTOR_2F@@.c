/*
 * XREFs of ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180053510 (-RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x18003183C (-Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTI.c)
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800357A4 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0?$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGraph@@@Z @ 0x180053B78 (--0-$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGr.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXPEAVCDrawingContext@@AEBUEffectInput@@1W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU5@@Z @ 0x180053BB4 (-DeterminePreScale@CBlurRenderingGraph@@SAXPEAVCDrawingContext@@AEBUEffectInput@@1W4D2D1_GAUSSIA.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180058738 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x180058B9C (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x180058C84 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18008D714 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0B40 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1800DE490 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     ?HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800DE894 (-HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::ExecuteBlur(
        CRenderingTechnique *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        const struct D2D_VECTOR_2F *a4,
        struct EffectInput *a5)
{
  unsigned int v5; // edi
  const struct CBackdropVisualImage *BackdropVisualImage; // r14
  CVisual *v11; // rax
  FLOAT v12; // xmm1_4
  int v13; // eax
  struct CDrawingContext *v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rdx
  CBlurRenderingGraph *v17; // rsi
  const struct RenderTargetInfo *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // ebx
  struct D2D_MATRIX_3X2_F *v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // xmm1_8
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  D2D_VECTOR_2F v36; // [rsp+38h] [rbp-D0h] BYREF
  CBlurRenderingGraph *v37; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_VECTOR_2F v38; // [rsp+48h] [rbp-C0h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v39[2]; // [rsp+50h] [rbp-B8h] BYREF
  CRenderingTechnique *v40; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v41[8]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v42[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v43; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v44[36]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v45[36]; // [rsp+ACh] [rbp-5Ch] BYREF
  _BYTE v46[40]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v47; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v48; // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v5 = 0;
  BackdropVisualImage = 0LL;
  v40 = this;
  if ( *((_BYTE *)a3 + 101) && !*((_BYTE *)a3 + 103) )
  {
    v11 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    BackdropVisualImage = CVisual::GetBackdropVisualImage(v11, *((const struct CVisualTreePath **)a2 + 994));
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, D2D1_GAUSSIANBLUR_OPTIMIZATION *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, _BYTE *))(***((_QWORD ***)this + 1) + 48LL))(
    **((_QWORD **)this + 1),
    *(unsigned int *)(*((_QWORD *)this + 1) + 16LL),
    &v39[1],
    v39,
    v41);
  v12 = *(float *)&v39[1] * a4->y;
  v36.x = *(float *)&v39[1] * a4->x;
  v36.y = v12;
  v13 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v15 = v13;
  if ( v13 >= 0 )
  {
    CBlurRenderingGraph::DeterminePreScale(v14, a3, a5, v39[0], &v36, &v38);
    v16 = *((_QWORD *)this + 32);
    v36.x = v36.x * v38.x;
    v36.y = v36.y * v38.y;
    wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>(
      &v37,
      v16);
    v17 = v37;
    if ( v37 )
    {
      if ( CBlurRenderingGraph::HasMatchingParameters(v37, &v36, v39[0]) )
      {
        if ( BackdropVisualImage )
        {
          v18 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
          if ( CBlurredBackdropCache::LookupCachedBlur(
                 (CBlurRenderingGraph *)((char *)v17 + 216),
                 BackdropVisualImage,
                 v18,
                 a5) )
          {
            v33 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v40, &byte_18032C47F);
            v34 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v38, "BVI-UsingCachedBlur");
            CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v34, v33);
LABEL_17:
            wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)&v37);
            CDrawingContext::PopTransformInternal(a2, 1);
            return v5;
          }
          v19 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v36, &byte_18032C47F);
          v20 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v42, "BVI-CouldNotFindCachedBlur");
          CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v20, v19);
        }
        goto LABEL_10;
      }
      if ( v17 )
        (*(void (**)(void))(*(_QWORD *)v17 + 8LL))();
    }
    v32 = *((_QWORD *)a2 + 5);
    v37 = 0LL;
    v21 = CBlurRenderingGraph::Create((enum D3D_FEATURE_LEVEL)*(_DWORD *)(v32 + 584), &v36, v39[0], &v37);
    if ( v21 < 0 )
    {
      v35 = 791LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
        (const char *)(unsigned int)v21);
      v5 = v21;
      goto LABEL_17;
    }
    v17 = v37;
LABEL_10:
    *(struct D2D_VECTOR_2F *)((char *)v17 + 1572) = v38;
    v21 = CExternalEffectGraph::Render(v17, a2, a3, a5);
    if ( v21 >= 0 )
    {
      CDrawListBitmap::GetSize(a5, &v37);
      D2DMatrixHelper::ComputeRectangleTransform(
        (const struct EffectInput *)((char *)a3 + 84),
        (const struct D2D_RECT_F *)((char *)a5 + 84),
        &v43,
        v22);
      CDrawListBitmap::GetSize(a3, &v38);
      *(_QWORD *)((char *)&v47 + 4) = 0LL;
      *(float *)&v47 = (float)SLODWORD(v38.x);
      *((float *)&v47 + 3) = (float)SLODWORD(v38.y);
      *(float *)&v48 = 0.0 - (float)((float)SLODWORD(v38.x) * 0.0);
      *((float *)&v48 + 1) = 0.0 - (float)((float)SLODWORD(v38.y) * 0.0);
      v23 = Matrix3x3::operator*((char *)a3 + 48, v44, &v47);
      v24 = Matrix3x3::operator*(v23, v45, &v43);
      *(_QWORD *)((char *)&v47 + 4) = 0LL;
      *(float *)&v47 = 1.0 / (float)(int)v37;
      *((float *)&v47 + 3) = 1.0 / (float)SHIDWORD(v37);
      *(float *)&v48 = 0.0 - (float)(*(float *)&v47 * 0.0);
      *((float *)&v48 + 1) = 0.0 - (float)(*((float *)&v47 + 3) * 0.0);
      v25 = Matrix3x3::operator*(v24, v46, &v47);
      *((_OWORD *)a5 + 3) = *(_OWORD *)v25;
      *((_OWORD *)a5 + 4) = *(_OWORD *)(v25 + 16);
      *((_DWORD *)a5 + 20) = *(_DWORD *)(v25 + 32);
      if ( BackdropVisualImage )
      {
        v26 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
        v27 = *(_QWORD *)(v26 + 16);
        v47 = *(_OWORD *)v26;
        v48 = v27;
        if ( CCommonRegistryData::EnableBackdropBlurCaching )
        {
          if ( CBackdropVisualImage::TranslateRenderTargetInfo(BackdropVisualImage, (struct RenderTargetInfo *)&v47) )
          {
            CBlurredBackdropCache::UpdateCachedBlur(
              (CBlurRenderingGraph *)((char *)v17 + 216),
              BackdropVisualImage,
              (const struct RenderTargetInfo *)&v47,
              a5);
            v28 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v42, &byte_18032C47F);
            v29 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v38, "BVI-CachedNewBlur");
            CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v29, v28);
            ++dword_1803D31FC;
          }
        }
      }
      v37 = 0LL;
      v30 = *((_QWORD *)v40 + 32);
      *((_QWORD *)v40 + 32) = v17;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      goto LABEL_17;
    }
    v35 = 799LL;
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E4,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
    (const char *)(unsigned int)v13);
  return v15;
}
