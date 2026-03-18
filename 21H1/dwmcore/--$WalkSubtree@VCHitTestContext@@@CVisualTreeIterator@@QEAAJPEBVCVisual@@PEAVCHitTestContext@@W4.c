/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18007B750
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180035438 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18002C9E8 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18003B2A8 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BDC0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007C654 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007D478 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007D750 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18007D7F8 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18007E954 (--0CTreeData@@IEAA@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A9060 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800B6888 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800BAFC8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800BB07C (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCC1C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800BCDA8 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800C14A0 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801E0A60 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180212EB4 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
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
  __int64 v44; // rdx
  __int64 v45; // r8
  int WorldTransform; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __int64 v52; // r11
  __int64 v53; // r8
  unsigned __int64 *v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // r8
  struct CEffect *EffectInternal; // rax
  __int64 v59; // rax
  _BYTE *v60; // rdx
  __int64 *v61; // rax
  __int64 v62; // rax
  unsigned int v63; // r12d
  int v64; // eax
  __int64 v65; // rcx
  unsigned __int64 v66; // rax
  void *v67; // rdi
  struct _LIST_ENTRY *v68; // rax
  struct _LIST_ENTRY *v69; // r10
  struct CTreeData *UnusedTreeData; // r10
  _DWORD *v71; // r11
  __int64 v72; // rcx
  unsigned int Slot; // eax
  __int64 v74; // r11
  const unsigned int *v75; // rax
  CTreeData *v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rcx
  void *v79; // r12
  HANDLE ProcessHeap; // rax
  __int64 *TreeDataListHead; // rax
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v84; // eax
  struct CInteraction *InteractionInternal; // rax
  _OWORD *v86; // rdx
  unsigned int Count; // eax
  unsigned int v88; // [rsp+28h] [rbp-99h]
  bool lpMem; // [rsp+38h] [rbp-89h] BYREF
  void *lpMem_8[2]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v91; // [rsp+50h] [rbp-71h] BYREF
  struct D2D_POINT_2F v92; // [rsp+58h] [rbp-69h] BYREF
  __int128 v93; // [rsp+60h] [rbp-61h] BYREF
  __int128 v94; // [rsp+70h] [rbp-51h]
  _BYTE v95[64]; // [rsp+88h] [rbp-39h] BYREF
  int v96; // [rsp+C8h] [rbp+7h]
  char v97; // [rsp+128h] [rbp+67h] BYREF
  __int64 v98; // [rsp+130h] [rbp+6Fh]
  __int64 v99; // [rsp+138h] [rbp+77h]
  int v100; // [rsp+140h] [rbp+7Fh]

  v100 = a4;
  v99 = a3;
  v98 = a2;
  v5 = a2;
  v6 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0LL,
    0LL);
  v91 = v5;
  *(_DWORD *)(a1 + 72) = 4;
  v7 = CGraphWalker<CVisual>::BeginWalk(a1, &v91);
  v9 = v7;
  if ( v7 < 0 )
  {
    v88 = 207;
    goto LABEL_174;
  }
  for ( i = *(_QWORD *)(a1 + 8); ; i = v14 )
  {
LABEL_3:
    if ( (*(_BYTE *)(i + 95) & 2) == 0 && i != v5 )
    {
      while ( 1 )
      {
LABEL_34:
        v26 = 1;
        if ( (*(_BYTE *)(i + 95) & 2) == 0 && i != v5 )
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
        if ( *(_QWORD *)(v99 + 112) )
          break;
        LOBYTE(v100) = *(_DWORD *)(v28 + 100) == 1;
        v41 = v29 && *(_DWORD *)(v29 + 100) == 1;
        v42 = 1;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 224LL))(v28) )
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
        if ( (_BYTE)v100 )
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
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 264LL))(v28);
        v6 = v99;
        if ( !v43 )
          goto LABEL_39;
        if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference(
                          v99 + 144,
                          v44,
                          v45) == 1 )
        {
          Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v28);
          if ( Transform3DEffectNoRef )
          {
            Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v28 + 132));
            if ( !CMILMatrix::IsFacingUser(Matrix) )
              goto LABEL_39;
          }
        }
        v96 = 0;
        WorldTransform = CVisual::GetWorldTransform(v28, v27, 4LL, v95, 0LL, 0LL);
        v9 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, WorldTransform, 0xE6u, 0LL);
        }
        else
        {
          if ( !CHitTestContext::GetPointInLocalSpace(
                  (const struct D2D_POINT_2F *)(v6 + 88),
                  (const struct CMILMatrix *)v95,
                  &v92) )
            goto LABEL_39;
          v97 = 0;
          if ( (*(_BYTE *)(v6 + 208) & 1) != 0 )
            v48 = 1LL;
          else
            LOBYTE(v48) = 0;
          v49 = (*(__int64 (__fastcall **)(__int64, __int64, struct D2D_POINT_2F *, char *))(*(_QWORD *)v28 + 304LL))(
                  v28,
                  v48,
                  &v92,
                  &v97);
          v9 = v49;
          if ( v49 >= 0 )
          {
            if ( v97 )
              *(_QWORD *)(v6 + 112) = v28;
            goto LABEL_39;
          }
          MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0, v49, 0xEEu, 0LL);
        }
