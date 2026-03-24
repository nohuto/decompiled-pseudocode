/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054CC4
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180006A70 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800133E0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800573C0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800944A0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800C5754 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C6B1C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800C6B1C.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800CC040 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019E008 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B5444 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C44F0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E0354 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020BF70 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802619FC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180018604 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040CD0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800552F0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z @ 0x180056070 (-TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x1800560D0 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180081D20 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008D82C (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094B70 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800C208C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C891C (-Release@CShapePtr@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800E813E (_invalid_parameter_noinfo.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EBC7C (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     sqrtf_0 @ 0x1800F47AB (sqrtf_0.c)
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CDrawListEntryBuilder *a3)
{
  bool v3; // zf
  void ***v5; // rax
  char v8; // al
  __int64 v9; // rdx
  CScopedClipStack *v10; // r12
  __int64 v11; // rcx
  CVisual *v12; // rdi
  struct _LIST_ENTRY *v13; // r15
  struct _LIST_ENTRY *v14; // r14
  struct _LIST_ENTRY *Blink; // rdi
  int TopCpuClipInScope; // eax
  int v17; // r14d
  CDrawingContext *v18; // rcx
  BOOL v19; // edi
  __int64 v20; // rax
  size_t v21; // rax
  unsigned int v22; // r14d
  unsigned int v23; // edx
  __int64 v24; // rcx
  char v25; // al
  int v26; // edi
  __int64 v27; // rbx
  int v28; // eax
  unsigned int v29; // ecx
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v31; // ecx
  __int64 v32; // rcx
  int DrawListPrimitive; // eax
  unsigned int v35; // ecx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  char v38; // al
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // eax
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  __int64 v45; // r11
  unsigned int v46; // ecx
  CBrushDrawListGenerator *v47; // [rsp+38h] [rbp-D0h] BYREF
  struct CShape *v48; // [rsp+40h] [rbp-C8h] BYREF
  struct _LIST_ENTRY *v49; // [rsp+48h] [rbp-C0h]
  void (__fastcall ***v50)(_QWORD, __int64); // [rsp+50h] [rbp-B8h] BYREF
  char v51; // [rsp+58h] [rbp-B0h]
  int v52; // [rsp+60h] [rbp-A8h]
  _BYTE v53[40]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  struct CDrawListEntryBuilder *v56; // [rsp+A0h] [rbp-68h]
  void ***v57; // [rsp+A8h] [rbp-60h]
  int v58; // [rsp+B0h] [rbp-58h]
  __int128 v59; // [rsp+B4h] [rbp-54h]
  __int128 v60; // [rsp+C4h] [rbp-44h]
  int v61; // [rsp+D4h] [rbp-34h]
  __int128 v62; // [rsp+D8h] [rbp-30h]
  __int128 v63; // [rsp+E8h] [rbp-20h]
  int v64; // [rsp+F8h] [rbp-10h]
  BOOL v65; // [rsp+FCh] [rbp-Ch]
  float v66; // [rsp+100h] [rbp-8h] BYREF
  float v67; // [rsp+104h] [rbp-4h] BYREF
  char v68; // [rsp+108h] [rbp+0h]
  _WORD v69[7]; // [rsp+109h] [rbp+1h] BYREF
  _DWORD v70[12]; // [rsp+118h] [rbp+10h] BYREF
  float v71; // [rsp+148h] [rbp+40h] BYREF
  float v72; // [rsp+14Ch] [rbp+44h]
  int v73; // [rsp+154h] [rbp+4Ch]
  float v74; // [rsp+158h] [rbp+50h]
  float v75; // [rsp+15Ch] [rbp+54h]
  int v76; // [rsp+164h] [rbp+5Ch]
  int v77; // [rsp+178h] [rbp+70h]
  int v78; // [rsp+17Ch] [rbp+74h]
  int v79; // [rsp+184h] [rbp+7Ch]
  int v80; // [rsp+188h] [rbp+80h]
  void **v81; // [rsp+1E8h] [rbp+E0h] BYREF
  struct CShape *v82; // [rsp+1F0h] [rbp+E8h] BYREF

  v3 = *((_QWORD *)a2 + 1) == 0LL;
  v81 = &CCommonRenderingEffectFactory::`vftable';
  v47 = this;
  v5 = &v81;
  if ( !v3 )
    v5 = (void ***)*((_QWORD *)a2 + 1);
  v57 = v5;
  v8 = *((_BYTE *)a2 + 92);
  v9 = *(_QWORD *)this;
  v68 = v8;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v10 = (CScopedClipStack *)(v9 + 936);
  v51 = 0;
  LOBYTE(v52) = 0;
  *(_DWORD *)v53 = 0;
  v55 = 0LL;
  v58 = 0;
  memset(v69, 0, 3);
  v56 = a3;
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
  v14 = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v13->Flink[12].Blink)(v13) )
  {
    v14 = (struct _LIST_ENTRY *)((char *)v12 + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v12);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        if ( i[2].Flink == v13 )
        {
          v14 = i - 18;
          break;
        }
      }
    }
  }
  Blink = v14[13].Blink;
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v10, &v82);
  v17 = TopCpuClipInScope;
  if ( TopCpuClipInScope >= 0 )
  {
    v48 = v82;
    v49 = Blink;
LABEL_11:
    v17 = 0;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, TopCpuClipInScope, 0x220u, 0LL);
LABEL_12:
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v17, 0x101u, 0LL);
    goto LABEL_44;
  }
  v18 = *(CDrawingContext **)this;
  v80 = 0;
  CDrawingContext::GetWorldTransform(v18, (struct CMILMatrix *)&v71);
  if ( *((_BYTE *)a2 + 94) )
    v19 = 1;
  else
    v19 = *(_DWORD *)(*(_QWORD *)this + 276LL) != 0;
  v65 = v19;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(&v71) )
  {
    v66 = sqrtf_0((float)(v71 * v71) + (float)(v72 * v72));
    v67 = sqrtf_0((float)(v75 * v75) + (float)(v74 * v74));
  }
  else
  {
    *(float *)v70 = v71;
    v70[2] = v73;
    *(float *)&v70[1] = v72;
    *(float *)&v70[4] = v75;
    *(float *)&v70[3] = v74;
    v70[6] = v77;
    v70[5] = v76;
    v70[8] = v79;
    v70[7] = v78;
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v70, &v66, &v67, 0LL);
    v19 = v65;
  }
  if ( v48 )
  {
    if ( !v19 )
    {
      if ( !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v48)
        || (v38 = CMILMatrix::Is2DAxisAlignedPreserving<1>(&v71), *(_WORD *)((char *)v69 + 1) = 256, !v38) )
      {
        *(_WORD *)((char *)v69 + 1) = 1;
      }
    }
  }
  v20 = *((unsigned int *)this + 18);
  LODWORD(v55) = v20;
  HIDWORD(v55) = v20;
  v21 = 8 * v20;
  if ( v21 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v21 <= 0x28 )
    {
      memcpy_0(&v53[8], (char *)this + 40, v21);
      goto LABEL_22;
    }
    v54 = 0LL;
    memset(&v53[8], 0, 32);
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *(_DWORD *)_o__errno(0LL) = 22;
    }
    else
    {
      if ( v21 <= 0x28 )
        goto LABEL_22;
      *(_DWORD *)_o__errno((char *)this + 40) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_22:
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)&v53[8 * (unsigned int)v55 + 8] = *(_QWORD *)a2;
    LODWORD(v55) = v55 + 1;
  }
  v58 = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v55)) - 1);
  if ( v58 )
  {
    v39 = *(_OWORD *)((char *)a2 + 20);
    v40 = *(_OWORD *)((char *)a2 + 36);
    v61 = *((_DWORD *)a2 + 13);
    v41 = *((_DWORD *)a2 + 22);
    v59 = v39;
    v64 = v41;
    v42 = *(_OWORD *)((char *)a2 + 56);
    v60 = v40;
    v43 = *(_OWORD *)((char *)a2 + 72);
    v62 = v42;
    v63 = v43;
  }
  if ( *((_BYTE *)a2 + 93)
    || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 608LL)
    || CCommonRegistryData::UseHWDrawListEntriesOnWARP
    || (TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(*(_QWORD *)this + 408LL)),
        !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference))
    || !*(_DWORD *)(v45 + 696) && *(_DWORD *)(v45 + 624)
    || (v3 = *(_QWORD *)(v45 + 3480) == 0LL, LOBYTE(v69[0]) = 1, !v3) )
  {
    LOBYTE(v69[0]) = 0;
  }
  CBrushDrawListGenerator::TurnOffInvalidWarpFastPath(
    this,
    (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v47);
  if ( LOBYTE(v69[0]) )
  {
    CShapePtr::Release((CShapePtr *)&v50);
    LOBYTE(v52) = 0;
    v48 = 0LL;
    v49 = 0LL;
  }
  v22 = *(_DWORD *)v53;
  v23 = v55;
  while ( v22 < v23 )
  {
    v24 = *(_QWORD *)&v53[8 * v22 + 8];
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 8LL))(v24, 3LL);
      v23 = v55;
      if ( v25 )
        break;
    }
    ++v22;
  }
  if ( v22 != v23 )
  {
    v26 = *(_DWORD *)v53;
    v27 = *(_QWORD *)&v53[8 * v22 + 8];
    *(_DWORD *)v53 = v22;
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *)(), CBrushDrawListGenerator **))(*(_QWORD *)v27 + 32LL))(
            v27,
            *(_QWORD *)v47,
            lambda_611de328e1bb62dc15d573c6a00f4466_::_lambda_invoker_cdecl_,
            &v47);
    *(_QWORD *)&v53[8 * v22 + 8] = v27;
    v17 = v28;
    *(_DWORD *)v53 = v26;
    if ( v28 >= 0 )
      goto LABEL_37;
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x1C0u, 0LL);
LABEL_77:
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v17, 0x151u, 0LL);
    goto LABEL_44;
  }
  DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                        v47,
                        (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v47);
  v17 = DrawListPrimitive;
  if ( DrawListPrimitive < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, DrawListPrimitive, 0x180u, 0LL);
    goto LABEL_77;
  }
LABEL_37:
  v17 = 0;
  if ( *((_QWORD *)a3 + 4) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0, 0LL, 0LL);
    v17 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, BuiltHWPrimitiveEntry, 0x1A7u, 0LL);
    v32 = *((_QWORD *)a3 + 4);
    if ( v32 )
    {
      *((_QWORD *)a3 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
    }
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v17, 0x156u, 0LL);
  }
LABEL_44:
  if ( v51 && v50 )
    (**v50)(v50, 1LL);
  return (unsigned int)v17;
}
