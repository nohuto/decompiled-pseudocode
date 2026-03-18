/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000B810 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?FromD2D1ExtendMode@ExtendMode@@YA?AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z @ 0x18000BE6C (-FromD2D1ExtendMode@ExtendMode@@YA-AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x18000C284 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x18000C2A8 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800636A8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800AD0B8 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800AF97C (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B0B20 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800C6668 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800C67E8 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C683C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800CCFF0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800D3284 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
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
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1801E4B0C (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x1802ABA58 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        struct CDrawListCache *a3)
{
  int v6; // eax
  int v7; // r15d
  bool v8; // zf
  int CpuClip; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // edx
  int v14; // r12d
  __int64 v15; // rdi
  bool v16; // cf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // r13
  __int64 v21; // rcx
  char v22; // bl
  struct CCommonRenderingEffect *v23; // rcx
  struct CObjectCache *ObjectCache; // rdx
  _QWORD *v25; // rax
  int v26; // r8d
  struct CRenderingEffect *v27; // rbx
  unsigned int v28; // ecx
  __int128 *v29; // rbx
  int v30; // eax
  const struct PrimitiveVertexAttributesDesc *v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // xmm1_4
  int v34; // xmm1_4
  int v35; // xmm1_4
  int v36; // eax
  __int64 (__fastcall ***v38)(_QWORD, _QWORD *); // rcx
  unsigned int v39; // ebx
  int v40; // edi
  __int128 *v41; // r10
  int v42; // eax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rcx
  int v45; // xmm1_4
  int v46; // xmm1_4
  int v47; // r9d
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  char v49; // [rsp+30h] [rbp-D0h]
  char v50; // [rsp+31h] [rbp-CFh]
  char v51; // [rsp+32h] [rbp-CEh]
  char v52; // [rsp+33h] [rbp-CDh]
  _BYTE v53[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v54[16]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-A0h]
  struct CRenderingEffect *v56; // [rsp+68h] [rbp-98h] BYREF
  __int128 v57; // [rsp+70h] [rbp-90h] BYREF
  __int128 v58; // [rsp+80h] [rbp-80h]
  __int128 v59; // [rsp+90h] [rbp-70h] BYREF
  char v60; // [rsp+A0h] [rbp-60h]
  __int128 v61; // [rsp+A8h] [rbp-58h] BYREF
  char v62; // [rsp+B8h] [rbp-48h]
  __int128 v63; // [rsp+C0h] [rbp-40h]
  CDrawListCache *v64; // [rsp+D0h] [rbp-30h]
  __int128 v65; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v66; // [rsp+E8h] [rbp-18h]
  _BYTE v67[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 *v68; // [rsp+100h] [rbp+0h]
  _QWORD v69[10]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v70[2]; // [rsp+170h] [rbp+70h] BYREF
  char v71; // [rsp+184h] [rbp+84h]
  _BYTE v72[64]; // [rsp+190h] [rbp+90h] BYREF
  int v73; // [rsp+1D0h] [rbp+D0h]
  __int128 v74; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v75; // [rsp+1F0h] [rbp+F0h]
  __int64 v76; // [rsp+200h] [rbp+100h]
  _DWORD *v77; // [rsp+208h] [rbp+108h]
  _QWORD v78[2]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v79; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v80[4432]; // [rsp+250h] [rbp+150h] BYREF
  _DWORD v81[9]; // [rsp+13A0h] [rbp+12A0h] BYREF
  __int128 v82; // [rsp+13C4h] [rbp+12C4h]
  int v83; // [rsp+13D4h] [rbp+12D4h]
  int v84; // [rsp+13D8h] [rbp+12D8h]
  int v85; // [rsp+13DCh] [rbp+12DCh]
  int v86; // [rsp+13E0h] [rbp+12E0h]
  int v87; // [rsp+13E4h] [rbp+12E4h]
  int v88; // [rsp+13E8h] [rbp+12E8h]
  int v89; // [rsp+13ECh] [rbp+12ECh]
  int v90; // [rsp+13F0h] [rbp+12F0h]
  int v91; // [rsp+13F4h] [rbp+12F4h]
  __int128 v92; // [rsp+13F8h] [rbp+12F8h]

  v64 = a3;
  v57 = 0LL;
  v58 = 0LL;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v80);
  CCpuClip::CCpuClip((CCpuClip *)v69);
  v73 = 0;
  ++dword_1803D3220;
  CDrawListCache::Invalidate(a3);
  if ( CDrawingContext::IsWarpFastPathEnabled(a2) && CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(this) )
  {
    v8 = *((_DWORD *)a2 + 77) == 4;
    BYTE13(v58) = 1;
    if ( !v8 )
    {
      v38 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*((_QWORD *)a2 + 4)
                                                       + 8LL
                                                       + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL));
      v39 = 0;
      v40 = *(_DWORD *)((**v38)(v38, v78) + 8);
      if ( !*((_DWORD *)this + 8) )
        goto LABEL_2;
      while ( *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(*((_QWORD *)this + 10) + 24LL * v39, v78) + 8) == v40 )
      {
        if ( ++v39 >= *((_DWORD *)this + 8) )
          goto LABEL_2;
      }
    }
    BYTE13(v58) = 0;
  }
