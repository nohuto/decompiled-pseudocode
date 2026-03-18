/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B070
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x18002B4DC (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 * Callees:
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180045CC0 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x180045DE8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180045EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004962C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18004A6C4 (--0CTreeData@@IEAA@XZ.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B314 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B660 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVisual@@@@@Z @ 0x18004C19C (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGraph.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        __int64 a2,
        const void *a3,
        CHitTestContext *a4,
        bool a5)
{
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 i; // rsi
  struct _LIST_ENTRY *v13; // rbx
  struct _LIST_ENTRY *v14; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // r14
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned __int64 Count; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rax
  bool v26; // zf
  bool v27; // al
  __int64 v28; // rcx
  int v29; // r9d
  CPtrArrayBase *v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // eax
  __int64 v37; // rcx
  int v38; // r9d
  __int64 v39; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  struct CTreeData *UnusedTreeData; // r11
  _DWORD *v44; // r10
  __int64 v45; // rcx
  unsigned int Slot; // eax
  __int64 v47; // r10
  CTreeData *v48; // rax
  unsigned int v49; // eax
  int v50; // edx
  unsigned int v51; // ecx
  unsigned int v52; // [rsp+20h] [rbp-58h]
  __int64 v53; // [rsp+30h] [rbp-48h] BYREF
  int v54; // [rsp+38h] [rbp-40h]
  __int128 v55; // [rsp+40h] [rbp-38h]
  bool v56; // [rsp+80h] [rbp+8h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0,
    0,
    (__int64)a4);
  *(_DWORD *)(a1 + 72) = 4;
  v9 = CGraphWalker<CVisual>::BeginWalk(a1, a2, a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD6u, 0LL);
    return v11;
  }
  for ( i = *(_QWORD *)(a1 + 8); ; i = v25 )
  {
LABEL_3:
    if ( (*(_BYTE *)(i + 103) & 2) == 0 && i != a2 )
      goto LABEL_21;
    v13 = *(struct _LIST_ENTRY **)(a1 + 64);
    if ( v13 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_QWORD))v13->Flink[11].Blink)(*(_QWORD *)(a1 + 64)) )
      {
        TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)i);
        if ( TreeDataListHead )
        {
          for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
          {
            v14 = j - 24;
            if ( j[2].Flink == v13 )
              goto LABEL_7;
          }
        }
LABEL_50:
        UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
        if ( UnusedTreeData )
        {
          v44 = *(_DWORD **)(i + 232);
          if ( (*v44 & 0x8000000) != 0 )
          {
            v45 = *(_QWORD *)(i + 232);
            *v44 &= ~0x8000000u;
            Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v45, 5LL);
            if ( Slot < *(_DWORD *)(v47 + 4) )
              *(_BYTE *)(Slot + v47 + 8) = 0;
          }
        }
        else
        {
          v48 = (CTreeData *)operator new(0x1A8uLL);
          if ( v48 )
          {
            CTreeData::CTreeData(v48);
            *((_QWORD *)UnusedTreeData + 52) = 0LL;
            *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
          }
          else
          {
            UnusedTreeData = 0LL;
          }
        }
        (*(void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, __int64))(*(_QWORD *)UnusedTreeData + 8LL))(
          UnusedTreeData,
          v13,
          i);
        goto LABEL_8;
      }
      v14 = (struct _LIST_ENTRY *)(i + 336);
LABEL_7:
      if ( !v14 )
        goto LABEL_50;
    }
LABEL_8:
    v15 = CHitTestContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &v56);
    v11 = v15;
    if ( v15 < 0 )
      break;
    if ( !v56 )
      goto LABEL_21;
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
    if ( (v17 & 2) != 0 )
      v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v17) = v17 & 1;
    if ( !(_DWORD)v17 )
    {
      v11 = 1;
      goto LABEL_21;
    }
    v53 = *(_QWORD *)(a1 + 16);
    v54 = *(_DWORD *)(a1 + 24);
    v18 = CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Push(a1 + 32, &v53);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x87u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v11, 0x105u, 0LL);
      goto LABEL_39;
    }
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v20 = 0;
    else
      v20 = v17 - 1;
    *(_DWORD *)(a1 + 24) = v20;
    Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(*(_QWORD *)(a1 + 8) + 80LL));
    if ( Count <= v22 )
      v25 = 0LL;
    else
      v25 = CPtrArrayBase::operator[](v23, v22);
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v24;
    *(_QWORD *)(a1 + 8) = v25;
    if ( !v25 )
    {
      while ( 1 )
      {
LABEL_21:
        v26 = (*(_BYTE *)(i + 103) & 2) == 0;
        v27 = 1;
        a5 = 1;
        if ( !v26 || i == a2 )
        {
          v15 = CHitTestContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &a5);
          v11 = v15;
          if ( v15 < 0 )
          {
            v52 = 290;
            goto LABEL_69;
          }
          v27 = a5;
        }
        v28 = *(_QWORD *)(a1 + 16);
        if ( !v27 )
          goto LABEL_33;
        if ( v28 )
        {
          v29 = *(_DWORD *)(a1 + 28);
          if ( v29 == 1 )
          {
            if ( *(_DWORD *)(a1 + 24) != -1 )
            {
              v49 = CPtrArrayBase::GetCount((CPtrArrayBase *)(v28 + 80));
              if ( v50 + 1 < v49 )
                goto LABEL_30;
            }
          }
          else if ( !v29 && *(_DWORD *)(a1 + 24) )
          {
            v30 = (CPtrArrayBase *)(v28 + 80);
LABEL_30:
            v31 = CPtrArrayBase::GetCount(v30);
            if ( v31 <= v32 )
              v34 = 0LL;
            else
              v34 = CPtrArrayBase::operator[](v33, v32);
            v11 = 0;
            *(_QWORD *)(a1 + 8) = v34;
            *(_DWORD *)(a1 + 24) = v32;
            i = v34;
            if ( v34 )
              goto LABEL_3;
            goto LABEL_33;
          }
        }
        v11 = 1;
LABEL_33:
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
            v55 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v39);
            v38 = DWORD2(v55);
            v37 = v55;
          }
          i = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = i;
          *(_QWORD *)(a1 + 16) = v37;
          *(_DWORD *)(a1 + 24) = v38;
          *(_DWORD *)(a1 + 4) = v35 - 1;
          if ( i )
            continue;
        }
        if ( v11 == 1 )
          v11 = 0;
        goto LABEL_39;
      }
    }
  }
  v52 = 241;
LABEL_69:
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v52, 0LL);
LABEL_39:
  CGraphWalker<CVisual>::EndWalk(a1, (__int64)a3);
  return v11;
}
