/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000FC10 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015A60 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180036970 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003A6C0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004C834 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800700DC (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A8598 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801A1E48 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B92E4 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C81B0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E4074 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020DBA0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18026259C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x18001AADC (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18004B860 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z @ 0x18004C5D8 (-TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x18004C638 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180050C90 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005C100 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070700 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800E253E (_invalid_parameter_noinfo.c)
 *     sqrtf_0 @ 0x1800EBD3B (sqrtf_0.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CDrawListEntryBuilder *a3)
{
  struct _LIST_ENTRY *v5; // r13
  void ***v7; // rax
  char v8; // al
  __int64 v9; // rdx
  CScopedClipStack *v10; // r14
  __int64 v11; // rcx
  CVisual *v12; // rsi
  struct _LIST_ENTRY *v13; // r12
  struct _LIST_ENTRY *Blink; // rsi
  int TopCpuClipInScope; // eax
  int v16; // r14d
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  BOOL v24; // esi
  float v25; // xmm6_4
  float v26; // xmm0_4
  __int64 v27; // rax
  size_t v28; // rax
  unsigned int v29; // r14d
  unsigned int v30; // edx
  bool v31; // zf
  __int64 v32; // rcx
  char v33; // al
  unsigned int v34; // edi
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rcx
  int BuiltHWPrimitiveEntry; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int DrawListPrimitive; // eax
  __int64 v43; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  int v48; // eax
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  __int64 v52; // r11
  __int64 v53; // rcx
  void *v54[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v55; // [rsp+48h] [rbp-C0h]
  __int128 v56; // [rsp+58h] [rbp-B0h]
  __int128 v57; // [rsp+68h] [rbp-A0h]
  int v58; // [rsp+78h] [rbp-90h]
  CBrushDrawListGenerator *v59; // [rsp+88h] [rbp-80h] BYREF
  struct CShape *v60; // [rsp+90h] [rbp-78h] BYREF
  struct _LIST_ENTRY *v61; // [rsp+98h] [rbp-70h]
  void (__fastcall ***v62)(_QWORD, __int64); // [rsp+A0h] [rbp-68h] BYREF
  char v63; // [rsp+A8h] [rbp-60h]
  char v64; // [rsp+B0h] [rbp-58h]
  unsigned int v65; // [rsp+B8h] [rbp-50h]
  _OWORD v66[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-28h]
  __int64 v68; // [rsp+E8h] [rbp-20h]
  struct CDrawListEntryBuilder *v69; // [rsp+F0h] [rbp-18h]
  void ***v70; // [rsp+F8h] [rbp-10h]
  int v71; // [rsp+100h] [rbp-8h]
  __int128 v72; // [rsp+104h] [rbp-4h]
  __int128 v73; // [rsp+114h] [rbp+Ch]
  int v74; // [rsp+124h] [rbp+1Ch]
  __int128 v75; // [rsp+128h] [rbp+20h]
  __int128 v76; // [rsp+138h] [rbp+30h]
  int v77; // [rsp+148h] [rbp+40h]
  BOOL v78; // [rsp+14Ch] [rbp+44h]
  float v79; // [rsp+150h] [rbp+48h] BYREF
  float v80; // [rsp+154h] [rbp+4Ch] BYREF
  char v81; // [rsp+158h] [rbp+50h]
  _WORD v82[7]; // [rsp+159h] [rbp+51h] BYREF
  void *v83; // [rsp+168h] [rbp+60h] BYREF
  int v84; // [rsp+170h] [rbp+68h]
  __int64 v85; // [rsp+174h] [rbp+6Ch]
  int v86; // [rsp+17Ch] [rbp+74h]
  __int64 v87; // [rsp+180h] [rbp+78h]
  int v88; // [rsp+188h] [rbp+80h]
  void **v89; // [rsp+1E8h] [rbp+E0h] BYREF
  struct CShape *v90; // [rsp+1F0h] [rbp+E8h] BYREF

  v5 = 0LL;
  v60 = 0LL;
  v89 = &CCommonRenderingEffectFactory::`vftable';
  v7 = (void ***)*((_QWORD *)a2 + 1);
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v68 = 0LL;
  v71 = 0;
  memset(v82, 0, 3);
  v59 = this;
  v69 = a3;
  if ( !v7 )
    v7 = &v89;
  v70 = v7;
  v8 = *((_BYTE *)a2 + 92);
  v9 = *(_QWORD *)this;
  v81 = v8;
  v10 = (CScopedClipStack *)(v9 + 936);
  v11 = 84LL * (unsigned int)(*(_DWORD *)(v9 + 960) - 1);
  if ( !*(_BYTE *)(v11 + *(_QWORD *)(v9 + 936) + 80) )
    goto LABEL_11;
  v12 = 0LL;
  if ( *(_BYTE *)(v9 + 5920) )
  {
    if ( *(_BYTE *)(v9 + 5921) )
      v12 = *(CVisual **)(v9 + 3304);
    else
      v12 = *(CVisual **)(*(_QWORD *)(v9 + 5928) + 56LL);
  }
  v13 = *(struct _LIST_ENTRY **)(v9 + 5928);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v13->Flink[12].Blink)(v13) )
  {
    v5 = (struct _LIST_ENTRY *)((char *)v12 + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v12);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != v13 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_9;
        }
        v5 = Flink - 18;
      }
    }
  }
LABEL_9:
  Blink = v5[13].Blink;
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v10, &v90);
  v16 = TopCpuClipInScope;
  if ( TopCpuClipInScope >= 0 )
  {
    v60 = v90;
    v61 = Blink;
LABEL_11:
    v16 = 0;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, TopCpuClipInScope, 0x21Eu, 0LL);
LABEL_12:
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v16, 0x100u, 0LL);
    goto LABEL_47;
  }
  v17 = *(_QWORD *)this;
  v58 = 0;
  v18 = *(_DWORD *)(v17 + 408);
  if ( v18 )
  {
    v19 = (unsigned int)(v18 - 1);
    v20 = *(_QWORD *)(v17 + 424);
    v21 = *(_OWORD *)(68 * v19 + v20 + 16);
    *(_OWORD *)v54 = *(_OWORD *)(68 * v19 + v20);
    v22 = *(_OWORD *)(68 * v19 + v20 + 32);
    v55 = v21;
    v23 = *(_OWORD *)(68 * v19 + v20 + 48);
    v58 = *(_DWORD *)(68 * v19 + v20 + 64);
  }
  else
  {
    *(_OWORD *)v54 = _xmm;
    v22 = _xmm;
    v55 = _xmm;
    v23 = _xmm;
    LOWORD(v58) = 32085;
  }
  v31 = *((_BYTE *)a2 + 94) == 0;
  v57 = v23;
  v56 = v22;
  v24 = !v31 || *(_DWORD *)(v17 + 276) != 0;
  v78 = v24;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(v54) )
  {
    v25 = sqrtf_0((float)(*(float *)v54 * *(float *)v54) + (float)(*((float *)v54 + 1) * *((float *)v54 + 1)));
    v26 = sqrtf_0((float)(*(float *)&v55 * *(float *)&v55) + (float)(*((float *)&v55 + 1) * *((float *)&v55 + 1)));
    v79 = v25;
    v80 = v26;
  }
  else
  {
    v83 = v54[0];
    v84 = HIDWORD(v54[1]);
    v85 = v55;
    v87 = v57;
    v86 = HIDWORD(v55);
    v88 = HIDWORD(v57);
    Matrix3x3::Get2DScaleDimensionsWithPerspective(&v83, &v79, &v80, 0LL);
    v24 = v78;
  }
  if ( (v60 || v62) && !v24 )
  {
    if ( CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v60)
      && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v54) )
    {
      *(_WORD *)((char *)v82 + 1) = 256;
    }
    else
    {
      *(_WORD *)((char *)v82 + 1) = 1;
    }
  }
  v27 = *((unsigned int *)this + 18);
  LODWORD(v68) = v27;
  HIDWORD(v68) = v27;
  v28 = 8 * v27;
  if ( v28 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v28 <= 0x28 )
    {
      memcpy_0(v66, (char *)this + 40, v28);
      goto LABEL_25;
    }
    v67 = 0LL;
    memset(v66, 0, sizeof(v66));
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *(_DWORD *)_o__errno(0LL) = 22;
    }
    else
    {
      if ( v28 <= 0x28 )
        goto LABEL_25;
      *(_DWORD *)_o__errno((char *)this + 40) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_25:
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)v66 + (unsigned int)v68) = *(_QWORD *)a2;
    LODWORD(v68) = v68 + 1;
  }
  v71 = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v68)) - 1);
  if ( v71 )
  {
    v46 = *(_OWORD *)((char *)a2 + 20);
    v47 = *(_OWORD *)((char *)a2 + 36);
    v74 = *((_DWORD *)a2 + 13);
    v48 = *((_DWORD *)a2 + 22);
    v72 = v46;
    v77 = v48;
    v49 = *(_OWORD *)((char *)a2 + 56);
    v73 = v47;
    v50 = *(_OWORD *)((char *)a2 + 72);
    v75 = v49;
    v76 = v50;
  }
  if ( *((_BYTE *)a2 + 93)
    || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 608LL)
    || CCommonRegistryData::UseHWDrawListEntriesOnWARP
    || (TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(*(_QWORD *)this + 408LL)),
        !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference))
    || !*(_DWORD *)(v52 + 696) && *(_DWORD *)(v52 + 624)
    || (v31 = *(_QWORD *)(v52 + 3480) == 0LL, LOBYTE(v82[0]) = 1, !v31) )
  {
    LOBYTE(v82[0]) = 0;
  }
  CBrushDrawListGenerator::TurnOffInvalidWarpFastPath(
    this,
    (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v59);
  if ( LOBYTE(v82[0]) )
  {
    CShapePtr::Release((CShapePtr *)&v62);
    v64 = 0;
    v60 = 0LL;
    v61 = 0LL;
  }
  v29 = v65;
  v30 = v68;
  v31 = v65 == (_DWORD)v68;
  if ( v65 < (unsigned int)v68 )
  {
    do
    {
      v32 = *((_QWORD *)v66 + v29);
      if ( v32 )
      {
        v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 8LL))(v32, 3LL);
        v30 = v68;
        if ( v33 )
          break;
      }
      ++v29;
    }
    while ( v29 < v30 );
    v31 = v29 == v30;
  }
  if ( !v31 )
  {
    v34 = v65;
    v35 = *((_QWORD *)v66 + v29);
    v65 = v29;
    v36 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), CBrushDrawListGenerator **))(*(_QWORD *)v35 + 32LL))(
            v35,
            lambda_b48b3c6d6c3f7194206dbcda051fd9f4_::_lambda_invoker_cdecl_,
            &v59);
    *((_QWORD *)v66 + v29) = v35;
    v16 = v36;
    v65 = v34;
    if ( v36 >= 0 )
      goto LABEL_40;
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x1BEu, 0LL);
LABEL_83:
    MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v16, 0x150u, 0LL);
    goto LABEL_47;
  }
  DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                        v59,
                        (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v59);
  v16 = DrawListPrimitive;
  if ( DrawListPrimitive < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, DrawListPrimitive, 0x17Fu, 0LL);
    goto LABEL_83;
  }
LABEL_40:
  v16 = 0;
  if ( *((_QWORD *)a3 + 4) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0, 0LL, 0LL);
    v16 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, BuiltHWPrimitiveEntry, 0x1A7u, 0LL);
    v40 = *((_QWORD *)a3 + 4);
    if ( v40 )
    {
      *((_QWORD *)a3 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
    }
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v16, 0x155u, 0LL);
  }
LABEL_47:
  if ( v63 && v62 )
    (**v62)(v62, 1LL);
  return (unsigned int)v16;
}
