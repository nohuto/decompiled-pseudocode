/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A0B40
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x18009D7BC (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180058908 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180066514 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180066BDC (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18009E02C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x18009E048 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18009E254 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A11B0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A1AD0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A1FB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800A2DD8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A2F98 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800A3040 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A4194 (--0CTreeData@@IEAA@XZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BEFCC (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C3708 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801DE0E0 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1802104F4 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(__int64 a1, void *a2, __int64 a3, int a4)
{
  void *v5; // rdi
  __int64 v6; // r13
  int v7; // eax
  unsigned __int64 *v8; // rcx
  int v9; // r12d
  unsigned __int64 i; // rsi
  struct _LIST_ENTRY *v11; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // r11
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r10
  char v26; // r15
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 j; // rcx
  int v32; // eax
  _DWORD *v33; // r9
  __int64 v34; // rdx
  int v35; // eax
  int v36; // ecx
  void *v37; // rdx
  int v38; // r8d
  __int64 v39; // rcx
  bool v41; // r13
  bool v42; // al
  char v43; // al
  int WorldTransform; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // r11
  __int64 v51; // r8
  unsigned __int64 *v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r10
  unsigned __int64 v55; // r8
  struct CEffect *EffectInternal; // rax
  __int64 v57; // rax
  _BYTE *v58; // rdx
  __int64 *v59; // rax
  __int64 v60; // rax
  unsigned int v61; // r12d
  int v62; // eax
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  void *v65; // rdi
  struct _LIST_ENTRY *v66; // rax
  struct _LIST_ENTRY *v67; // r10
  struct CTreeData *UnusedTreeData; // r10
  _DWORD *v69; // r11
  __int64 v70; // rcx
  unsigned int Slot; // eax
  __int64 v72; // r11
  const unsigned int *v73; // rax
  CTreeData *v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // rcx
  void *v77; // r12
  HANDLE ProcessHeap; // rax
  __int64 *TreeDataListHead; // rax
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v82; // eax
  struct CInteraction *InteractionInternal; // rax
  _OWORD *v84; // rdx
  unsigned int Count; // eax
  unsigned int v86; // [rsp+28h] [rbp-99h]
  bool lpMem; // [rsp+38h] [rbp-89h] BYREF
  void *lpMem_8[2]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v89; // [rsp+50h] [rbp-71h] BYREF
  struct D2D_POINT_2F v90; // [rsp+58h] [rbp-69h] BYREF
  __int128 v91; // [rsp+60h] [rbp-61h] BYREF
  __int128 v92; // [rsp+70h] [rbp-51h]
  _BYTE v93[64]; // [rsp+88h] [rbp-39h] BYREF
  int v94; // [rsp+C8h] [rbp+7h]
  char v95; // [rsp+128h] [rbp+67h] BYREF
  void *v96; // [rsp+130h] [rbp+6Fh]
  __int64 v97; // [rsp+138h] [rbp+77h]
  int v98; // [rsp+140h] [rbp+7Fh]

  v98 = a4;
  v97 = a3;
  v96 = a2;
  v5 = a2;
  v6 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0LL,
    0LL);
  v89 = (__int64)v5;
  *(_DWORD *)(a1 + 72) = 4;
  v7 = CGraphWalker<CVisual>::BeginWalk(a1, (void **)&v89);
  v9 = v7;
  if ( v7 < 0 )
  {
    v86 = 207;
    goto LABEL_174;
  }
  for ( i = *(_QWORD *)(a1 + 8); ; i = v14 )
  {
LABEL_3:
    if ( (*(_BYTE *)(i + 95) & 2) == 0 && (void *)i != v5 )
    {
      while ( 1 )
      {
LABEL_34:
        v26 = 1;
        if ( (*(_BYTE *)(i + 95) & 2) == 0 && (void *)i != v5 )
          goto LABEL_48;
        v27 = *(_QWORD *)(a1 + 64);
        v9 = 0;
        v28 = *(_QWORD *)(v6 + 16);
        v29 = *(_QWORD *)(v6 + 24);
        v30 = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 200LL))(v27) )
        {
          v30 = v28 + 320;
        }
        else
        {
          TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v28);
          if ( TreeDataListHead )
          {
            j = *TreeDataListHead;
            if ( (__int64 *)*TreeDataListHead != TreeDataListHead )
            {
              while ( *(_QWORD *)(j + 32) != v27 )
              {
                j = *(_QWORD *)j;
                if ( (__int64 *)j == TreeDataListHead )
                  goto LABEL_37;
              }
              v30 = j - 288;
            }
          }
        }
LABEL_37:
        if ( *(_QWORD *)(v97 + 112) )
          break;
        LOBYTE(v98) = *(_DWORD *)(v28 + 100) == 1;
        v41 = v29 && *(_DWORD *)(v29 + 100) == 1;
        v42 = 1;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 232LL))(v28) )
        {
          if ( (**(_DWORD **)(v28 + 224) & 0x400000) == 0
            || (EffectInternal = CVisual::GetEffectInternal((CVisual *)v28),
                !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                   EffectInternal,
                   59LL)) )
          {
            v42 = 0;
          }
        }
        if ( (_BYTE)v98 )
        {
          if ( v41 )
          {
            if ( v42 )
              break;
          }
          else if ( (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v28 + 72)) )
          {
            break;
          }
        }
        if ( (*(_BYTE *)(v28 + 93) & 4) == 0 )
          break;
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 272LL))(v28);
        v6 = v97;
        if ( !v43 )
          goto LABEL_39;
        if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference(v97 + 144) == 1 )
        {
          Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v28);
          if ( Transform3DEffectNoRef )
          {
            Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v28 + 132));
            if ( !CMILMatrix::IsFacingUser(Matrix) )
              goto LABEL_39;
          }
        }
        v94 = 0;
        WorldTransform = CVisual::GetWorldTransform(v28, v27, 4LL, v93, 0LL, 0LL);
        v9 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, WorldTransform, 0x116u, 0LL);
        }
        else
        {
          if ( !CHitTestContext::GetPointInLocalSpace(
                  (const struct D2D_POINT_2F *)(v6 + 88),
                  (const struct CMILMatrix *)v93,
                  &v90) )
            goto LABEL_39;
          v95 = 0;
          if ( (*(_BYTE *)(v6 + 208) & 1) != 0 )
            v46 = 1LL;
          else
            LOBYTE(v46) = 0;
          v47 = (*(__int64 (__fastcall **)(__int64, __int64, struct D2D_POINT_2F *, char *))(*(_QWORD *)v28 + 312LL))(
                  v28,
                  v46,
                  &v90,
                  &v95);
          v9 = v47;
          if ( v47 >= 0 )
          {
            if ( v95 )
              *(_QWORD *)(v6 + 112) = v28;
            goto LABEL_39;
          }
          MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0, v47, 0x11Eu, 0LL);
        }