LABEL_2:
  v6 = *((_DWORD *)a2 + 75);
  v7 = 0;
  if ( v6 == 1 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  if ( v6 <= 1 )
    goto LABEL_4;
  if ( v6 <= 3 )
  {
    v7 = 2;
  }
  else
  {
    if ( v6 == 4 )
    {
LABEL_62:
      v7 = 3;
      goto LABEL_4;
    }
    if ( v6 != 5 )
    {
      if ( v6 != 6 )
        goto LABEL_4;
      goto LABEL_62;
    }
    v7 = 4;
  }
LABEL_4:
  v8 = *((_DWORD *)a2 + 76) == 0;
  LODWORD(v57) = 2;
  HIDWORD(v57) = !v8;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 368), (struct CMILMatrix *)v72);
  CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v72, (float *)&v57 + 1, (float *)&v57 + 2);
  CpuClip = CDrawingContext::GetCpuClip(a2, (struct CCpuClip *)v69);
  v11 = CpuClip;
  if ( CpuClip < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, CpuClip, 0x13Bu, 0LL);
    goto LABEL_43;
  }
  v12 = *((_QWORD *)this + 2);
  v13 = 0;
  *(_QWORD *)&v58 = v69;
  BYTE12(v58) = 1;
  v55 = 0;
  if ( !*(_DWORD *)(v12 + 8) )
  {
LABEL_42:
    CDrawListCache::Update(v64, a2, (struct CDrawListEntryBuilder *)v80);
    goto LABEL_43;
  }
  v14 = DWORD2(v58);
  while ( 1 )
  {
    v15 = *(_QWORD *)v12 + 144LL * v13;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v67, v13);
    if ( (*(_BYTE *)(v15 + 4) & 0x20) == 0 )
      break;
    if ( v71 )
    {
      CShapePtr::Release((CShapePtr *)v70);
      v71 = 0;
    }
    CMILMatrix::CMILMatrix((CMILMatrix *)&v74, (const struct D2D_MATRIX_3X2_F *)(v68 + 1));
    v79 = *v41;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v81, (const struct MilRectF *)&v79);
    v42 = CCpuClip::AddPrimitiveClip((CCpuClip *)v69, (const struct CShape *)v81, (const struct CMILMatrix *)&v74);
    v11 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x153u, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v81);
      goto LABEL_43;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v81);
LABEL_41:
    v12 = *((_QWORD *)this + 2);
    v13 = v55 + 1;
    v55 = v13;
    if ( v13 >= *(_DWORD *)(v12 + 8) )
      goto LABEL_42;
  }
  if ( (v69[0] || v70[0]) && !HIDWORD(v57) )
  {
    if ( !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)v69) || !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v72) )
    {
      BYTE12(v58) = 1;
      goto LABEL_11;
    }
    v14 |= 0x20u;
    DWORD2(v58) = v14;
  }
  BYTE12(v58) = 0;
