/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800581B8 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180058280 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180058350 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800C6668 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C683C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800CCFF0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800D361C (--0CCpuClip@@QEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800EC17C (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800ED90C (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GenerateDrawList(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v5; // r12
  unsigned int v7; // edi
  BOOL v8; // eax
  int CpuClip; // eax
  unsigned int v10; // ecx
  struct IBitmapResource *v11; // rdx
  struct D2D_SIZE_U v12; // rbx
  struct CCommonRenderingEffect *v13; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v15; // r10
  int v16; // edx
  struct CRenderingEffect *v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rsi
  unsigned int v20; // r14d
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r12
  unsigned __int8 *v24; // rcx
  __int64 v25; // r12
  float v26; // xmm8_4
  int v27; // eax
  __int128 v28; // xmm0
  __m128 v29; // xmm6
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v35; // rsi
  __int64 (__fastcall ***v36)(_QWORD, _QWORD *); // rcx
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64, struct D2D_SIZE_U *); // r14
  int v39; // ebx
  __int64 v40; // rax
  char v41; // cl
  _QWORD v42[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v43; // [rsp+40h] [rbp-C0h] BYREF
  char v44; // [rsp+42h] [rbp-BEh]
  __m128 v45; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int128 v48; // [rsp+80h] [rbp-80h] BYREF
  __int128 v49; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v50; // [rsp+A0h] [rbp-60h]
  __int128 v51; // [rsp+A8h] [rbp-58h]
  float v52[6]; // [rsp+B8h] [rbp-48h] BYREF
  CDrawListCache *v53; // [rsp+D0h] [rbp-30h]
  __int128 v54; // [rsp+D8h] [rbp-28h] BYREF
  int v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+ECh] [rbp-14h]
  int v57; // [rsp+F4h] [rbp-Ch]
  _BYTE v58[80]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v59[32]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v60[2]; // [rsp+170h] [rbp+70h] BYREF
  struct D2D_SIZE_U v61; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v62[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v63; // [rsp+1B0h] [rbp+B0h]
  __int64 *v64; // [rsp+1B8h] [rbp+B8h]
  int v65; // [rsp+1D0h] [rbp+D0h]
  _BYTE v66[4432]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v67; // [rsp+1330h] [rbp+1230h] BYREF
  int v68; // [rsp+1338h] [rbp+1238h]
  __int64 v69; // [rsp+133Ch] [rbp+123Ch]
  int v70; // [rsp+1344h] [rbp+1244h]
  __int64 v71; // [rsp+1348h] [rbp+1248h]
  int v72; // [rsp+1350h] [rbp+1250h]
  __int128 v73; // [rsp+1354h] [rbp+1254h]

  v53 = a4;
  v5 = 0;
  LODWORD(v42[0]) = 0;
  v7 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v66);
  CCpuClip::CCpuClip((CCpuClip *)v58);
  if ( !*((_QWORD *)this + 9) )
    goto LABEL_22;
  v48 = 0LL;
  v49 = 0LL;
  if ( CDrawingContext::IsWarpFastPathEnabled(a2) && *((_DWORD *)a2 + 77) != 4 )
  {
    v35 = *((_QWORD *)this + 9);
    v36 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*((_QWORD *)a2 + 4)
                                                     + 8LL
                                                     + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL));
    v37 = *(int *)(*(_QWORD *)(v35 + 64) + 8LL);
    v38 = **(__int64 (__fastcall ***)(__int64, struct D2D_SIZE_U *))(v35 + v37 + 64);
    v39 = *(_DWORD *)((**v36)(v36, v60) + 8);
    v40 = v38(v37 + v35 + 64, &v61);
    v41 = BYTE13(v49);
    if ( v39 == *(_DWORD *)(v40 + 8) )
      v41 = 1;
    BYTE13(v49) = v41;
  }
  LODWORD(v48) = 2;
  v8 = *((_DWORD *)a2 + 76) != 0;
  v65 = 0;
  HIDWORD(v48) = v8;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 368), (struct CMILMatrix *)v62);
  CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v62, (float *)&v48 + 1, (float *)&v48 + 2, 0LL);
  CpuClip = CDrawingContext::GetCpuClip(a2, (struct CCpuClip *)v58);
  v7 = CpuClip;
  if ( CpuClip < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, CpuClip, 0x69u, 0LL);
    goto LABEL_22;
  }
  v11 = (struct IBitmapResource *)*((_QWORD *)this + 9);
  *(_QWORD *)&v49 = v58;
  BYTE12(v49) = 1;
  if ( v11 )
    v11 = (struct IBitmapResource *)((char *)v11 + *(int *)(*((_QWORD *)v11 + 8) + 8LL) + 64);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v45, v11);
  if ( !v45.m128_u64[1] )
  {
LABEL_30:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v45.m128_i64[1]);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v45);
    goto LABEL_22;
  }
  v12 = **(struct D2D_SIZE_U **)&CDrawListBitmap::GetSize((CDrawListBitmap *)&v45, v60);
  v61 = v12;
  ObjectCache = CThreadContext::GetObjectCache(v13);
  v15 = 0LL;
  v16 = *((_DWORD *)ObjectCache + 1);
  if ( v16 )
  {
    v15 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v15;
    *((_DWORD *)ObjectCache + 1) = v16 - 1;
  }
  if ( v15 || (v15 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v43 = SamplerMode::k_ClampClampLinear;
    v47 = 0LL;
    v44 = 1;
    BYTE2(v42[0]) = 1;
    LOWORD(v42[0]) = SamplerMode::k_ClampClampLinear;
    v46 = 0LL;
    v17 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(v15, &v45, v42, &v46, &v43);
    v5 = 1;
  }
  else
  {
    v17 = 0LL;
  }
  v42[0] = v17;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v42);
  if ( (v5 & 1) != 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v46 + 8);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v46);
  }
  if ( !v17 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x78u, 0LL);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v42);
    goto LABEL_30;
  }
  CDrawListEntryBuilder::Begin((CDrawListEntryBuilder *)v66, (const struct DrawListEntryBuilderSetupParams *)&v48, v17);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v42);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v45.m128_i64[1]);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v45);
  v19 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v20 = 0;
      v21 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v19);
      v22 = *(_DWORD *)(v21 + 68);
      v23 = *(_QWORD *)(v21 + 96);
      v60[0] = *(_QWORD *)(v21 + 80);
      v24 = *(unsigned __int8 **)(v21 + 112);
      v50 = v24;
      LODWORD(v42[0]) = v22;
      if ( v22 )
        break;
