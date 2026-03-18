/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007F1B0
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800150A0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007EFB0 (-IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEB.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180081160 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1801E51B0 (-IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_S.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C7B0 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180066514 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007ED78 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18008112C (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BE1EC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800C17A4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C4C10 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E5E34 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     ?IsCloseRealMatrixEpsilon@@YA_NMM@Z @ 0x1800EA1F0 (-IsCloseRealMatrixEpsilon@@YA_NMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  __int64 v7; // rdx
  int v8; // r11d
  char IsEnabled; // al
  float v10; // xmm1_4
  CVisual *v12; // rdi
  struct _LIST_ENTRY *v13; // rsi
  struct _LIST_ENTRY *v14; // r15
  struct _LIST_ENTRY *v15; // r12
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CVisual *v18; // rsi
  struct _LIST_ENTRY *v19; // rdi
  struct _LIST_ENTRY *v20; // r15
  struct _LIST_ENTRY *v21; // rax
  struct _LIST_ENTRY *v22; // rcx
  int v23; // eax
  int v24; // esi
  struct _LIST_ENTRY *Blink; // r12
  int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r10
  unsigned int v30; // edi
  __int64 v31; // r15
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  const struct D2D_MATRIX_3X2_F *v44; // r8
  _QWORD v45[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v46; // [rsp+40h] [rbp-51h] BYREF
  char v47; // [rsp+48h] [rbp-49h]
  char v48; // [rsp+50h] [rbp-41h]
  int v49; // [rsp+70h] [rbp-21h]
  __int128 v50; // [rsp+80h] [rbp-11h] BYREF
  _DWORD v51[6]; // [rsp+90h] [rbp-1h] BYREF

  if ( !*((_QWORD *)a2 + 3) )
    return 1;
  v7 = *((unsigned int *)a2 + 22);
  if ( (v7 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) != ((v7 & 4) != 0) )
    return 1;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 69) != 0) )
    return 1;
  if ( (v7 & 0x60) != 0 )
  {
    v49 = 0;
    CDrawingContext::GetWorldTransform(a3, (struct CMILMatrix *)v45);
    v8 = *((_DWORD *)a2 + 22);
    if ( (v8 & 0x20) != 0 && !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v45) )
      return 1;
    if ( (v8 & 0x40) != 0 )
    {
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v45, (float *)&v50, (float *)&v50 + 1);
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
      v10 = *((float *)a2 + 14);
      if ( IsEnabled )
      {
        if ( !IsCloseRealMatrixEpsilon(*(float *)&v50, v10)
          || !IsCloseRealMatrixEpsilon(*((float *)&v50 + 1), *((float *)a2 + 15)) )
        {
          return 1;
        }
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v50 - v10) & _xmm) > 0.0000011920929
             || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v50 + 1) - *((float *)a2 + 15)) & _xmm) > 0.0000011920929 )
      {
        return 1;
      }
    }
  }
  if ( *((_DWORD *)a2 + 4) == 2
    && (*((_DWORD *)a3 + 70) == 4
     || (*((_DWORD *)a2 + 22) & 0x200) != 0
     && (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a3 + 68)) == 3) )
  {
    return 1;
  }
  if ( (*((_BYTE *)a2 + 92) & 0x10) == 0 )
    return 0;
  v12 = 0LL;
  if ( *((_BYTE *)a3 + 5920) )
  {
    if ( *((_BYTE *)a3 + 5921) )
      v12 = (CVisual *)*((_QWORD *)a3 + 413);
    else
      v12 = *(CVisual **)(*((_QWORD *)a3 + 741) + 56LL);
  }
  v13 = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 741);
  v14 = 0LL;
  v15 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, __int64, struct CDrawingContext *, const struct D2D_SIZE_F *))v13->Flink[12].Blink)(
         v13,
         v7,
         a3,
         a4) )
  {
    v14 = (struct _LIST_ENTRY *)((char *)v12 + 320);
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
            goto LABEL_32;
        }
        v14 = Flink - 18;
      }
    }
  }