LABEL_46:
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0, v9, 0x110u, 0LL);
          goto LABEL_53;
        }
        v5 = v96;
LABEL_48:
        v34 = *(_QWORD *)(a1 + 16);
        if ( v26 )
        {
          v9 = 0;
          i = 0LL;
          if ( !v34 )
            goto LABEL_102;
          v48 = *(_DWORD *)(a1 + 28);
          if ( v48 == 1 )
          {
            if ( *(_DWORD *)(a1 + 24) == -1 )
              goto LABEL_102;
            Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v34 + 72));
            if ( (unsigned int)v50 >= Count )
              goto LABEL_102;
LABEL_78:
            v51 = *(_QWORD *)(v34 + 72);
            if ( (v51 & 2) != 0 )
            {
              v52 = (unsigned __int64 *)(v51 & 0xFFFFFFFFFFFFFFFCuLL);
              v53 = v51 & 1;
              v54 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            else
            {
              v54 = v51 & 1;
              v53 = v54;
              v52 = (unsigned __int64 *)(v51 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            if ( v54 <= (unsigned int)v50 )
              goto LABEL_168;
            if ( (v51 & 2) != 0 )
              v53 = *v52;
            if ( (unsigned int)v50 >= v53 )
            {
LABEL_168:
              v55 = 0LL;
            }
            else if ( v53 == 1 )
            {
              v55 = v51 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            else
            {
              v55 = v52[v50 + 2];
            }
            *(_QWORD *)(a1 + 8) = v55;
            i = v55;
            *(_DWORD *)(a1 + 24) = v50;
          }
          else
          {
            if ( !v48 )
            {
              v49 = *(_DWORD *)(a1 + 24);
              if ( v49 )
              {
                v50 = (unsigned int)(v49 - 1);
                goto LABEL_78;
              }
            }
LABEL_102:
            v9 = 1;
          }
          if ( i )
            goto LABEL_3;
        }
        v35 = *(_DWORD *)(a1 + 4);
        if ( v35 )
        {
          v36 = *(_DWORD *)(a1 + 32);
          v37 = 0LL;
          v38 = 0;
          if ( v36 )
          {
            v39 = (unsigned int)(v36 - 1);
            *(_DWORD *)(a1 + 32) = v39;
            v35 = *(_DWORD *)(a1 + 4);
            *(_OWORD *)lpMem_8 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v39);
            v38 = (int)lpMem_8[1];
            v37 = lpMem_8[0];
          }
          i = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = i;
          *(_QWORD *)(a1 + 16) = v37;
          *(_DWORD *)(a1 + 24) = v38;
          *(_DWORD *)(a1 + 4) = v35 - 1;
          if ( i )
            continue;
        }
        goto LABEL_53;
      }
      v6 = v97;
