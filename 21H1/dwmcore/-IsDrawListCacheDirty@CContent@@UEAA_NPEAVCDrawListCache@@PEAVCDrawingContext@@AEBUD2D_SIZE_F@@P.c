/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180045F60
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180016000 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180045D60 (-IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEB.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x1800A8394 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1801E7B30 (-IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_S.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18006F0BC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B8AB4 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE840 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800C1988 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v7; // r14d
  _DWORD *v8; // rdi
  CVisual *v9; // r14
  struct _LIST_ENTRY *v10; // r13
  struct _LIST_ENTRY *v11; // r15
  struct _LIST_ENTRY *v12; // r12
  CVisual *v13; // r14
  struct _LIST_ENTRY *v14; // r12
  struct _LIST_ENTRY *v15; // r15
  int v16; // eax
  struct _LIST_ENTRY *Blink; // r14
  int v18; // r15d
  int v19; // r8d
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // r12d
  __int64 v26; // r13
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  _QWORD v42[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v43; // [rsp+40h] [rbp-51h] BYREF
  char v44; // [rsp+48h] [rbp-49h]
  char v45; // [rsp+50h] [rbp-41h]
  int v46; // [rsp+70h] [rbp-21h]
  __int128 v47; // [rsp+80h] [rbp-11h] BYREF
  _DWORD v48[6]; // [rsp+90h] [rbp-1h] BYREF

  if ( !*((_QWORD *)a2 + 3) )
    return 1;
  v7 = *((_DWORD *)a2 + 22);
  if ( (v7 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) != ((*((_DWORD *)a2 + 22) & 4) != 0) )
    return 1;
  v8 = 0LL;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 69) != 0) )
    return 1;
  if ( (v7 & 0x60) != 0 )
  {
    v46 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 408), (struct CMILMatrix *)v42);
    v7 = *((_DWORD *)a2 + 22);
    if ( (v7 & 0x20) != 0 && !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v42) )
      return 1;
    if ( (v7 & 0x40) != 0 )
    {
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v42, (float *)&v47, (float *)&v47 + 1);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v47 - *((float *)a2 + 14)) & _xmm) > 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v47 + 1) - *((float *)a2 + 15)) & _xmm) > 0.0000011920929 )
      {
        return 1;
      }
    }
  }
  if ( *((_DWORD *)a2 + 4) == 2
    && (*((_DWORD *)a3 + 70) == 4
     || (v7 & 0x200) != 0 && (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a3 + 68)) == 3) )
  {
    return 1;
  }
  if ( (*((_BYTE *)a2 + 92) & 0x10) == 0 )
    return 0;
  v9 = 0LL;
  if ( *((_BYTE *)a3 + 5920) )
  {
    if ( *((_BYTE *)a3 + 5921) )
      v9 = (CVisual *)*((_QWORD *)a3 + 413);
    else
      v9 = *(CVisual **)(*((_QWORD *)a3 + 741) + 56LL);
  }
  v10 = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 741);
  v11 = 0LL;
  v12 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *))v10->Flink[12].Blink)(
         v10,
         a2,
         a3,
         a4) )
  {
    v11 = (struct _LIST_ENTRY *)((char *)v9 + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v9);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != v10 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_12;
        }
        v11 = Flink - 18;
      }
    }
  }
LABEL_12:
  if ( v12 < v11[16].Blink )
  {
    if ( *((_BYTE *)a2 + 100) )
      return 1;
  }
  else if ( !*((_BYTE *)a2 + 101) )
  {
    return 0;
  }
  if ( !*(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)a3 + 240) - 1) + *((_QWORD *)a3 + 117) + 80) )
    return 0;
  v13 = 0LL;
  if ( *((_BYTE *)a3 + 5920) )
  {
    if ( *((_BYTE *)a3 + 5921) )
      v13 = (CVisual *)*((_QWORD *)a3 + 413);
    else
      v13 = *(CVisual **)(*((_QWORD *)a3 + 741) + 56LL);
  }
  v14 = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 741);
  v15 = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v14->Flink[12].Blink)(v14) )
  {
    v15 = (struct _LIST_ENTRY *)((char *)v13 + 320);
  }
  else
  {
    v33 = CVisual::GetTreeDataListHead(v13);
    if ( v33 )
    {
      v34 = v33->Flink;
      if ( v33->Flink != v33 )
      {
        while ( v34[2].Flink != v14 )
        {
          v34 = v34->Flink;
          if ( v34 == v33 )
            goto LABEL_20;
        }
        v15 = v34 - 18;
      }
    }
  }
LABEL_20:
  v16 = *((_DWORD *)a3 + 240);
  Blink = v15[13].Blink;
  v18 = 0;
  if ( !v16 || (v19 = *(_DWORD *)(84LL * (unsigned int)(v16 - 1) + *((_QWORD *)a3 + 117) + 4)) == 0 )
  {
    v20 = 0LL;
    goto LABEL_23;
  }
  v22 = *((_QWORD *)a3 + 226);
  v23 = v22;
  if ( *(_QWORD *)(136LL * (unsigned int)(*((_DWORD *)a3 + 458) - 1) + v22 + 88)
    || (v24 = 0LL, v25 = *((_DWORD *)a3 + 458) - v19, v25 >= *((_DWORD *)a3 + 458)) )
  {
LABEL_38:
    v30 = 136LL * (unsigned int)(*((_DWORD *)a3 + 458) - 1);
    v20 = *(_QWORD *)(v30 + v23 + 88);
    goto LABEL_39;
  }
  while ( 1 )
  {
    v26 = 136LL * v25;
    v27 = (_QWORD *)(v22 + v26);
    if ( *(_QWORD *)(v22 + v26 + 88) )
      goto LABEL_37;
    if ( !v24 )
      break;
    v35 = CShape::Combine(v24, v22, *v27, v27 + 2, 1, v22 + v26 + 88);
    v18 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xCEu, 0LL);
      goto LABEL_71;
    }
LABEL_37:
    v23 = *((_QWORD *)a3 + 226);
    ++v25;
    v22 = v23;
    v24 = *(_QWORD *)(v23 + v26 + 88);
    if ( v25 >= *((_DWORD *)a3 + 458) )
      goto LABEL_38;
  }
  v28 = CShapePtr::CopyShape((CShapePtr *)v27, (const struct CMILMatrix *)(v27 + 2), (struct CShape **)(v22 + v26 + 88));
  v18 = v28;
  if ( v28 >= 0 )
    goto LABEL_37;
  MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xC4u, 0LL);
LABEL_71:
  v20 = v47;
LABEL_39:
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v18, 0x21Eu, 0LL);
    return 0;
  }
LABEL_23:
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  v42[0] = v20;
  v42[1] = Blink;
  if ( v20 )
  {
    if ( a5 )
    {
      v8 = v48;
      v37 = *((_DWORD *)a5 + 1);
      v48[0] = *(_DWORD *)a5;
      v38 = *((_DWORD *)a5 + 4);
      v48[1] = v37;
      v39 = *((_DWORD *)a5 + 5);
      v48[2] = v38;
      v40 = *((_DWORD *)a5 + 12);
      v48[3] = v39;
      v41 = *((_DWORD *)a5 + 13);
      v48[4] = v40;
      v48[5] = v41;
    }
    v47 = *(_OWORD *)((char *)a2 + 40);
    if ( !(unsigned __int8)CCpuClip::FullyContains(v42, &v47, v8) )
    {
      CShapePtr::Release((CShapePtr *)&v43);
      return 1;
    }
  }
  return 0;
}
