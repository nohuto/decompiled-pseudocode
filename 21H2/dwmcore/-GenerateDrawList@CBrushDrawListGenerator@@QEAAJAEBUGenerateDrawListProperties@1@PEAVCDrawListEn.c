/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004A9C (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180005720 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000EF60 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180053D70 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x180059634 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18005BB20 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUM.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180086E30 (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18020827C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180208E10 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18022F2B0 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180233EB0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C060 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005844C (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800636A8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     _invalid_parameter_noinfo @ 0x18010183E (_invalid_parameter_noinfo.c)
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z @ 0x1801E5238 (-CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CBrushDrawListGenerator *this,
        __int64 a2,
        struct CDrawListEntryBuilder *a3)
{
  __int64 v3; // rbx
  void ***v6; // rcx
  void ***v7; // rax
  char v8; // al
  int CpuClip; // eax
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  BOOL v19; // esi
  float v20; // xmm6_4
  __int64 v21; // r8
  __int64 v22; // r9
  float v23; // xmm0_4
  __int64 v24; // rax
  size_t v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // r14d
  bool v28; // zf
  __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  int BuiltHWPrimitiveEntry; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int DrawListPrimitive; // eax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v42; // eax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  CMILMatrix *TopByReference; // rax
  bool CanUseWarpFastPath; // al
  __int64 v47; // rcx
  void *v48[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v49; // [rsp+48h] [rbp-C0h]
  __int128 v50; // [rsp+58h] [rbp-B0h]
  __int128 v51; // [rsp+68h] [rbp-A0h]
  int v52; // [rsp+78h] [rbp-90h]
  void *v53; // [rsp+88h] [rbp-80h] BYREF
  int v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+94h] [rbp-74h]
  int v56; // [rsp+9Ch] [rbp-6Ch]
  __int64 v57; // [rsp+A0h] [rbp-68h]
  int v58; // [rsp+A8h] [rbp-60h]
  CBrushDrawListGenerator *v59; // [rsp+B8h] [rbp-50h] BYREF
  CShape *v60; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-40h]
  __int128 v62; // [rsp+D8h] [rbp-30h]
  __int128 v63; // [rsp+E8h] [rbp-20h]
  __int128 v64; // [rsp+F8h] [rbp-10h]
  int v65; // [rsp+108h] [rbp+0h]
  void (__fastcall ***v66)(_QWORD, __int64); // [rsp+110h] [rbp+8h]
  char v67; // [rsp+118h] [rbp+10h]
  int v68; // [rsp+120h] [rbp+18h]
  char v69; // [rsp+124h] [rbp+1Ch]
  unsigned int v70; // [rsp+128h] [rbp+20h]
  _OWORD v71[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v72; // [rsp+150h] [rbp+48h]
  __int64 v73; // [rsp+158h] [rbp+50h]
  struct CDrawListEntryBuilder *v74; // [rsp+160h] [rbp+58h]
  void ***v75; // [rsp+168h] [rbp+60h]
  int v76; // [rsp+170h] [rbp+68h]
  __int128 v77; // [rsp+174h] [rbp+6Ch]
  __int128 v78; // [rsp+184h] [rbp+7Ch]
  int v79; // [rsp+194h] [rbp+8Ch]
  __int128 v80; // [rsp+198h] [rbp+90h]
  __int128 v81; // [rsp+1A8h] [rbp+A0h]
  int v82; // [rsp+1B8h] [rbp+B0h]
  BOOL v83; // [rsp+1BCh] [rbp+B4h]
  float v84; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v85[12]; // [rsp+1C4h] [rbp+BCh] BYREF
  void **v86; // [rsp+218h] [rbp+110h] BYREF

  v3 = a2;
  v65 = 0;
  v86 = &CCommonRenderingEffectFactory::`vftable';
  v59 = this;
  v6 = *(void ****)(a2 + 8);
  BYTE1(v65) = 23;
  v7 = &v86;
  v61 = _xmm;
  if ( v6 )
    v7 = v6;
  v75 = v7;
  v8 = *(_BYTE *)(a2 + 96);
  v62 = _xmm;
  v85[7] = v8;
  v66 = 0LL;
  v67 = 0;
  v69 = 0;
  v60 = 0LL;
  v68 = 0;
  v63 = _xmm;
  v64 = _xmm;
  LOBYTE(v65) = 85;
  v70 = 0;
  v73 = 0LL;
  v76 = 0;
  memset(&v85[4], 0, 3);
  v74 = a3;
  if ( *(_BYTE *)(a2 + 92) )
  {
    CpuClip = CDrawingContext::GetCpuClip(*(CDrawingContext **)this, (struct CCpuClip *)&v60);
    v11 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, CpuClip, 0x101u);
      goto LABEL_37;
    }
  }
  v12 = *(_QWORD *)this;
  v52 = 0;
  v13 = *(_DWORD *)(v12 + 368);
  if ( v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    v15 = *(_QWORD *)(v12 + 384);
    a2 = 68 * v14;
    v16 = *(_OWORD *)(68 * v14 + v15 + 16);
    *(_OWORD *)v48 = *(_OWORD *)(68 * v14 + v15);
    v17 = *(_OWORD *)(68 * v14 + v15 + 32);
    v49 = v16;
    v18 = *(_OWORD *)(68 * v14 + v15 + 48);
    v52 = *(_DWORD *)(68 * v14 + v15 + 64);
  }
  else
  {
    *(_OWORD *)v48 = _xmm;
    v17 = _xmm;
    v49 = _xmm;
    v18 = _xmm;
    BYTE1(v52) = BYTE1(v52) & 0xC0 | 0x17;
    LOBYTE(v52) = 85;
  }
  v51 = v18;
  v50 = v17;
  if ( *(_BYTE *)(v3 + 95) )
    v19 = 1;
  else
    v19 = *(_DWORD *)(v12 + 304) != 0;
  LOBYTE(a2) = 1;
  v83 = v19;
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(v48, a2) )
  {
    v20 = o_sqrtf_0((float)(*(float *)v48 * *(float *)v48) + (float)(*((float *)v48 + 1) * *((float *)v48 + 1)));
    v23 = o_sqrtf_0((float)(*(float *)&v49 * *(float *)&v49) + (float)(*((float *)&v49 + 1) * *((float *)&v49 + 1)));
    v84 = v20;
    *(float *)v85 = v23;
  }
  else
  {
    v53 = v48[0];
    v55 = v49;
    v57 = v51;
    v54 = HIDWORD(v48[1]);
    v56 = HIDWORD(v49);
    v58 = HIDWORD(v51);
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v53, &v84, (float *)v85, 0LL);
    v19 = v83;
  }
  if ( (v60 || v66) && !v19 )
  {
    if ( CCpuClip::IsAxisAlignedRectangle(&v60) && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v48) )
      *(_WORD *)&v85[5] = 256;
    else
      *(_WORD *)&v85[5] = 1;
  }
  v24 = *((unsigned int *)this + 18);
  LODWORD(v73) = v24;
  HIDWORD(v73) = v24;
  v25 = 8 * v24;
  if ( v25 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v25 <= 0x28 )
    {
      memcpy_0(v71, (char *)this + 40, v25);
      goto LABEL_17;
    }
    v72 = 0LL;
    memset(v71, 0, sizeof(v71));
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *(_DWORD *)_o__errno(0LL, 0LL, v21, v22) = 22;
    }
    else
    {
      if ( v25 <= 0x28 )
        goto LABEL_17;
      *(_DWORD *)_o__errno((char *)this + 40, 0LL, v21, v22) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_17:
  if ( *(_QWORD *)v3 )
  {
    *((_QWORD *)v71 + (unsigned int)v73) = *(_QWORD *)v3;
    LODWORD(v73) = v73 + 1;
  }
  v76 = *(_DWORD *)(v3 + 16) & ((1 << SBYTE4(v73)) - 1);
  if ( v76 )
  {
    v40 = *(_OWORD *)(v3 + 20);
    v41 = *(_OWORD *)(v3 + 36);
    v79 = *(_DWORD *)(v3 + 52);
    v42 = *(_DWORD *)(v3 + 88);
    v77 = v40;
    v82 = v42;
    v43 = *(_OWORD *)(v3 + 56);
    v78 = v41;
    v44 = *(_OWORD *)(v3 + 72);
    v80 = v43;
    v81 = v44;
  }
  if ( *(_BYTE *)(v3 + 94)
    || (v26 = *(_QWORD *)this, !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 568LL))
    || CCommonRegistryData::UseHWDrawListEntriesOnWARP
    || (TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(v26 + 368)),
        !CMILMatrix::Is2DAxisAlignedPreserving(TopByReference))
    || !*(_DWORD *)(v26 + 624) && *(_DWORD *)(v26 + 552)
    || *(_QWORD *)(v26 + 3352)
    || (CanUseWarpFastPath = CBrushDrawListGenerator::CanUseWarpFastPath(
                               this,
                               (const struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v59),
        v85[4] = 1,
        !CanUseWarpFastPath) )
  {
    v85[4] = 0;
  }
  v27 = v70;
  v28 = v70 == (_DWORD)v73;
  if ( v70 < (unsigned int)v73 )
  {
    do
    {
      v29 = *((_QWORD *)v71 + v27);
      if ( v29 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 8LL))(v29, 3LL) )
        break;
      ++v27;
    }
    while ( v27 < (unsigned int)v73 );
    v28 = v27 == (_DWORD)v73;
  }
  if ( !v28 )
  {
    v30 = v70;
    v31 = *((_QWORD *)v71 + v27);
    v70 = v27;
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, CBrushDrawListGenerator **))(*(_QWORD *)v31 + 32LL))(
            v31,
            *(_QWORD *)v59,
            &lambda_c497196b485e4bd0803a3588ab010e9b_::_lambda_invoker_cdecl_,
            &v59);
    *((_QWORD *)v71 + v27) = v31;
    v11 = v32;
    v70 = v30;
    if ( v32 >= 0 )
      goto LABEL_30;
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x1BFu);
LABEL_65:
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, v11, 0x150u);
    goto LABEL_37;
  }
  DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                        v59,
                        (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v59);
  v11 = DrawListPrimitive;
  if ( DrawListPrimitive < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, DrawListPrimitive, 0x17Fu);
    goto LABEL_65;
  }
LABEL_30:
  v11 = 0;
  if ( *((_QWORD *)a3 + 4) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0, 0LL, 0LL);
    v11 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, BuiltHWPrimitiveEntry, 0x20Au);
    v36 = *((_QWORD *)a3 + 4);
    if ( v36 )
    {
      *((_QWORD *)a3 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
    }
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, v11, 0x155u);
  }
LABEL_37:
  if ( v67 && v66 )
    (**v66)(v66, 1LL);
  return (unsigned int)v11;
}