LABEL_46:
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0, v9, 0x110u, 0LL);
          goto LABEL_53;
        }
        v5 = v98;
LABEL_48:
        v34 = *(_QWORD *)(a1 + 16);
        if ( v26 )
        {
          v9 = 0;
          i = 0LL;
          if ( !v34 )
            goto LABEL_102;
          v50 = *(_DWORD *)(a1 + 28);
          if ( v50 == 1 )
          {
            if ( *(_DWORD *)(a1 + 24) == -1 )
              goto LABEL_102;
            Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v34 + 72));
            if ( (unsigned int)v52 >= Count )
              goto LABEL_102;
LABEL_78:
            v53 = *(_QWORD *)(v34 + 72);
            if ( (v53 & 2) != 0 )
            {
              v54 = (unsigned __int64 *)(v53 & 0xFFFFFFFFFFFFFFFCuLL);
              v55 = v53 & 1;
              v56 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            else
            {
              v56 = v53 & 1;
              v55 = v56;
              v54 = (unsigned __int64 *)(v53 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            if ( v56 <= (unsigned int)v52 )
              goto LABEL_168;
            if ( (v53 & 2) != 0 )
              v55 = *v54;
            if ( (unsigned int)v52 >= v55 )
            {
LABEL_168:
              v57 = 0LL;
            }
            else if ( v55 == 1 )
            {
              v57 = v53 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            else
            {
              v57 = v54[v52 + 2];
            }
            *(_QWORD *)(a1 + 8) = v57;
            i = v57;
            *(_DWORD *)(a1 + 24) = v52;
          }
          else
          {
            if ( !v50 )
            {
              v51 = *(_DWORD *)(a1 + 24);
              if ( v51 )
              {
                v52 = (unsigned int)(v51 - 1);
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
      v6 = v99;
LABEL_39:
      if ( *(_DWORD *)(v28 + 200) != -1 )
      {
        v32 = *(_DWORD *)(v6 + 144);
        if ( v32 )
          *(_DWORD *)(v6 + 144) = v32 - 1;
      }
      if ( (*(_BYTE *)(v30 + 288) & 1) != 0 )
      {
        v84 = *(_DWORD *)(v6 + 176);
        if ( v84 )
          *(_DWORD *)(v6 + 176) = v84 - 1;
      }
      if ( *(_QWORD *)(v6 + 112) )
      {
        v33 = *(_DWORD **)(v28 + 224);
        if ( (*v33 & 0x800000) == 0 )
          goto LABEL_45;
        v59 = (unsigned int)v33[1];
        v60 = v33 + 2;
        for ( j = 0LL; (unsigned int)j < (unsigned int)v59; ++v60 )
        {
          if ( *v60 == 9 )
            break;
          j = (unsigned int)(j + 1);
        }
        if ( (unsigned int)j >= (unsigned int)v59 )
        {
          v61 = 0LL;
        }
        else
        {
          j = 8 * j - (((_BYTE)v59 + 15) & 7);
          v61 = (__int64 *)((char *)v33 + v59 + j + 15);
        }
        v62 = *v61;
        if ( v62 && (*(_BYTE *)(v62 + 184) & 4) != 0 )
        {
          *(_QWORD *)&v93 = *(_QWORD *)(v6 + 112);
          InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v28);
          v86 = *(_OWORD **)(v6 + 128);
          *((_QWORD *)&v93 + 1) = InteractionInternal;
          if ( *(_OWORD **)(v6 + 136) == v86 )
          {
            std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
              v6 + 120,
              v86,
              &v93);
          }
          else
          {
            *v86 = v93;
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
      v68 = CVisual::GetTreeDataListHead((CVisual *)i);
      v69 = v68;
      if ( !v68 )
        goto LABEL_118;
      Flink = v68->Flink;
      if ( v68->Flink == v68 )
        goto LABEL_118;
      while ( 1 )
      {
        v13 = Flink - 18;
        if ( Flink[2].Flink == v11 )
          break;
        Flink = Flink->Flink;
        if ( Flink == v69 )
          goto LABEL_118;
      }
    }
    if ( v13 )
      goto LABEL_8;
LABEL_118:
    UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
    if ( UnusedTreeData )
    {
      v71 = *(_DWORD **)(i + 224);
      if ( (*v71 & 0x8000000) != 0 )
      {
        v72 = *(_QWORD *)(i + 224);
        *v71 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v72, 5LL);
        if ( Slot < *(_DWORD *)(v74 + 4) )
          *(_BYTE *)(Slot + v74 + 8) = 0;
      }
      v75 = *(const unsigned int **)UnusedTreeData;
      goto LABEL_125;
    }
    v76 = (CTreeData *)operator new(0x148uLL);
    if ( v76 )
    {
      CTreeData::CTreeData(v76);
      v75 = &CVisualTreeData::`vftable';
      *v78 = &CVisualTreeData::`vftable';
      v78[40] = 0LL;
LABEL_125:
      (*((void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, unsigned __int64))v75 + 1))(
        UnusedTreeData,
        v11,
        i);
      goto LABEL_8;
    }
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, -2147024882, 0x133Eu, 0LL);
LABEL_8:
    if ( v9 < 0 )
      break;
LABEL_9:
    v7 = CHitTestContext::PreSubgraph((CHitTestContext *)v6, *(const struct CVisualTree **)(a1 + 64), &lpMem);
    v9 = v7;
    if ( v7 < 0 )
    {
      v88 = 229;
LABEL_174:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, v7, v88, 0LL);
      goto LABEL_53;
    }
    if ( !lpMem )
    {
      v5 = v98;
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
    *(_QWORD *)&v94 = *(_QWORD *)(a1 + 16);
    DWORD2(v94) = *(_DWORD *)(a1 + 24);
    v17 = *(_DWORD *)(a1 + 32);
    lpMem_8[0] = 0LL;
    if ( v17 != (_DWORD)v16 )
      goto LABEL_15;
    v63 = 2 * v16;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v9 = -2147024362;
LABEL_132:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v20, 0x8Bu, 0LL);
      goto LABEL_30;
    }
    if ( v63 <= 0x40 )
      v63 = 64;
    v64 = HrMalloc(0x10uLL, v63, lpMem_8);
    v20 = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x53u, 0LL);
    }
    else
    {
      v66 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v66 <= 0xFFFFFFFF )
      {
        v67 = lpMem_8[0];
        memcpy_0(lpMem_8[0], *(const void **)(a1 + 48), (unsigned int)v66);
        operator delete(*(void **)(a1 + 48));
        v17 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v67;
        *(_DWORD *)(a1 + 36) = v63;
LABEL_15:
        v18 = 2LL * v17;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v17) = v94;
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
    v79 = lpMem_8[0];
    if ( lpMem_8[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v79);
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
    v5 = v98;
    if ( !v14 )
      goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, v9, 0xE1u, 0LL);
LABEL_53:
  if ( v9 == 1 || v9 == -2147467260 )
    v9 = 0;
  CGraphWalker<CVisual>::EndWalk(a1, v91);
  return (unsigned int)v9;
}