LABEL_39:
      if ( *(_DWORD *)(v28 + 200) != -1 )
      {
        v32 = *(_DWORD *)(v6 + 144);
        if ( v32 )
          *(_DWORD *)(v6 + 144) = v32 - 1;
      }
      if ( (*(_BYTE *)(v30 + 288) & 1) != 0 )
      {
        v82 = *(_DWORD *)(v6 + 176);
        if ( v82 )
          *(_DWORD *)(v6 + 176) = v82 - 1;
      }
      if ( *(_QWORD *)(v6 + 112) )
      {
        v33 = *(_DWORD **)(v28 + 224);
        if ( (*v33 & 0x800000) == 0 )
          goto LABEL_45;
        v57 = (unsigned int)v33[1];
        v58 = v33 + 2;
        for ( j = 0LL; (unsigned int)j < (unsigned int)v57; ++v58 )
        {
          if ( *v58 == 9 )
            break;
          j = (unsigned int)(j + 1);
        }
        if ( (unsigned int)j >= (unsigned int)v57 )
        {
          v59 = 0LL;
        }
        else
        {
          j = 8 * j - (((_BYTE)v57 + 15) & 7);
          v59 = (__int64 *)((char *)v33 + v57 + j + 15);
        }
        v60 = *v59;
        if ( v60 && (*(_BYTE *)(v60 + 184) & 4) != 0 )
        {
          *(_QWORD *)&v91 = *(_QWORD *)(v6 + 112);
          InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v28);
          v84 = *(_OWORD **)(v6 + 128);
          *((_QWORD *)&v91 + 1) = InteractionInternal;
          if ( *(_OWORD **)(v6 + 136) == v84 )
          {
            std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
              v6 + 120,
              v84,
              &v91);
          }
          else
          {
            *v84 = v91;
            *(_QWORD *)(v6 + 128) += 16LL;
          }
          *(_QWORD *)(v6 + 112) = 0LL;
        }
        else
        {
LABEL_45:
          v26 = 0;
        }
      }
      goto LABEL_46;
    }
    v11 = *(struct _LIST_ENTRY **)(a1 + 64);
    if ( !v11 )
      goto LABEL_9;
    v9 = 0;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD))v11->Flink[12].Blink)(*(_QWORD *)(a1 + 64)) )
    {
      v13 = (struct _LIST_ENTRY *)(i + 320);
    }
    else
    {
      v66 = CVisual::GetTreeDataListHead((CVisual *)i);
      v67 = v66;
      if ( !v66 )
        goto LABEL_118;
      Flink = v66->Flink;
      if ( v66->Flink == v66 )
        goto LABEL_118;
      while ( 1 )
      {
        v13 = Flink - 18;
        if ( Flink[2].Flink == v11 )
          break;
        Flink = Flink->Flink;
        if ( Flink == v67 )
          goto LABEL_118;
      }
    }
    if ( v13 )
      goto LABEL_8;
