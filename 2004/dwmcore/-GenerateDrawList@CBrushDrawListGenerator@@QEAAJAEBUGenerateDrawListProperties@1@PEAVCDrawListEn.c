/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800539F4
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800087A0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014C90 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18004833C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180049EB0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180054F4C (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C2FBC (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800C2FBC.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800C81C4 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019F2B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B6974 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C5880 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E16F4 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020B1E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18025FB2C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180019EF4 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003AF38 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004F560 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180054020 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z @ 0x180054DCC (-TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180054E2C (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180066514 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18006DCD0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180080058 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BE1EC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800E39DE (_invalid_parameter_noinfo.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E5E34 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     sqrtf_0 @ 0x1800EECEB (sqrtf_0.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  size_t v23; // rax
  unsigned int v24; // r14d
  unsigned int v25; // edx
  __int64 v26; // rcx
  char v27; // al
  int v28; // edi
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rcx
  int BuiltHWPrimitiveEntry; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int DrawListPrimitive; // eax
  __int64 v37; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  char v40; // al
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  int v43; // eax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  __int64 v47; // r11
  __int64 v48; // rcx
  CBrushDrawListGenerator *v49; // [rsp+38h] [rbp-D0h] BYREF
  struct CShape *v50; // [rsp+40h] [rbp-C8h] BYREF
  struct _LIST_ENTRY *v51; // [rsp+48h] [rbp-C0h]
  void (__fastcall ***v52)(_QWORD, __int64); // [rsp+50h] [rbp-B8h] BYREF
  char v53; // [rsp+58h] [rbp-B0h]
  int v54; // [rsp+60h] [rbp-A8h]
  _BYTE v55[40]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+90h] [rbp-78h]
  __int64 v57; // [rsp+98h] [rbp-70h]
  struct CDrawListEntryBuilder *v58; // [rsp+A0h] [rbp-68h]
  void ***v59; // [rsp+A8h] [rbp-60h]
  int v60; // [rsp+B0h] [rbp-58h]
  __int128 v61; // [rsp+B4h] [rbp-54h]
  __int128 v62; // [rsp+C4h] [rbp-44h]
  int v63; // [rsp+D4h] [rbp-34h]
  __int128 v64; // [rsp+D8h] [rbp-30h]
  __int128 v65; // [rsp+E8h] [rbp-20h]
  int v66; // [rsp+F8h] [rbp-10h]
  BOOL v67; // [rsp+FCh] [rbp-Ch]
  float v68; // [rsp+100h] [rbp-8h] BYREF
  float v69; // [rsp+104h] [rbp-4h] BYREF
  char v70; // [rsp+108h] [rbp+0h]
  _WORD v71[7]; // [rsp+109h] [rbp+1h] BYREF
  _DWORD v72[12]; // [rsp+118h] [rbp+10h] BYREF
  float v73; // [rsp+148h] [rbp+40h] BYREF
  float v74; // [rsp+14Ch] [rbp+44h]
  int v75; // [rsp+154h] [rbp+4Ch]
  float v76; // [rsp+158h] [rbp+50h]
  float v77; // [rsp+15Ch] [rbp+54h]
  int v78; // [rsp+164h] [rbp+5Ch]
  int v79; // [rsp+178h] [rbp+70h]
  int v80; // [rsp+17Ch] [rbp+74h]
  int v81; // [rsp+184h] [rbp+7Ch]
  int v82; // [rsp+188h] [rbp+80h]
  void **v83; // [rsp+1E8h] [rbp+E0h] BYREF
  struct CShape *v84; // [rsp+1F0h] [rbp+E8h] BYREF

  v3 = *((_QWORD *)a2 + 1) == 0LL;
  v83 = &CCommonRenderingEffectFactory::`vftable';
  v49 = this;
  v5 = &v83;
  if ( !v3 )
    v5 = (void ***)*((_QWORD *)a2 + 1);
  v59 = v5;
  v8 = *((_BYTE *)a2 + 92);
  v9 = *(_QWORD *)this;
  v70 = v8;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v10 = (CScopedClipStack *)(v9 + 936);
  v53 = 0;
  LOBYTE(v54) = 0;
  *(_DWORD *)v55 = 0;
  v57 = 0LL;
  v60 = 0;
  memset(v71, 0, 3);
  v58 = a3;
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
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v10, &v84);
  v17 = TopCpuClipInScope;
  if ( TopCpuClipInScope >= 0 )
  {
    v50 = v84;
    v51 = Blink;
LABEL_11:
    v17 = 0;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, TopCpuClipInScope, 0x21Eu, 0LL);
LABEL_12:
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v17, 0x100u, 0LL);
    goto LABEL_44;
  }
  v18 = *(CDrawingContext **)this;
  v82 = 0;
  CDrawingContext::GetWorldTransform(v18, (struct CMILMatrix *)&v73);
  if ( *((_BYTE *)a2 + 94) )
    v19 = 1;
  else
    v19 = *(_DWORD *)(*(_QWORD *)this + 276LL) != 0;
  v67 = v19;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(&v73) )
  {
    v68 = sqrtf_0((float)(v73 * v73) + (float)(v74 * v74));
    v69 = sqrtf_0((float)(v77 * v77) + (float)(v76 * v76));
  }
  else
  {
    *(float *)v72 = v73;
    v72[2] = v75;
    *(float *)&v72[1] = v74;
    *(float *)&v72[4] = v77;
    *(float *)&v72[3] = v76;
    v72[6] = v79;
    v72[5] = v78;
    v72[8] = v81;
    v72[7] = v80;
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v72, &v68, &v69, 0LL);
    v19 = v67;
  }
  if ( v50 )
  {
    if ( !v19 )
    {
      if ( !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v50)
        || (v40 = CMILMatrix::Is2DAxisAlignedPreserving<1>(&v73), *(_WORD *)((char *)v71 + 1) = 256, !v40) )
      {
        *(_WORD *)((char *)v71 + 1) = 1;
      }
    }
  }
  v22 = *((unsigned int *)this + 18);
  LODWORD(v57) = v22;
  HIDWORD(v57) = v22;
  v23 = 8 * v22;
  if ( v23 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v23 <= 0x28 )
    {
      memcpy_0(&v55[8], (char *)this + 40, v23);
      goto LABEL_22;
    }
    v56 = 0LL;
    memset(&v55[8], 0, 32);
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *(_DWORD *)_o__errno(0LL, 0LL, v20, v21) = 22;
    }
    else
    {
      if ( v23 <= 0x28 )
        goto LABEL_22;
      *(_DWORD *)_o__errno((char *)this + 40, 0LL, v20, v21) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_22:
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)&v55[8 * (unsigned int)v57 + 8] = *(_QWORD *)a2;
    LODWORD(v57) = v57 + 1;
  }
  v60 = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v57)) - 1);
  if ( v60 )
  {
    v41 = *(_OWORD *)((char *)a2 + 20);
    v42 = *(_OWORD *)((char *)a2 + 36);
    v63 = *((_DWORD *)a2 + 13);
    v43 = *((_DWORD *)a2 + 22);
    v61 = v41;
    v66 = v43;
    v44 = *(_OWORD *)((char *)a2 + 56);
    v62 = v42;
    v45 = *(_OWORD *)((char *)a2 + 72);
    v64 = v44;
    v65 = v45;
  }
  if ( *((_BYTE *)a2 + 93)
    || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 608LL)
    || CCommonRegistryData::UseHWDrawListEntriesOnWARP
    || (TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(*(_QWORD *)this + 408LL)),
        !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference))
    || !*(_DWORD *)(v47 + 696) && *(_DWORD *)(v47 + 624)
    || (v3 = *(_QWORD *)(v47 + 3480) == 0LL, LOBYTE(v71[0]) = 1, !v3) )
  {
    LOBYTE(v71[0]) = 0;
  }
  CBrushDrawListGenerator::TurnOffInvalidWarpFastPath(
    this,
    (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v49);
  if ( LOBYTE(v71[0]) )
  {
    CShapePtr::Release((CShapePtr *)&v52);
    LOBYTE(v54) = 0;
    v50 = 0LL;
    v51 = 0LL;
  }
  v24 = *(_DWORD *)v55;
  v25 = v57;
  while ( v24 < v25 )
  {
    v26 = *(_QWORD *)&v55[8 * v24 + 8];
    if ( v26 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 8LL))(v26, 3LL);
      v25 = v57;
      if ( v27 )
        break;
    }
    ++v24;
  }
  if ( v24 != v25 )
  {
    v28 = *(_DWORD *)v55;
    v29 = *(_QWORD *)&v55[8 * v24 + 8];
    *(_DWORD *)v55 = v24;
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *)(), CBrushDrawListGenerator **))(*(_QWORD *)v29 + 32LL))(
            v29,
            *(_QWORD *)v49,
            lambda_c497196b485e4bd0803a3588ab010e9b_::_lambda_invoker_cdecl_,
            &v49);
    *(_QWORD *)&v55[8 * v24 + 8] = v29;
    v17 = v30;
    *(_DWORD *)v55 = v28;
    if ( v30 >= 0 )
      goto LABEL_37;
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1BFu, 0LL);
LABEL_77:
    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v17, 0x150u, 0LL);
    goto LABEL_44;
  }
  DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                        v49,
                        (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v49);
  v17 = DrawListPrimitive;
  if ( DrawListPrimitive < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, DrawListPrimitive, 0x17Fu, 0LL);
    goto LABEL_77;
  }
LABEL_37:
  v17 = 0;
  if ( *((_QWORD *)a3 + 4) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0, 0LL, 0LL);
    v17 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, BuiltHWPrimitiveEntry, 0x1A7u, 0LL);
    v34 = *((_QWORD *)a3 + 4);
    if ( v34 )
    {
      *((_QWORD *)a3 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
    }
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v17, 0x155u, 0LL);
  }
LABEL_44:
  if ( v53 && v52 )
    (**v52)(v52, 1LL);
  return (unsigned int)v17;
}