LABEL_19:
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= *((_DWORD *)this + 20) )
        goto LABEL_20;
    }
    v25 = v23 + 8;
    v26 = 1.0 / (float)(int)v61.height;
    while ( 1 )
    {
      v27 = *v24;
      v28 = *(_OWORD *)(v25 - 8);
      v56 = 0x600000000LL;
      v57 = 0;
      v55 = 0;
      v29 = (__m128)COERCE_UNSIGNED_INT((float)v27);
      v51 = v28;
      v29.m128_f32[0] = v29.m128_f32[0] / 255.0;
      v54 = v28;
      memset_0(&v67, 0, 0x68uLL);
      v73 = _xmm;
      MILMatrix3x2::InferAffineMatrix(&v48, v25 - 8, v60[0] + 16LL * v20);
      v52[1] = 0.0;
      v52[2] = 0.0;
      v52[4] = 0.0;
      v52[5] = 0.0;
      v52[0] = 1.0 / (float)(int)v12.width;
      v52[3] = v26;
      MILMatrix3x2::SetProduct(
        (MILMatrix3x2 *)&v46,
        (const struct MILMatrix3x2 *)&v48,
        (const struct MILMatrix3x2 *)v52);
      v68 = 0;
      v70 = 0;
      v69 = *((_QWORD *)&v46 + 1);
      v71 = v47;
      v62[1] = 0LL;
      v72 = 1065353216;
      v67 = v46;
      v45 = _mm_shuffle_ps(v29, v29, 0);
      v63 = 2LL;
      v62[0] = v45;
      v64 = &v67;
      v30 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v66,
              (const struct PrimitiveGeometryDesc *)&v54,
              (const struct PrimitiveVertexAttributesDesc *)v62,
              0LL);
      v7 = v30;
      if ( v30 < 0 )
        break;
      ++v20;
      v24 = v50 + 1;
      v25 += 16LL;
      ++v50;
      if ( v20 >= LODWORD(v42[0]) )
        goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xADu, 0LL);
  }
  else
  {
LABEL_20:
    v32 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v66);
    v7 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xB1u, 0LL);
    else
      CDrawListCache::Update(v53, a2, (struct CDrawListEntryBuilder *)v66);
  }
LABEL_22:
  CShapePtr::Release((CShapePtr *)v59);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v66);
  return v7;
}
