/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180064AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x18005E7F0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800630A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180063658 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800642F0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800645D8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18006500C (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800650B4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18006517C (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009D34C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800B64C4 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B666C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800B66A0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800B6708 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B6928 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800B6A50 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800B6D58 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CED94 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E6818 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GenerateDrawList(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  char v8; // bl
  struct CMILMatrix *v9; // rdx
  int CpuClip; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  struct IBitmapResource *v13; // rdx
  struct D2D_SIZE_U v14; // rbx
  struct CCommonRenderingEffect *v15; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v17; // r10
  int v18; // edx
  struct CRenderingEffect *v19; // rdi
  char v20; // si
  unsigned int v21; // ecx
  unsigned int v22; // esi
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // r15
  unsigned __int8 *v26; // rax
  __int64 v27; // r8
  _DWORD *v28; // rcx
  int v29; // xmm1_4
  int v30; // eax
  int v31; // xmm1_4
  __m128 v32; // xmm6
  _DWORD *v33; // rdi
  __m128 v34; // xmm6
  bool v35; // r10
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v43; // rsi
  __int64 (__fastcall ***v44)(_QWORD, _QWORD *); // rcx
  __int64 v45; // rdi
  __int64 (__fastcall *v46)(__int64, struct D2D_SIZE_U *); // r14
  int v47; // ebx
  __int64 v48; // rax
  bool v49; // zf
  char v50; // [rsp+38h] [rbp-D0h]
  _QWORD v51[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v52; // [rsp+58h] [rbp-B0h] BYREF
  char v53; // [rsp+5Ah] [rbp-AEh]
  _BYTE v54[28]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+84h] [rbp-84h]
  int v56; // [rsp+8Ch] [rbp-7Ch]
  char v57; // [rsp+90h] [rbp-78h]
  __int128 v58; // [rsp+98h] [rbp-70h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-60h]
  __int64 v60; // [rsp+B8h] [rbp-50h]
  unsigned __int8 *v61; // [rsp+C0h] [rbp-48h]
  _QWORD v62[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v63; // [rsp+D8h] [rbp-30h]
  int v64; // [rsp+DCh] [rbp-2Ch]
  __int128 v65; // [rsp+E0h] [rbp-28h]
  __m128 v66; // [rsp+F0h] [rbp-18h]
  __int128 v67; // [rsp+100h] [rbp-8h] BYREF
  __int128 v68; // [rsp+110h] [rbp+8h]
  __int128 v69; // [rsp+120h] [rbp+18h]
  CDrawListCache *v70; // [rsp+130h] [rbp+28h]
  __int128 v71; // [rsp+138h] [rbp+30h] BYREF
  __int64 v72; // [rsp+148h] [rbp+40h] BYREF
  char v73; // [rsp+150h] [rbp+48h]
  char v74; // [rsp+158h] [rbp+50h]
  _QWORD v75[2]; // [rsp+160h] [rbp+58h] BYREF
  struct D2D_SIZE_U v76; // [rsp+170h] [rbp+68h] BYREF
  _OWORD v77[2]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v78; // [rsp+1A8h] [rbp+A0h]
  __int64 v79; // [rsp+1B0h] [rbp+A8h]
  __int64 *v80; // [rsp+1B8h] [rbp+B0h]
  int v81; // [rsp+1C8h] [rbp+C0h]
  Mesh::MeshGraph *v82[288]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v83; // [rsp+AD8h] [rbp+9D0h] BYREF
  int v84; // [rsp+AE0h] [rbp+9D8h]
  __int64 v85; // [rsp+AE4h] [rbp+9DCh]
  int v86; // [rsp+AECh] [rbp+9E4h]
  int v87; // [rsp+AF0h] [rbp+9E8h]
  int v88; // [rsp+AF4h] [rbp+9ECh]
  int v89; // [rsp+AF8h] [rbp+9F0h]
  __int128 v90; // [rsp+AFCh] [rbp+9F4h]

  v70 = a4;
  v5 = 0;
  LODWORD(v51[0]) = 0;
  v6 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v82);
  v72 = 0LL;
  v71 = 0LL;
  v73 = 0;
  v74 = 0;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_26;
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2) )
    goto LABEL_3;
  if ( *((_DWORD *)a2 + 70) == 4 )
    goto LABEL_3;
  v43 = *((_QWORD *)this + 8);
  v44 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*((_QWORD *)a2 + 4)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL));
  v45 = *(int *)(*(_QWORD *)(v43 + 56) + 8LL);
  v46 = **(__int64 (__fastcall ***)(__int64, struct D2D_SIZE_U *))(v43 + v45 + 56);
  v47 = *(_DWORD *)((**v44)(v44, v75) + 8);
  v48 = v46(v45 + v43 + 56, &v76);
  v5 = 0;
  v49 = v47 == *(_DWORD *)(v48 + 8);
  v8 = 1;
  if ( !v49 )
