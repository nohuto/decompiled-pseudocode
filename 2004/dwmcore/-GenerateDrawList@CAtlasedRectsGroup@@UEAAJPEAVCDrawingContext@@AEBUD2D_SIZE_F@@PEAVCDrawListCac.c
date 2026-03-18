/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180049390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18003FED8 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180049148 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800492E0 (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x18004C524 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18004C5B8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180056938 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18005811C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180058404 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C1454 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800C1488 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800C14F0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C1710 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800C1838 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800C18D8 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7D50 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CFD54 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E5E34 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
  bool v10; // r9
  int CpuClip; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct IBitmapResource *v14; // rdx
  struct D2D_SIZE_U v15; // rbx
  struct CCommonRenderingEffect *v16; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v18; // r10
  int v19; // edx
  struct CRenderingEffect *v20; // rdi
  char v21; // si
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // r15
  unsigned __int8 *v27; // rax
  __int64 v28; // r8
  _DWORD *v29; // rcx
  int v30; // xmm1_4
  int v31; // eax
  int v32; // xmm1_4
  __m128 v33; // xmm6
  float *v34; // rdi
  __m128 v35; // xmm6
  char v36; // r10
  int v37; // xmm0_4
  int v38; // xmm1_4
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v44; // rsi
  __int64 (__fastcall ***v45)(_QWORD, __int64 *); // rcx
  __int64 v46; // rdi
  __int64 (__fastcall *v47)(__int64, struct D2D_SIZE_U *); // r14
  int v48; // ebx
  __int64 v49; // rax
  bool v50; // zf
  char v51; // [rsp+38h] [rbp-D0h]
  _QWORD v52[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v53; // [rsp+58h] [rbp-B0h] BYREF
  char v54; // [rsp+5Ah] [rbp-AEh]
  _BYTE v55[28]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+84h] [rbp-84h]
  int v57; // [rsp+8Ch] [rbp-7Ch]
  char v58; // [rsp+90h] [rbp-78h]
  __int128 v59; // [rsp+98h] [rbp-70h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B8h] [rbp-50h]
  unsigned __int8 *v62; // [rsp+C0h] [rbp-48h]
  _QWORD v63[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+DCh] [rbp-2Ch]
  __int128 v66; // [rsp+E0h] [rbp-28h]
  __m128 v67; // [rsp+F0h] [rbp-18h]
  __int128 v68; // [rsp+100h] [rbp-8h] BYREF
  __int128 v69; // [rsp+110h] [rbp+8h]
  __int128 v70; // [rsp+120h] [rbp+18h]
  CDrawListCache *v71; // [rsp+130h] [rbp+28h]
  __int128 v72; // [rsp+138h] [rbp+30h] BYREF
  __int64 v73; // [rsp+148h] [rbp+40h] BYREF
  char v74; // [rsp+150h] [rbp+48h]
  char v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h] BYREF
  struct D2D_SIZE_U v77; // [rsp+170h] [rbp+68h] BYREF
  _OWORD v78[2]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v79; // [rsp+1A8h] [rbp+A0h]
  __int64 v80; // [rsp+1B0h] [rbp+A8h]
  __int64 *v81; // [rsp+1B8h] [rbp+B0h]
  int v82; // [rsp+1C8h] [rbp+C0h]
  _BYTE v83[2304]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v84; // [rsp+AD8h] [rbp+9D0h] BYREF
  int v85; // [rsp+AE0h] [rbp+9D8h]
  __int64 v86; // [rsp+AE4h] [rbp+9DCh]
  int v87; // [rsp+AECh] [rbp+9E4h]
  int v88; // [rsp+AF0h] [rbp+9E8h]
  int v89; // [rsp+AF4h] [rbp+9ECh]
  int v90; // [rsp+AF8h] [rbp+9F0h]
  __int128 v91; // [rsp+AFCh] [rbp+9F4h]

  v71 = a4;
  v5 = 0;
  LODWORD(v52[0]) = 0;
  v6 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v83);
  v73 = 0LL;
  v72 = 0LL;
  v74 = 0;
  v75 = 0;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_26;
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2) )
    goto LABEL_3;
  if ( *((_DWORD *)a2 + 70) == 4 )
    goto LABEL_3;
  v44 = *((_QWORD *)this + 8);
  v45 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(*((_QWORD *)a2 + 4)
                                                    + 8LL
                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL));
  v46 = *(int *)(*(_QWORD *)(v44 + 56) + 8LL);
  v47 = **(__int64 (__fastcall ***)(__int64, struct D2D_SIZE_U *))(v44 + v46 + 56);
  v48 = *(_DWORD *)((**v45)(v45, &v76) + 8);
  v49 = v47(v46 + v44 + 56, &v77);
  v5 = 0;
  v50 = v48 == *(_DWORD *)(v49 + 8);
  v8 = 1;
  if ( !v50 )
