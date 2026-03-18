/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800961B0
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180006280 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000FA80 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18005B9CC (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180234DB0 (-IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_S.c)
 * Callees:
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057114 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  __int64 v7; // rdx
  const struct D2D_MATRIX_3X2_F *v8; // rsi
  __int64 v9; // rax
  struct _LIST_ENTRY *v10; // r12
  struct _LIST_ENTRY *v11; // rdi
  CVisual *v12; // r15
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // edi
  float v21; // xmm6_4
  float v22; // xmm0_4
  void (__fastcall ***v23)(_QWORD, __int64); // rcx
  CVisual *v24; // rdi
  __int64 **TreeData; // rax
  unsigned __int64 v26; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v31; // eax
  int v32; // xmm1_4
  int v33; // xmm0_4
  int v34; // xmm1_4
  int v35; // xmm0_4
  int v36; // xmm1_4
  __int128 v37; // [rsp+20h] [rbp-81h] BYREF
  __int128 v38; // [rsp+30h] [rbp-71h]
  __int128 v39; // [rsp+40h] [rbp-61h]
  __int128 v40; // [rsp+50h] [rbp-51h]
  int v41; // [rsp+60h] [rbp-41h]
  __int64 v42; // [rsp+64h] [rbp-3Dh]
  void (__fastcall ***v43)(_QWORD, __int64); // [rsp+70h] [rbp-31h] BYREF
  char v44; // [rsp+78h] [rbp-29h]
  int v45; // [rsp+80h] [rbp-21h]
  char v46; // [rsp+84h] [rbp-1Dh]
  __int128 v47; // [rsp+90h] [rbp-11h] BYREF
  _DWORD v48[6]; // [rsp+A0h] [rbp-1h] BYREF

  if ( !*((_QWORD *)a2 + 4) )
    return 1;
  v7 = *((unsigned int *)a2 + 22);
  if ( (v7 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) != ((v7 & 4) != 0) )
    return 1;
  v8 = 0LL;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 76) != 0) )
    return 1;
  if ( (v7 & 0x8E0) != 0 )
  {
    if ( (v7 & 0x800) != 0 )
    {
      v24 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 3) + 32LL))((char *)a3 + 24);
      TreeData = CVisual::FindTreeData(v24, *((const struct CVisualTree **)a3 + 991));
      v26 = *((_QWORD *)a2 + 4);
      if ( v26 < (unsigned __int64)TreeData[34]
        || (*((_BYTE *)v24 + 272) & 2) != 0 && v26 < *((_QWORD *)g_pComposition + 39) )
      {
        return 1;
      }
    }
    v14 = *((_DWORD *)a3 + 92);
    v41 = 0;
    if ( v14 )
    {
      v15 = (unsigned int)(v14 - 1);
      v16 = *((_QWORD *)a3 + 48);
      v7 = 68 * v15;
      v17 = *(_OWORD *)(68 * v15 + v16 + 16);
      v37 = *(_OWORD *)(68 * v15 + v16);
      v18 = *(_OWORD *)(68 * v15 + v16 + 32);
      v38 = v17;
      v19 = *(_OWORD *)(68 * v15 + v16 + 48);
      v41 = *(_DWORD *)(68 * v15 + v16 + 64);
    }
    else
    {
      v37 = _xmm;
      v18 = _xmm;
      v38 = _xmm;
      v19 = _xmm;
      BYTE1(v41) = BYTE1(v41) & 0xC0 | 0x17;
      LOBYTE(v41) = 85;
    }
    v20 = *((_DWORD *)a2 + 22);
    v40 = v19;
    v39 = v18;
    if ( (v20 & 0x20) != 0
      && !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v37, v7, a3, a4)
      && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(&v37) )
    {
      return 1;
    }
    if ( (v20 & 0x40) != 0 )
    {
      LOBYTE(v7) = 1;
      if ( !(unsigned __int8)CMILMatrix::IsAffine<1>(&v37, v7) )
        return 1;
      v21 = o_sqrtf_0((float)(*(float *)&v37 * *(float *)&v37) + (float)(*((float *)&v37 + 1) * *((float *)&v37 + 1)));
      v22 = o_sqrtf_0((float)(*(float *)&v38 * *(float *)&v38) + (float)(*((float *)&v38 + 1) * *((float *)&v38 + 1)));
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - *((float *)a2 + 20)) & _xmm) > 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - *((float *)a2 + 21)) & _xmm) > 0.000081380211 )
      {
        return 1;
      }
    }
    if ( (v20 & 0x80u) != 0 && !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(&v37) )
      return 1;
  }
  if ( *((_BYTE *)a2 + 102) )
  {
    if ( *((_DWORD *)a3 + 77) != 4 )
    {
      if ( (*((_DWORD *)a2 + 22) & 0x200) != 0 )
      {
        v31 = *((_DWORD *)a3 + 75);
        if ( v31 >= 1 )
        {
          v7 = (__int64)_ImageBase;
          switch ( v31 )
          {
            case 4:
            case 6:
              return 1;
            default:
              goto LABEL_6;
          }
        }
      }
      goto LABEL_6;
    }
    return 1;
  }
LABEL_6:
  if ( (*((_BYTE *)a2 + 92) & 0x10) == 0 )
    return 0;
  v9 = (*(__int64 (__fastcall **)(char *, __int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*((_QWORD *)a3 + 3) + 32LL))(
         (char *)a3 + 24,
         v7,
         a3,
         a4);
  v10 = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 991);
  v11 = 0LL;
  v12 = (CVisual *)v9;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v10->Flink[11].Blink)(v10) )
  {
    v11 = (struct _LIST_ENTRY *)((char *)v12 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v12);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != v10 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_9;
        }
        v11 = Flink - 24;
      }
    }
  }
LABEL_9:
  if ( (struct _LIST_ENTRY *)*((_QWORD *)a2 + 5) >= v11[8].Flink )
    return 0;
  if ( *((_BYTE *)a2 + 100) )
    return 1;
  v42 = 0x17553F800000LL;
  v38 = _xmm;
  v43 = 0LL;
  v44 = 0;
  v46 = 0;
  *(_QWORD *)&v37 = 0LL;
  v45 = 0;
  *((_QWORD *)&v37 + 1) = 1065353216LL;
  v39 = 0LL;
  v40 = _xmm;
  v41 = 0;
  if ( (int)CDrawingContext::GetCpuClip(a3, (struct CCpuClip *)&v37) < 0 )
    goto LABEL_32;
  if ( !(_QWORD)v37 )
  {
    v23 = v43;
    if ( !v43 )
    {
LABEL_27:
      if ( v44 )
      {
        if ( v23 )
          (**v23)(v23, 1LL);
      }
      return 0;
    }
  }
  if ( a5 )
  {
    v8 = (const struct D2D_MATRIX_3X2_F *)v48;
    v32 = *((_DWORD *)a5 + 1);
    v48[0] = *(_DWORD *)a5;
    v33 = *((_DWORD *)a5 + 4);
    v48[1] = v32;
    v34 = *((_DWORD *)a5 + 5);
    v48[2] = v33;
    v35 = *((_DWORD *)a5 + 12);
    v48[3] = v34;
    v36 = *((_DWORD *)a5 + 13);
    v48[4] = v35;
    v48[5] = v36;
  }
  v47 = *((_OWORD *)a2 + 4);
  if ( CCpuClip::FullyContains(&v37, (__int64)&v47, v8) )
  {
LABEL_32:
    v23 = v43;
    goto LABEL_27;
  }
  CShapePtr::Release((CShapePtr *)&v43);
  return 1;
}