LABEL_3:
    v8 = 0;
  v50 = v8;
  v58 = 0LL;
  LODWORD(v58) = 2;
  v81 = 0;
  v59 = 0LL;
  CDrawingContext::GetWorldTransform(a2, (struct CMILMatrix *)v77);
  CMILMatrix::Get2DScaleDimensionsWithPerspective(v77, (char *)&v58 + 4, (char *)&v58 + 8, 0LL);
  if ( !v8 )
  {
    CpuClip = CDrawingContext::GetCpuClip(a2, v9, (struct CCpuClip *)&v71);
    v6 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, CpuClip, 0x6Bu, 0LL);
      goto LABEL_26;
    }
  }
  v12 = *((_QWORD *)this + 8);
  *(_QWORD *)&v59 = &v71;
  v55 = 0LL;
  v56 = 0;
  v57 = 0;
  memset(v54, 0, sizeof(v54));
  if ( v12 )
    v13 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v12 + 56) + 8LL) + v12 + 56);
  else
    v13 = 0LL;
  if ( (int)CDrawListBitmap::Initialize((CDrawListBitmap *)v54, v13, a2) < 0 )
  {
LABEL_35:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54[8]);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v54);
    goto LABEL_26;
  }
  v14 = **(struct D2D_SIZE_U **)&CDrawListBitmap::GetSize((CDrawListBitmap *)v54, v75);
  v76 = v14;
  ObjectCache = CThreadContext::GetObjectCache(v15);
  v17 = 0LL;
  v18 = *((_DWORD *)ObjectCache + 1);
  if ( v18 )
  {
    v17 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v17;
    *((_DWORD *)ObjectCache + 1) = v18 - 1;
  }
  if ( v17 || (v17 = DefaultHeap::Alloc(0x78uLL)) != 0LL )
  {
    v53 = 1;
    BYTE2(v51[0]) = 1;
    v52 = SamplerMode::k_ClampClampLinear;
    LOWORD(v51[0]) = SamplerMode::k_ClampClampLinear;
    v68 = 0LL;
    v69 = 0LL;
    DWORD2(v68) = 0;
    v67 = 0LL;
    BYTE8(v69) = 0;
    v19 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(v17, v54, v51, &v67, &v52);
    v20 = 1;
  }
  else
  {
    v20 = v51[0];
    v19 = 0LL;
  }
  v51[0] = v19;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v51);
  if ( (v20 & 1) != 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v67 + 8);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v67);
  }
  if ( !v19 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0x7Bu, 0LL);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v51);
    goto LABEL_35;
  }
  CDrawListEntryBuilder::Begin((CDrawListEntryBuilder *)v82, (const struct DrawListEntryBuilderSetupParams *)&v58, v19);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v51);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54[8]);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v54);
  v22 = 0;
  if ( *((_DWORD *)this + 18) )
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * v22);
      v24 = *(_DWORD *)(v23 + 60);
      v25 = *(_QWORD *)(v23 + 72);
      v26 = *(unsigned __int8 **)(v23 + 104);
      v27 = *(_QWORD *)(v23 + 88);
      v75[0] = v25;
      v61 = v26;
      LODWORD(v51[0]) = v24;
      if ( v24 )
        break;
LABEL_23:
      ++v22;
      v5 = 0;
      if ( v22 >= *((_DWORD *)this + 18) )
        goto LABEL_24;
    }
    v28 = (_DWORD *)(v27 + 8);
    v60 = v27 + 8;
    while ( 1 )
    {
      v29 = *(v28 - 1);
      v30 = *v26;
      *(_DWORD *)&v54[16] = 0;
      DWORD1(v65) = v29;
      v31 = v28[1];
      v32 = (__m128)COERCE_UNSIGNED_INT((float)v30);
      *(_QWORD *)&v54[20] = 0x200000000LL;
      LODWORD(v55) = 0;
      v33 = v28 - 2;
      v32.m128_f32[0] = v32.m128_f32[0] / 255.0;
      LODWORD(v65) = *(v28 - 2);
      DWORD2(v65) = *v28;
      HIDWORD(v65) = v31;
      v34 = _mm_shuffle_ps(v32, v32, 0);
      *(_OWORD *)v54 = v65;
      memset_0(&v83, 0, 0x68uLL);
      v90 = _xmm;
      MILMatrix3x2::InferAffineMatrix(v62, v33, v25 + 16LL * v5);
      v35 = v50;
      if ( v50 )
      {
        v83 = v62[0];
        v85 = v62[1];
        v36 = v63;
        v37 = v64;
      }
      else
      {
        *(_QWORD *)((char *)&v67 + 4) = 0LL;
        *(_QWORD *)&v68 = 0LL;
        *(float *)&v67 = 1.0 / (float)(int)v14.width;
        *((float *)&v67 + 3) = 1.0 / (float)(int)v76.height;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v58,
          (const struct D2D1::Matrix3x2F *)v62,
          (const struct D2D1::Matrix3x2F *)&v67);
        v85 = *((_QWORD *)&v58 + 1);
        v36 = v59;
        v37 = DWORD1(v59);
        v83 = v58;
      }
      v84 = 0;
      v86 = 0;
      v87 = v36;
      v88 = v37;
      v77[1] = 0LL;
      v89 = 1065353216;
      v78 = 0LL;
      v79 = 2LL;
      v66 = v34;
      v80 = &v83;
      v77[0] = v34;
      v38 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v82,
              v35,
              (const struct PrimitiveGeometryDesc *)v54,
              (const struct PrimitiveVertexAttributesDesc *)v77,
              0LL);
      v6 = v38;
      if ( v38 < 0 )
        break;
      ++v5;
      v28 = (_DWORD *)(v60 + 16);
      v25 = v75[0];
      v26 = v61 + 1;
      v60 += 16LL;
      ++v61;
      if ( v5 >= LODWORD(v51[0]) )
        goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xB5u, 0LL);
  }
  else
  {
LABEL_24:
    v40 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v82);
    v6 = v40;
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xB9u, 0LL);
    else
      CDrawListCache::Update(v70, a2, (struct CDrawListEntryBuilder *)v82);
  }
LABEL_26:
  CShapePtr::Release((CShapePtr *)&v72);
  CDrawListEntryBuilder::~CDrawListEntryBuilder(v82);
  return v6;
}