LABEL_32:
  if ( v15 >= v14[16].Blink )
  {
    if ( !*((_BYTE *)a2 + 101) )
      return 0;
  }
  else if ( *((_BYTE *)a2 + 100) )
  {
    return 1;
  }
  if ( !*(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)a3 + 240) - 1) + *((_QWORD *)a3 + 117) + 80) )
    return 0;
  v18 = 0LL;
  if ( *((_BYTE *)a3 + 5920) )
  {
    if ( *((_BYTE *)a3 + 5921) )
      v18 = (CVisual *)*((_QWORD *)a3 + 413);
    else
      v18 = *(CVisual **)(*((_QWORD *)a3 + 741) + 56LL);
  }
  v19 = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 741);
  v20 = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v19->Flink[12].Blink)(v19) )
  {
    v20 = (struct _LIST_ENTRY *)((char *)v18 + 320);
  }
  else
  {
    v21 = CVisual::GetTreeDataListHead(v18);
    if ( v21 )
    {
      v22 = v21->Flink;
      if ( v21->Flink != v21 )
      {
        while ( v22[2].Flink != v19 )
        {
          v22 = v22->Flink;
          if ( v22 == v21 )
            goto LABEL_49;
        }
        v20 = v22 - 18;
      }
    }
  }
LABEL_49:
  v23 = *((_DWORD *)a3 + 240);
  v24 = 0;
  Blink = v20[13].Blink;
  if ( !v23 || (v26 = *(_DWORD *)(84LL * (unsigned int)(v23 - 1) + *((_QWORD *)a3 + 117) + 4)) == 0 )
  {
    v36 = 0LL;
    goto LABEL_66;
  }
  v27 = *((_QWORD *)a3 + 226);
  v28 = v27;
  if ( *(_QWORD *)(136LL * (unsigned int)(*((_DWORD *)a3 + 458) - 1) + v27 + 88)
    || (v29 = 0LL, v30 = *((_DWORD *)a3 + 458) - v26, v30 >= *((_DWORD *)a3 + 458)) )
  {
LABEL_60:
    v35 = 136LL * (unsigned int)(*((_DWORD *)a3 + 458) - 1);
    v36 = *(_QWORD *)(v35 + v28 + 88);
    goto LABEL_61;
  }
  while ( 1 )
  {
    v31 = 136LL * v30;
    v32 = v31 + v27;
    if ( *(_QWORD *)(v31 + v27 + 88) )
      goto LABEL_59;
    if ( v29 )
      break;
    v33 = CShapePtr::CopyShape(
            (CShapePtr *)v32,
            (const struct CMILMatrix *)(v32 + 16),
            (struct CShape **)(v31 + v27 + 88));
    v24 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xC4u, 0LL);
      goto LABEL_57;
    }
LABEL_59:
    v28 = *((_QWORD *)a3 + 226);
    ++v30;
    v27 = v28;
    v29 = *(_QWORD *)(v28 + v31 + 88);
    if ( v30 >= *((_DWORD *)a3 + 458) )
      goto LABEL_60;
  }
  v37 = CShape::Combine(v29, v28, *(_QWORD *)v32, v32 + 16, 1, (_QWORD *)(v31 + v27 + 88));
  v24 = v37;
  if ( v37 >= 0 )
    goto LABEL_59;
  MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xCEu, 0LL);
LABEL_57:
  v36 = v50;
LABEL_61:
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v24, 0x21Eu, 0LL);
    return 0;
  }
LABEL_66:
  v46 = 0LL;
  v47 = 0;
  v48 = 0;
  v45[0] = v36;
  v45[1] = Blink;
  if ( v36 )
  {
    if ( a5 )
    {
      v39 = *((_DWORD *)a5 + 1);
      v51[0] = *(_DWORD *)a5;
      v40 = *((_DWORD *)a5 + 4);
      v51[1] = v39;
      v41 = *((_DWORD *)a5 + 5);
      v51[2] = v40;
      v42 = *((_DWORD *)a5 + 12);
      v51[3] = v41;
      v43 = *((_DWORD *)a5 + 13);
      v51[4] = v42;
      v51[5] = v43;
    }
    v44 = (const struct D2D_MATRIX_3X2_F *)v51;
    if ( !a5 )
      v44 = 0LL;
    v50 = *(_OWORD *)((char *)a2 + 40);
    if ( !CCpuClip::FullyContains((__int64)v45, (__int64)&v50, v44) )
    {
      CShapePtr::Release((CShapePtr *)&v46);
      return 1;
    }
  }
  return 0;
}