LABEL_11:
  v16 = *(_DWORD *)v15 == 0;
  v62 = 0;
  v61 = 0LL;
  v60 = 0;
  v59 = 0LL;
  if ( !v16 )
  {
    v17 = *(unsigned int *)(v15 + 40);
    if ( (unsigned int)v17 < *((_DWORD *)this + 8) )
      CDrawListBitmap::operator=(&v61, *((_QWORD *)this + 10) + 24 * v17);
    v18 = *(unsigned int *)(v15 + 56);
    if ( (unsigned int)v18 < *((_DWORD *)this + 12) )
      CDrawListBitmap::operator=(&v59, *((_QWORD *)this + 11) + 24 * v18);
  }
  if ( (*(_BYTE *)(v15 + 4) & 0x10) != 0 )
  {
    v14 |= 1u;
    DWORD2(v58) = v14;
  }
  v52 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v15 + 52));
  v51 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v15 + 48));
  v19 = 0LL;
  if ( v7 )
    v19 = *(unsigned int *)(v15 + 44);
  v20 = InterpolationMode::FromD2D1InterpolationMode(v19);
  v50 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v15 + 68));
  v49 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v15 + 64));
  if ( v7 )
    v21 = *(unsigned int *)(v15 + 60);
  else
    v21 = 0LL;
  v22 = InterpolationMode::FromD2D1InterpolationMode(v21);
  ObjectCache = CThreadContext::GetObjectCache(v23);
  v25 = 0LL;
  v26 = *((_DWORD *)ObjectCache + 1);
  if ( v26 )
  {
    v25 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v25;
    *((_DWORD *)ObjectCache + 1) = v26 - 1;
  }
  if ( v25 || (v25 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v53[1] = v49;
    v53[2] = v50;
    v54[1] = v51;
    v54[2] = v52;
    v53[0] = v22;
    v54[0] = v20;
    v27 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(v25, &v61, v54, &v59, v53);
  }
  else
  {
    v27 = 0LL;
  }
  v78[0] = v27;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v78);
  v78[0] = 0LL;
  v56 = v27;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v78);
  if ( v27 )
  {
    CDrawListEntryBuilder::Begin(
      (CDrawListEntryBuilder *)v80,
      (const struct DrawListEntryBuilderSetupParams *)&v57,
      v27);
    do
    {
      v29 = v68;
      v66 = 0LL;
      v65 = 0LL;
      v65 = *v68;
      LODWORD(v66) = *((_DWORD *)v68 + 11);
      v30 = *(_DWORD *)(v15 + 4);
      v76 = 0LL;
      v77 = 0LL;
      BYTE8(v66) = ~(_BYTE)v30 & 2 | ~(4 * v30) & 4;
      v74 = 0LL;
      v75 = 0LL;
      memset_0(v81, 0, 0x68uLL);
      v31 = 0LL;
      if ( *(_DWORD *)v15 )
      {
        v32 = 7;
        HIDWORD(v63) = *((_DWORD *)v29 + 15);
        *(float *)&v33 = *((float *)&v63 + 3) * *((float *)v29 + 13);
        *(float *)&v63 = *((float *)&v63 + 3) * *((float *)v29 + 12);
        *(_QWORD *)((char *)&v63 + 4) = __PAIR64__(*((float *)&v63 + 3) * *((float *)v29 + 14), v33);
        v74 = v63;
        if ( *((_DWORD *)v29 + 36) < 7u )
          v32 = *((_DWORD *)v29 + 36);
        if ( v32 < *(_DWORD *)(v15 + 12) )
        {
          v44 = *(_DWORD *)(v15 + 8) + v32;
          if ( v44 >= *((_QWORD *)this + 8) )
          {
            gsl::details::terminate((gsl::details *)v44);
            __debugbreak();
          }
          *(_QWORD *)&v75 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v44);
        }
        if ( *((_QWORD *)&v61 + 1) )
        {
          v81[0] = *((_DWORD *)v29 + 16);
          v34 = *((_DWORD *)v29 + 17);
          v81[2] = 0;
          v81[1] = v34;
          v81[3] = *((_DWORD *)v29 + 18);
          v35 = *((_DWORD *)v29 + 19);
          v81[5] = 0;
          v81[4] = v35;
          v81[6] = *((_DWORD *)v29 + 20);
          v81[7] = *((_DWORD *)v29 + 21);
          v81[8] = 1065353216;
          v82 = *(__int128 *)((char *)v29 + 88);
        }
        if ( *((_QWORD *)&v59 + 1) )
        {
          v83 = *((_DWORD *)v29 + 26);
          v45 = *((_DWORD *)v29 + 27);
          v85 = 0;
          v84 = v45;
          v86 = *((_DWORD *)v29 + 28);
          v46 = *((_DWORD *)v29 + 29);
          v88 = 0;
          v87 = v46;
          v89 = *((_DWORD *)v29 + 30);
          v90 = *((_DWORD *)v29 + 31);
          v91 = 1065353216;
          v92 = v29[8];
        }
        v76 = 2LL;
        v77 = v81;
        v31 = (const struct PrimitiveVertexAttributesDesc *)&v74;
      }
      v36 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v80,
              (const struct PrimitiveGeometryDesc *)&v65,
              v31,
              (const struct D2D_MATRIX_3X2_F *)(v29 + 1));
      v11 = v36;
      if ( v36 < 0 )
      {
        v48 = 469;
        goto LABEL_77;
      }
    }
    while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v67) );
    v36 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v80);
    v11 = v36;
    if ( v36 >= 0 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v59 + 8);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v59);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v61 + 8);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v61);
      goto LABEL_41;
    }
    v48 = 473;
LABEL_77:
    v47 = v36;
  }
  else
  {
    v11 = -2147024882;
    v47 = -2147024882;
    v48 = 412;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v47, v48, 0LL);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v59 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v59);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v61 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v61);
LABEL_43:
  CShapePtr::Release((CShapePtr *)v70);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v80);
  return v11;
}
