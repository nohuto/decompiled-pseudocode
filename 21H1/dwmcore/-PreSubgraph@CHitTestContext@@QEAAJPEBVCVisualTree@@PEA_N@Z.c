/*
 * XREFs of ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BDC0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18007B750 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18002C9E8 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x1800591F0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18005C3D0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18007CD8C (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007D478 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18007D638 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007D750 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800B6518 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800B8970 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800BCDA8 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z @ 0x1800C4224 (-PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801B18B4 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801B1F90 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x180229DEC (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v7; // rax
  __m128 *v10; // rcx
  __int64 v11; // rdx
  int v12; // r15d
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // r13
  unsigned int v17; // eax
  bool v18; // bl
  bool v19; // r15
  bool v20; // al
  _BYTE *v21; // rax
  struct CTreeData *v22; // r15
  int v23; // r12d
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  _DWORD *v27; // r8
  int v28; // eax
  __int128 v29; // xmm0
  int ShapeData; // r13d
  __int64 v31; // rax
  CVisual *v32; // r13
  int v33; // r15d
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  bool v36; // r12
  struct CTreeData *v37; // r15
  __int64 v38; // rcx
  _DWORD *v39; // r8
  CVisual *v40; // r12
  unsigned __int64 v41; // rax
  float v42; // xmm1_4
  float v43; // xmm1_4
  _DWORD *v44; // r8
  _OWORD *v45; // r10
  char v46; // r15
  bool v47; // r12
  CGeometry *v48; // rcx
  char v49; // r15
  bool *v50; // rcx
  __int64 result; // rax
  __int64 v52; // rax
  _BYTE *v53; // rdx
  __int64 k; // rcx
  _QWORD *v55; // rax
  struct CInteraction *InteractionInternal; // rax
  __int64 v57; // rax
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int64 v61; // rcx
  __int64 v62; // rcx
  struct CEffect *EffectInternal; // rbx
  struct CEffect *v64; // rax
  CInteraction *v65; // rax
  __int64 v66; // rax
  _BYTE *v67; // rdx
  __int64 i; // rcx
  _QWORD **v69; // rcx
  _QWORD *v70; // rcx
  CVisual *v71; // rax
  __int64 v72; // rax
  _BYTE *v73; // rdx
  __int64 j; // rcx
  _QWORD **v75; // rcx
  _QWORD *v76; // rcx
  CVisual *v77; // rax
  int updated; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v81; // r13d
  int v82; // eax
  __int64 v83; // rcx
  unsigned __int64 v84; // rax
  void *v85; // rbx
  void *v86; // rbx
  HANDLE ProcessHeap; // rax
  struct CTreeData *TreeData; // rax
  __int64 v89; // rdx
  __int64 *v90; // rax
  __int64 *v91; // rax
  __int64 v92; // rcx
  __int64 *v93; // rax
  __int64 *v94; // rax
  int v95; // eax
  __int64 v96; // rcx
  CInteraction *v97; // rax
  __int64 v98; // rbx
  _QWORD *BspPolygonList; // rax
  __int64 v100; // rcx
  char v101; // [rsp+40h] [rbp-C0h]
  bool v102[7]; // [rsp+41h] [rbp-BFh] BYREF
  void *lpMem; // [rsp+48h] [rbp-B8h] BYREF
  bool *v104; // [rsp+50h] [rbp-B0h]
  _OWORD *v105; // [rsp+58h] [rbp-A8h] BYREF
  char v106; // [rsp+60h] [rbp-A0h]
  __int64 v107; // [rsp+68h] [rbp-98h]
  _OWORD v108[4]; // [rsp+70h] [rbp-90h] BYREF
  int v109; // [rsp+B0h] [rbp-50h]
  _OWORD v110[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v111; // [rsp+100h] [rbp+0h]
  _BYTE v112[64]; // [rsp+110h] [rbp+10h] BYREF
  int v113; // [rsp+150h] [rbp+50h]
  __m128 v114; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v115; // [rsp+170h] [rbp+70h]

  v3 = *((_QWORD *)this + 2);
  v4 = *((_QWORD *)this + 3);
  v5 = 0LL;
  v107 = 0LL;
  v7 = *(_QWORD *)a2;
  v104 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v7 + 200))(a2) )
  {
    v5 = v3 + 320;
LABEL_3:
    v107 = v5;
    goto LABEL_4;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
  if ( TreeDataListHead )
  {
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink != TreeDataListHead )
    {
      while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
      {
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_4;
      }
      v5 = (__int64)&Flink[-18];
      goto LABEL_3;
    }
  }
LABEL_4:
  v10 = (__m128 *)((char *)a2 + 64);
  v11 = 0xFFFFFFFFLL;
  if ( v3 != *((_QWORD *)a2 + 7) )
    v10 = (__m128 *)(v3 + 140);
  v114 = *v10;
  v115 = v10[1].m128_u64[0];
  *(_BYTE *)(v3 + 93) &= ~4u;
  *(_BYTE *)(v5 + 288) &= ~1u;
  *a3 = 1;
  v12 = *(_DWORD *)(v3 + 200);
  if ( v12 != -1 )
  {
    v13 = *((unsigned int *)this + 37);
    v14 = *((_DWORD *)this + 36);
    lpMem = 0LL;
    if ( v14 != (_DWORD)v13 )
    {
LABEL_8:
      *(_DWORD *)(*((_QWORD *)this + 20) + 4LL * v14) = v12;
      v15 = *((_DWORD *)this + 42);
      if ( v15 <= ++*((_DWORD *)this + 36) )
        v15 = *((_DWORD *)this + 36);
      *((_DWORD *)this + 42) = v15;
      goto LABEL_11;
    }
    v81 = 2 * v13;
    if ( (unsigned __int64)(2 * v13) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_11;
    }
    if ( v81 <= 0x40 )
      v81 = 64;
    v82 = HrMalloc(4uLL, v81, &lpMem);
    if ( v82 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x53u, 0LL);
    }
    else
    {
      v84 = 4LL * *((unsigned int *)this + 36);
      if ( v84 <= 0xFFFFFFFF )
      {
        v85 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 20), (unsigned int)v84);
        operator delete(*((void **)this + 20));
        v14 = *((_DWORD *)this + 36);
        *((_QWORD *)this + 20) = v85;
        *((_DWORD *)this + 37) = v81;
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v86 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v86);
    }
  }
LABEL_11:
  v16 = 1LL;
  v17 = *((float *)&v115 + 1) <= *(float *)&v115;
  if ( v114.m128_f32[2] <= v114.m128_f32[0] )
    ++v17;
  if ( v114.m128_f32[3] <= v114.m128_f32[1] )
    ++v17;
  if ( v17 > 1 || *(char *)(v3 + 93) < 0 )
    goto LABEL_80;
  if ( !*(_DWORD *)(v3 + 100) && (**(_DWORD **)(v3 + 224) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)v3);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
            EffectInternal,
            186LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
              EffectInternal,
              56LL) )
        goto LABEL_19;
      EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 10);
    }
    if ( EffectInternal )
    {
LABEL_80:
      result = 0LL;
      *v104 = 0;
      return result;
    }
  }
LABEL_19:
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, __int64))(*(_QWORD *)a2 + 200LL))(a2, v11) )
  {
    TreeData = CVisual::FindTreeData((CVisual *)v3, a2);
    if ( TreeData )
    {
      v89 = 0LL;
      if ( g_pComposition )
        v89 = *((_QWORD *)g_pComposition + 44);
      if ( *((_BYTE *)TreeData + 18) && *((_QWORD *)TreeData + 35) == v89 )
        goto LABEL_80;
    }
  }
  v109 = 0;
  v113 = 0;
  v18 = *(_DWORD *)(v3 + 100) == 1;
  v19 = v4 && *(_DWORD *)(v4 + 100) == 1;
  v20 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 224LL))(v3) )
  {
    if ( (**(_DWORD **)(v3 + 224) & 0x400000) == 0
      || (v64 = CVisual::GetEffectInternal((CVisual *)v3),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v64 + 56LL))(v64, 59LL)) )
    {
      v20 = 0;
    }
  }
  if ( !v18 )
    goto LABEL_27;
  if ( v19 )
  {
    if ( !v20 )
    {
LABEL_27:
      v101 = 0;
      goto LABEL_28;
    }
  }
  else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 72)) )
  {
    goto LABEL_27;
  }
  v101 = 1;
LABEL_28:
  v21 = v112;
  v22 = 0LL;
  if ( !*(_QWORD *)(v3 + 240) )
    v21 = 0LL;
  v23 = -2003292412;
  v105 = v21;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
  {
    v25 = v3 + 320;
  }
  else
  {
    v90 = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( !v90 )
      goto LABEL_48;
    v24 = *v90;
    if ( (__int64 *)*v90 == v90 )
      goto LABEL_48;
    while ( 1 )
    {
      v25 = v24 - 288;
      if ( *(const struct CVisualTree **)(v24 + 32) == a2 )
        break;
      v24 = *(_QWORD *)v24;
      if ( (__int64 *)v24 == v90 )
        goto LABEL_48;
    }
  }
  if ( v25 )
  {
    v23 = 0;
    v102[0] = 0;
    if ( v3 != *((_QWORD *)a2 + 7) )
    {
      v26 = 0LL;
      if ( g_pComposition )
        v26 = *((_QWORD *)g_pComposition + 44);
      if ( *(_BYTE *)(v25 + 18) && *(_QWORD *)(v25 + 280) == v26 )
        goto LABEL_38;
      v27 = *(_DWORD **)(v3 + 224);
      if ( (*v27 & 0x1000000) == 0 )
        goto LABEL_38;
      v66 = (unsigned int)v27[1];
      v67 = v27 + 2;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v66; ++v67 )
      {
        if ( *v67 == 8 )
          break;
        i = (unsigned int)(i + 1);
      }
      v69 = (unsigned int)i >= (unsigned int)v66
          ? 0LL
          : (_QWORD **)((char *)v27 + 8 * i - (((_BYTE)v66 + 15) & 7) + v66 + 15);
      v70 = *v69;
      if ( v70 && (v71 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v70 + 200LL))(*v70)) != 0LL )
      {
        v102[0] = 1;
        v22 = CVisual::FindTreeData(v71, a2);
      }
      else
      {
LABEL_38:
        lpMem = *(void **)(v3 + 80);
        if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
        {
          v22 = (struct CTreeData *)((char *)lpMem + 320);
        }
        else
        {
          v91 = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)lpMem);
          if ( v91 )
          {
            v24 = *v91;
            if ( (__int64 *)*v91 != v91 )
            {
              while ( *(const struct CVisualTree **)(v24 + 32) != a2 )
              {
                v24 = *(_QWORD *)v24;
                if ( (__int64 *)v24 == v91 )
                  goto LABEL_40;
              }
              v22 = (struct CTreeData *)(v24 - 288);
            }
          }
        }
      }
LABEL_40:
      if ( v22 )
        v16 = *((_QWORD *)v22 + 15);
    }
    if ( *(_QWORD *)(v25 + 120) < v16 )
    {
      updated = CVisual::UpdateWorldTransform((CVisual *)v3, a2, (struct CTreeData *)v25, v102[0], v22);
      v23 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, updated, 0x793u, 0LL);
    }
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x6DDu, 0LL);
    }
    else
    {
      if ( !*(_QWORD *)(v25 + 120) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2003292412, 0x65u, 0LL);
        v23 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, -2003292412, 0x6E2u, 0LL);
        ShapeData = -2003292412;
        goto LABEL_177;
      }
      v24 = (__int64)v105;
      v28 = *(_DWORD *)(v25 + 104);
      v108[0] = *(_OWORD *)(v25 + 40);
      v109 = v28;
      v29 = *(_OWORD *)(v25 + 72);
      v108[1] = *(_OWORD *)(v25 + 56);
      v108[2] = v29;
      v108[3] = *(_OWORD *)(v25 + 88);
      if ( v105 )
      {
        v57 = *(_QWORD *)(v25 + 112);
        v58 = *(_OWORD *)(v57 + 16);
        *v105 = *(_OWORD *)v57;
        v59 = *(_OWORD *)(v57 + 32);
        *(_OWORD *)(v24 + 16) = v58;
        v60 = *(_OWORD *)(v57 + 48);
        LODWORD(v57) = *(_DWORD *)(v57 + 64);
        *(_OWORD *)(v24 + 32) = v59;
        *(_OWORD *)(v24 + 48) = v60;
        *(_DWORD *)(v24 + 64) = v57;
      }
      v23 = 0;
    }
  }
LABEL_48:
  ShapeData = v23;
  if ( v23 < 0 )
  {
LABEL_177:
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x60u, 0LL);
    return (unsigned int)ShapeData;
  }
  if ( v3 == *((_QWORD *)a2 + 7) )
    goto LABEL_68;
  v31 = *(_QWORD *)a2;
  v32 = *(CVisual **)(v3 + 80);
  v111 = 0;
  v33 = -2003292412;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v31 + 200))(a2) )
  {
    v35 = (_QWORD *)((char *)v32 + 320);
  }
  else
  {
    v93 = (__int64 *)CVisual::GetTreeDataListHead(v32);
    if ( !v93 )
      goto LABEL_66;
    v34 = *v93;
    if ( (__int64 *)*v93 == v93 )
      goto LABEL_66;
    while ( 1 )
    {
      v35 = (_QWORD *)(v34 - 288);
      if ( *(const struct CVisualTree **)(v34 + 32) == a2 )
        break;
      v34 = *(_QWORD *)v34;
      if ( (__int64 *)v34 == v93 )
        goto LABEL_66;
    }
  }
  if ( v35 )
  {
    v36 = 0;
    v37 = 0LL;
    if ( v32 == *((CVisual **)a2 + 7) )
      goto LABEL_105;
    v38 = 0LL;
    if ( g_pComposition )
      v38 = *((_QWORD *)g_pComposition + 44);
    if ( *((_BYTE *)v35 + 18) && v35[35] == v38 )
      goto LABEL_58;
    v39 = (_DWORD *)*((_QWORD *)v32 + 28);
    if ( (*v39 & 0x1000000) == 0 )
      goto LABEL_58;
    v72 = (unsigned int)v39[1];
    v73 = v39 + 2;
    for ( j = 0LL; (unsigned int)j < (unsigned int)v72; ++v73 )
    {
      if ( *v73 == 8 )
        break;
      j = (unsigned int)(j + 1);
    }
    v75 = (unsigned int)j >= (unsigned int)v72
        ? 0LL
        : (_QWORD **)((char *)v39 + 8 * j - (((_BYTE)v72 + 15) & 7) + v72 + 15);
    v76 = *v75;
    if ( v76 && (v77 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v76 + 200LL))(*v76)) != 0LL )
    {
      v36 = 1;
      v37 = CVisual::FindTreeData(v77, a2);
    }
    else
    {
LABEL_58:
      v40 = (CVisual *)*((_QWORD *)v32 + 10);
      v37 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
      {
        v37 = (CVisual *)((char *)v40 + 320);
      }
      else
      {
        v94 = (__int64 *)CVisual::GetTreeDataListHead(v40);
        if ( v94 )
        {
          v34 = *v94;
          if ( (__int64 *)*v94 != v94 )
          {
            while ( *(const struct CVisualTree **)(v34 + 32) != a2 )
            {
              v34 = *(_QWORD *)v34;
              if ( (__int64 *)v34 == v94 )
                goto LABEL_60;
            }
            v37 = (struct CTreeData *)(v34 - 288);
          }
        }
      }
LABEL_60:
      v36 = 0;
    }
    if ( !v37 )
LABEL_105:
      v41 = 1LL;
    else
      v41 = *((_QWORD *)v37 + 15);
    if ( v35[15] >= v41 )
      goto LABEL_64;
    v95 = CVisual::UpdateWorldTransform(v32, a2, (struct CTreeData *)v35, v36, v37);
    v33 = v95;
    if ( v95 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v95, 0x793u, 0LL);
    if ( v33 >= 0 )
    {
LABEL_64:
      if ( !v35[15] )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, -2003292412, 0x65u, 0LL);
        v33 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0, -2003292412, 0x6E2u, 0LL);
        ShapeData = -2003292412;
        goto LABEL_198;
      }
      v33 = 0;
      v110[0] = *(_OWORD *)(v35 + 5);
      v110[1] = *(_OWORD *)(v35 + 7);
      v110[2] = *(_OWORD *)(v35 + 9);
      v110[3] = *(_OWORD *)(v35 + 11);
      v111 = *((_DWORD *)v35 + 26);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x6DDu, 0LL);
    }
  }
LABEL_66:
  ShapeData = v33;
  if ( v33 < 0 )
  {
LABEL_198:
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x68u, 0LL);
    return (unsigned int)ShapeData;
  }
  CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v110, (__int64)&v114, &v114);
LABEL_68:
  v42 = *((float *)this + 22);
  if ( v42 < v114.m128_f32[0]
    || v114.m128_f32[2] <= v42
    || (v43 = *((float *)this + 23), v43 < v114.m128_f32[1])
    || v114.m128_f32[3] <= v43 )
  {
    v49 = v101;
    v50 = v104;
    goto LABEL_82;
  }
  v44 = *(_DWORD **)(v3 + 224);
  v45 = 0LL;
  if ( (*v44 & 0x800000) == 0 )
    goto LABEL_73;
  v52 = (unsigned int)v44[1];
  v53 = v44 + 2;
  for ( k = 0LL; (unsigned int)k < (unsigned int)v52; ++v53 )
  {
    if ( *v53 == 9 )
      break;
    k = (unsigned int)(k + 1);
  }
  v55 = (unsigned int)k >= (unsigned int)v52
      ? 0LL
      : (_QWORD *)((char *)v44 + 8 * k - (((_BYTE)v52 + 15) & 7) + v52 + 15);
  if ( *v55
    && (InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3),
        *((_OWORD **)InteractionInternal + 34) != v45) )
  {
    v46 = 1;
  }
  else
  {
LABEL_73:
    v46 = 0;
  }
  v47 = (*((_BYTE *)this + 208) & 2) != 0;
  *(_BYTE *)(v3 + 93) |= 4u;
  v48 = *(CGeometry **)(v3 + 240);
  if ( !v48 )
  {
    if ( v46
      && v47
      && CHitTestContext::GetPointInLocalSpace(
           (const struct D2D_POINT_2F *)this + 11,
           (const struct CMILMatrix *)v108,
           (struct D2D_POINT_2F *)&lpMem) )
    {
      v65 = CVisual::GetInteractionInternal((CVisual *)v3);
      CInteraction::PushHoverPointer(v65, (const struct D2D_POINT_2F *)&lpMem);
    }
    goto LABEL_76;
  }
  v105 = v45;
  v106 = 0;
  ShapeData = CGeometry::GetShapeData(v48, (const struct D2D_SIZE_F *)(v3 + 132), (struct CShapePtr *)&v105);
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, ShapeData, 0x7Eu, 0LL);
  }
  else
  {
    if ( !v105
      || !CHitTestContext::GetPointInLocalSpace(
            (const struct D2D_POINT_2F *)this + 11,
            (const struct CMILMatrix *)v112,
            (struct D2D_POINT_2F *)&lpMem) )
    {
LABEL_97:
      CShapePtr::Release((CShapePtr *)&v105);
LABEL_76:
      v49 = v101;
      if ( !v101 )
      {
        v50 = v104;
LABEL_78:
        *v50 = (*(_BYTE *)(v3 + 93) & 4) != 0;
        return (unsigned int)ShapeData;
      }
      if ( CVisual::HasBspPolygonList((CVisual *)v3) && (*(_BYTE *)(v3 + 93) & 4) != 0 )
      {
        v113 = 0;
        v102[0] = 0;
        CVisual::CalcCpuClippingTransform(v3, 5, (__int64)a2, 0LL, v102, (CMILMatrix *)v112, 0LL);
        CMatrixStack::Push((CHitTestContext *)((char *)this + 176), (const struct CMILMatrix *)v112, 0);
        *(_BYTE *)(v107 + 288) |= 1u;
        LODWORD(v98) = CVisual::GetBspPolygonListCount((CVisual *)v3);
        if ( (_DWORD)v98 )
        {
          while ( !*((_QWORD *)this + 14) )
          {
            v98 = (unsigned int)(v98 - 1);
            BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v3);
            ShapeData = CHitTestContext::BspHitTest(
                          this,
                          (const struct CMILMatrix *)v108,
                          *(struct CPolygon **)(*BspPolygonList + 8 * v98));
            if ( ShapeData < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v100, 0LL, 0, ShapeData, 0xADu, 0LL);
              return (unsigned int)ShapeData;
            }
            if ( !(_DWORD)v98 )
              break;
          }
        }
      }
      v50 = v104;
      *v104 = 0;
LABEL_82:
      if ( v49 )
        return (unsigned int)ShapeData;
      goto LABEL_78;
    }
    ShapeData = CShapePtr::FillContainsPoint((CShapePtr *)&v105, (const struct D2D_POINT_2F *)&lpMem, v102);
    if ( ShapeData >= 0 )
    {
      *(_BYTE *)(v3 + 93) ^= (*(_BYTE *)(v3 + 93) ^ (4 * v102[0])) & 4;
      if ( (*(_BYTE *)(v3 + 93) & 4) != 0 && v46 && v47 )
      {
        v97 = CVisual::GetInteractionInternal((CVisual *)v3);
        CInteraction::PushHoverPointer(v97, (const struct D2D_POINT_2F *)&lpMem);
      }
      goto LABEL_97;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, ShapeData, 0x86u, 0LL);
  }
  CShapePtr::Release((CShapePtr *)&v105);
  return (unsigned int)ShapeData;
}