LABEL_3:
    v8 = 0;
  v51 = v8;
  v59 = 0LL;
  LODWORD(v59) = 2;
  v82 = 0;
  v60 = 0LL;
  CDrawingContext::GetWorldTransform(a2, (struct CMILMatrix *)v78);
  CMILMatrix::Get2DScaleDimensionsWithPerspective(v78, (char *)&v59 + 4, (char *)&v59 + 8, 0LL);
  if ( !v8 )
  {
    CpuClip = CDrawingContext::GetCpuClip(a2, v9, (struct CCpuClip *)&v72);
    v6 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, CpuClip, 0x6Bu, 0LL);
      goto LABEL_26;
    }
  }
  v13 = *((_QWORD *)this + 8);
  *(_QWORD *)&v60 = &v72;
  v56 = 0LL;
  v57 = 0;
  v58 = 0;
  memset(v55, 0, sizeof(v55));
  if ( v13 )
    v14 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v13 + 56) + 8LL) + v13 + 56);
  else
    v14 = 0LL;
  if ( (int)CDrawListBitmap::Initialize((CDrawListBitmap *)v55, v14, a2, v10) < 0 )
  {
LABEL_35:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55[8]);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v55);
    goto LABEL_26;
  }
  v15 = **(struct D2D_SIZE_U **)&CDrawListBitmap::GetSize((CDrawListBitmap *)v55);
  v77 = v15;
  ObjectCache = CThreadContext::GetObjectCache(v16);
  v18 = 0LL;
  v19 = *((_DWORD *)ObjectCache + 1);
  if ( v19 )
  {
    v18 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v18;
    *((_DWORD *)ObjectCache + 1) = v19 - 1;
  }
  if ( v18 || (v18 = DefaultHeap::Alloc(0x78uLL)) != 0LL )
  {
    v54 = 1;
    BYTE2(v52[0]) = 1;
    v53 = SamplerMode::k_ClampClampLinear;
    LOWORD(v52[0]) = SamplerMode::k_ClampClampLinear;
    v69 = 0LL;
    v70 = 0LL;
    DWORD2(v69) = 0;
    v68 = 0LL;
    BYTE8(v70) = 0;
    v20 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(
                                       (__int64)v18,
                                       (CDrawListBitmap *)v55,
                                       (__int64)v52,
                                       (CDrawListBitmap *)&v68,
                                       (__int64)&v53);
    v21 = 1;
  }
  else
  {
    v21 = v52[0];
    v20 = 0LL;
  }
  v52[0] = v20;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v52);
  if ( (v21 & 1) != 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v68 + 8);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v68);
  }
  if ( !v20 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0x7Bu, 0LL);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v52);
    goto LABEL_35;
  }
  CDrawListEntryBuilder::Begin((CDrawListEntryBuilder *)v83, (const struct DrawListEntryBuilderSetupParams *)&v59, v20);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v52);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55[8]);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v55);
  v23 = 0;
  if ( *((_DWORD *)this + 18) )
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * v23);
      v25 = *(_DWORD *)(v24 + 60);
      v26 = *(_QWORD *)(v24 + 72);
      v27 = *(unsigned __int8 **)(v24 + 104);
      v28 = *(_QWORD *)(v24 + 88);
      v76 = v26;
      v62 = v27;
      LODWORD(v52[0]) = v25;
      if ( v25 )
        break;
LABEL_23:
      ++v23;
      v5 = 0;
      if ( v23 >= *((_DWORD *)this + 18) )
        goto LABEL_24;
    }
    v29 = (_DWORD *)(v28 + 8);
    v61 = v28 + 8;
    while ( 1 )
    {
      v30 = *(v29 - 1);
      v31 = *v27;
      *(_DWORD *)&v55[16] = 0;
      DWORD1(v66) = v30;
      v32 = v29[1];
      v33 = (__m128)COERCE_UNSIGNED_INT((float)v31);
      *(_QWORD *)&v55[20] = 0x200000000LL;
      LODWORD(v56) = 0;
      v34 = (float *)(v29 - 2);
      v33.m128_f32[0] = v33.m128_f32[0] / 255.0;
      LODWORD(v66) = *(v29 - 2);
      DWORD2(v66) = *v29;
      HIDWORD(v66) = v32;
      v35 = _mm_shuffle_ps(v33, v33, 0);
      *(_OWORD *)v55 = v66;
      memset_0(&v84, 0, 0x68uLL);
      v91 = _xmm;
      MILMatrix3x2::InferAffineMatrix((__int64)v63, v34, (float *)(v26 + 16LL * v5));
      v36 = v51;
      if ( v51 )
      {
        v84 = v63[0];
        v86 = v63[1];
        v37 = v64;
        v38 = v65;
      }
      else
      {
        *(_QWORD *)((char *)&v68 + 4) = 0LL;
        *(_QWORD *)&v69 = 0LL;
        *(float *)&v68 = 1.0 / (float)(int)v15.width;
        *((float *)&v68 + 3) = 1.0 / (float)(int)v77.height;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v59,
          (const struct D2D1::Matrix3x2F *)v63,
          (const struct D2D1::Matrix3x2F *)&v68);
        v86 = *((_QWORD *)&v59 + 1);
        v37 = v60;
        v38 = DWORD1(v60);
        v84 = v59;
      }
      v85 = 0;
      v87 = 0;
      v88 = v37;
      v89 = v38;
      v78[1] = 0LL;
      v90 = 1065353216;
      v79 = 0LL;
      v80 = 2LL;
      v67 = v35;
      v81 = &v84;
      v78[0] = v35;
      v39 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v83,
              v36,
              (const struct PrimitiveGeometryDesc *)v55,
              (const struct PrimitiveVertexAttributesDesc *)v78,
              0LL);
      v6 = v39;
      if ( v39 < 0 )
        break;
      ++v5;
      v29 = (_DWORD *)(v61 + 16);
      v26 = v76;
      v27 = v62 + 1;
      v61 += 16LL;
      ++v62;
      if ( v5 >= LODWORD(v52[0]) )
        goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xB5u, 0LL);
  }
  else
  {
LABEL_24:
    v41 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v83);
    v6 = v41;
    if ( v41 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xB9u, 0LL);
    else
      CDrawListCache::Update(v71, a2, (struct CDrawListEntryBuilder *)v83);
  }
LABEL_26:
  CShapePtr::Release((CShapePtr *)&v73);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v83);
  return v6;
}