LABEL_118:
    UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
    if ( UnusedTreeData )
    {
      v69 = *(_DWORD **)(i + 224);
      if ( (*v69 & 0x8000000) != 0 )
      {
        v70 = *(_QWORD *)(i + 224);
        *v69 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v70, 5LL);
        if ( Slot < *(_DWORD *)(v72 + 4) )
          *(_BYTE *)(Slot + v72 + 8) = 0;
      }
      v73 = *(const unsigned int **)UnusedTreeData;
      goto LABEL_125;
    }
    v74 = (CTreeData *)operator new(0x148uLL);
    if ( v74 )
    {
      CTreeData::CTreeData(v74);
      v73 = &CVisualTreeData::`vftable';
      *v76 = &CVisualTreeData::`vftable';
      v76[40] = 0LL;
LABEL_125:
      (*((void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, unsigned __int64))v73 + 1))(
        UnusedTreeData,
        v11,
        i);
      goto LABEL_8;
    }
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, -2147024882, 0x133Eu, 0LL);
LABEL_8:
    if ( v9 < 0 )
      break;
LABEL_9:
    v7 = CHitTestContext::PreSubgraph((CHitTestContext *)v6, *(const struct CVisualTree **)(a1 + 64), &lpMem);
    v9 = v7;
    if ( v7 < 0 )
    {
      v86 = 229;
LABEL_174:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, v7, v86, 0LL);
      goto LABEL_53;
    }
    if ( !lpMem )
    {
      v5 = v96;
      goto LABEL_34;
    }
    v14 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v15 & 2) != 0 )
      v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v15) = v15 & 1;
    if ( !(_DWORD)v15 )
    {
      v9 = 1;
      goto LABEL_30;
    }
    v16 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v92 = *(_QWORD *)(a1 + 16);
    DWORD2(v92) = *(_DWORD *)(a1 + 24);
    v17 = *(_DWORD *)(a1 + 32);
    lpMem_8[0] = 0LL;
    if ( v17 != (_DWORD)v16 )
      goto LABEL_15;
    v61 = 2 * v16;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v9 = -2147024362;
LABEL_132:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v20, 0x8Bu, 0LL);
      goto LABEL_30;
    }
    if ( v61 <= 0x40 )
      v61 = 64;
    v62 = HrMalloc(0x10uLL, v61, lpMem_8);
    v20 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x53u, 0LL);
    }
    else
    {
      v64 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v64 <= 0xFFFFFFFF )
      {
        v65 = lpMem_8[0];
        memcpy_0(lpMem_8[0], *(const void **)(a1 + 48), (unsigned int)v64);
        operator delete(*(void **)(a1 + 48));
        v17 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v65;
        *(_DWORD *)(a1 + 36) = v61;
LABEL_15:
        v18 = 2LL * v17;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v17) = v92;
        ++*(_DWORD *)(a1 + 32);
        v19 = *(_DWORD *)(a1 + 56);
        if ( v19 <= *(_DWORD *)(a1 + 32) )
          v19 = *(_DWORD *)(a1 + 32);
        v20 = 0;
        *(_DWORD *)(a1 + 56) = v19;
        goto LABEL_18;
      }
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v77 = lpMem_8[0];
    if ( lpMem_8[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v77);
    }
LABEL_18:
    v9 = v20;
    if ( v20 < 0 )
      goto LABEL_132;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v21 = 0LL;
    else
      v21 = (unsigned int)(v15 - 1);
    *(_DWORD *)(a1 + 24) = v21;
    v22 = *(_QWORD *)(a1 + 8);
    v23 = *(_QWORD *)(v22 + 72) & 2LL;
    v24 = *(_QWORD *)(v22 + 72) & 1LL;
    v8 = (unsigned __int64 *)(*(_QWORD *)(v22 + 72) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v23 )
      v25 = *v8;
    else
      v25 = (unsigned int)v24;
    if ( v25 <= (unsigned int)v21 )
      goto LABEL_134;
    if ( v23 )
      v24 = *v8;
    if ( (unsigned int)v21 >= v24 )
    {
LABEL_134:
      v14 = 0LL;
    }
    else if ( v24 == 1 )
    {
      v14 = *(_QWORD *)(v22 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v14 = v8[v21 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 8) = v14;
LABEL_30:
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, v9, 0xF4u, 0LL);
      goto LABEL_53;
    }
    v5 = v96;
    if ( !v14 )
      goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, v9, 0xE1u, 0LL);
LABEL_53:
  if ( v9 == 1 || v9 == -2147467260 )
    v9 = 0;
  CGraphWalker<CVisual>::EndWalk(a1, v89);
  return (unsigned int)v9;
}
