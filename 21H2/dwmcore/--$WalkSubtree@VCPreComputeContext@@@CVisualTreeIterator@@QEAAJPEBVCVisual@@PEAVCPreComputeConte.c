/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180088360
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18008E370 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180042320 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180055FE8 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180058C3C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180058D44 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088930 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008A040 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18009FF88 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A0F98 (--0CTreeData@@IEAA@XZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800C1B24 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800C666C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        void *a2,
        CPreComputeContext *a3,
        int a4)
{
  int v7; // eax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rbp
  void *v11; // rdi
  unsigned __int64 i; // rbp
  struct _LIST_ENTRY *v13; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v15; // rax
  int v16; // eax
  unsigned __int64 *v17; // rcx
  char v18; // al
  unsigned __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r8
  int v27; // eax
  void *v28; // rdx
  int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 result; // rax
  unsigned __int64 v34; // r15
  __int64 v35; // r14
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // eax
  int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // r11
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v47; // r10
  struct CTreeData *UnusedTreeData; // r10
  CTreeData *v49; // rax
  __int64 v50; // rcx
  const unsigned int *v51; // rax
  _QWORD *v52; // rcx
  _DWORD *v53; // r11
  __int64 v54; // rcx
  unsigned int Slot; // eax
  __int64 v56; // r11
  unsigned int v57; // esi
  int v58; // eax
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  void *v61; // rdi
  void *v62; // rsi
  HANDLE ProcessHeap; // rax
  int v64; // edx
  int v65; // eax
  __int64 v66; // rcx
  unsigned int v67; // [rsp+20h] [rbp-68h]
  void *lpMem[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v69; // [rsp+40h] [rbp-48h]
  CPtrArrayBase *v70; // [rsp+90h] [rbp+8h] BYREF
  void *v71; // [rsp+98h] [rbp+10h]
  int v72; // [rsp+A8h] [rbp+20h] BYREF

  v72 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0,
    0);
  *(_DWORD *)(a1 + 72) = 1;
  v71 = 0LL;
  v7 = CThreadContext::RegisterGraphWalkRoot(a2);
  v9 = v7;
  v10 = 64LL;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x40u, 0LL);
    v11 = v71;
  }
  else
  {
    v11 = a2;
    v71 = a2;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = a2;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0xCFu, 0LL);
    goto LABEL_38;
  }
  for ( i = *(_QWORD *)(a1 + 8); ; i = v34 )
  {
    while ( 2 )
    {
      if ( (*(_BYTE *)(i + 95) & 2) == 0 && (void *)i != a2 )
      {
        while ( 1 )
        {
LABEL_13:
          v18 = 1;
          LOBYTE(v72) = 1;
          if ( (*(_BYTE *)(i + 95) & 2) != 0 || (void *)i == a2 )
          {
            v16 = CPreComputeContext::PostSubgraph(a3, *(const struct CVisualTree **)(a1 + 64), (bool *)&v72);
            v9 = v16;
            if ( v16 < 0 )
            {
              v67 = 272;
              goto LABEL_123;
            }
            v18 = v72;
          }
          v19 = *(_QWORD *)(a1 + 16);
          if ( v18 )
            break;
LABEL_33:
          v27 = *(_DWORD *)(a1 + 4);
          if ( v27 )
          {
            v19 = *(unsigned int *)(a1 + 32);
            v28 = 0LL;
            v29 = 0;
            if ( (_DWORD)v19 )
            {
              v30 = (unsigned int)(v19 - 1);
              *(_DWORD *)(a1 + 32) = v30;
              v19 = 2 * v30;
              v27 = *(_DWORD *)(a1 + 4);
              *(_OWORD *)lpMem = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 8 * v19);
              v29 = (int)lpMem[1];
              v28 = lpMem[0];
            }
            i = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 8) = i;
            *(_QWORD *)(a1 + 16) = v28;
            *(_DWORD *)(a1 + 24) = v29;
            *(_DWORD *)(a1 + 4) = v27 - 1;
            if ( i )
              continue;
          }
          goto LABEL_37;
        }
        v9 = 0;
        i = 0LL;
        if ( v19 )
        {
          v20 = *(_DWORD *)(a1 + 28);
          if ( v20 == 1 )
          {
            v21 = *(_DWORD *)(a1 + 24);
            if ( v21 != -1 )
            {
              v22 = *(_QWORD *)(v19 + 72);
              v19 = (v22 & 2) != 0 ? *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)(v19 + 72) & 1LL;
              v23 = (unsigned int)(v21 + 1);
              if ( (unsigned int)v23 < (unsigned int)v19 )
              {
LABEL_23:
                if ( (v22 & 2) != 0 )
                {
                  v19 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
                  v24 = v22 & 1;
                  v25 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
                }
                else
                {
                  v25 = v22 & 1;
                  v24 = v25;
                  v19 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
                }
                if ( v25 <= (unsigned int)v23 )
                  goto LABEL_119;
                if ( (v22 & 2) != 0 )
                  v24 = *(_QWORD *)v19;
                if ( (unsigned int)v23 >= v24 )
                {
LABEL_119:
                  v26 = 0LL;
                }
                else if ( v24 == 1 )
                {
                  v26 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
                }
                else
                {
                  v26 = *(_QWORD *)(v19 + 8 * v23 + 16);
                }
                *(_QWORD *)(a1 + 8) = v26;
                i = v26;
                *(_DWORD *)(a1 + 24) = v23;
LABEL_32:
                if ( i )
                  continue;
                goto LABEL_33;
              }
            }
          }
          else if ( !v20 )
          {
            v64 = *(_DWORD *)(a1 + 24);
            if ( v64 )
            {
              v22 = *(_QWORD *)(v19 + 72);
              v23 = (unsigned int)(v64 - 1);
              goto LABEL_23;
            }
          }
        }
        v9 = 1;
        goto LABEL_32;
      }
      break;
    }
    v13 = *(struct _LIST_ENTRY **)(a1 + 64);
    if ( !v13 )
      goto LABEL_11;
    v9 = 0;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD))v13->Flink[12].Blink)(*(_QWORD *)(a1 + 64)) )
    {
      v15 = (struct _LIST_ENTRY *)(i + 320);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)i);
      v47 = TreeDataListHead;
      if ( !TreeDataListHead )
        goto LABEL_85;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_85;
      while ( 1 )
      {
        v15 = Flink - 18;
        if ( Flink[2].Flink == v13 )
          break;
        Flink = Flink->Flink;
        if ( Flink == v47 )
          goto LABEL_85;
      }
    }
    if ( v15 )
      goto LABEL_10;
LABEL_85:
    UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
    if ( UnusedTreeData )
    {
      v53 = *(_DWORD **)(i + 224);
      if ( (*v53 & 0x8000000) != 0 )
      {
        v54 = *(_QWORD *)(i + 224);
        *v53 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v54, 5LL);
        if ( Slot < *(_DWORD *)(v56 + 4) )
          *(_BYTE *)(Slot + v56 + 8) = 0;
      }
      v51 = *(const unsigned int **)UnusedTreeData;
      goto LABEL_88;
    }
    v49 = (CTreeData *)operator new(0x148uLL);
    if ( v49 )
    {
      CTreeData::CTreeData(v49);
      v51 = &CVisualTreeData::`vftable';
      *v52 = &CVisualTreeData::`vftable';
      v52[40] = 0LL;
LABEL_88:
      (*((void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, unsigned __int64))v51 + 1))(
        UnusedTreeData,
        v13,
        i);
      goto LABEL_10;
    }
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, -2147024882, 0x135Bu, 0LL);
LABEL_10:
    if ( v9 < 0 )
      break;
LABEL_11:
    v16 = CPreComputeContext::PreSubgraph(a3, *(const struct CVisualTree **)(a1 + 64), (bool *)&v70);
    v9 = v16;
    if ( v16 < 0 )
    {
      v67 = 229;
LABEL_123:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v16, v67, 0LL);
      goto LABEL_37;
    }
    if ( !(_BYTE)v70 )
      goto LABEL_13;
    v34 = 0LL;
    v35 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v35 & 2) != 0 )
      v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v35) = v35 & 1;
    if ( !(_DWORD)v35 )
    {
      v9 = 1;
      goto LABEL_66;
    }
    v36 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v69 = *(_QWORD *)(a1 + 16);
    DWORD2(v69) = *(_DWORD *)(a1 + 24);
    v37 = *(_DWORD *)(a1 + 32);
    lpMem[0] = 0LL;
    if ( v37 != (_DWORD)v36 )
      goto LABEL_51;
    v57 = 2 * v36;
    if ( (unsigned __int64)(2 * v36) > 0xFFFFFFFF )
    {
      v40 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v9 = -2147024362;
LABEL_111:
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v40, 0x8Bu, 0LL);
      goto LABEL_66;
    }
    if ( v57 <= 0x40 )
      v57 = 64;
    v58 = HrMalloc(0x10uLL, v57, lpMem);
    v40 = v58;
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x53u, 0LL);
    }
    else
    {
      v60 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v60 <= 0xFFFFFFFF )
      {
        v61 = lpMem[0];
        memcpy_0(lpMem[0], *(const void **)(a1 + 48), (unsigned int)v60);
        operator delete(*(void **)(a1 + 48));
        v37 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v61;
        *(_DWORD *)(a1 + 36) = v57;
LABEL_51:
        v38 = 2LL * v37;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v37) = v69;
        ++*(_DWORD *)(a1 + 32);
        v39 = *(_DWORD *)(a1 + 56);
        if ( v39 <= *(_DWORD *)(a1 + 32) )
          v39 = *(_DWORD *)(a1 + 32);
        v40 = 0;
        *(_DWORD *)(a1 + 56) = v39;
        goto LABEL_54;
      }
      v40 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v62 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v62);
    }
LABEL_54:
    v9 = v40;
    if ( v40 < 0 )
      goto LABEL_111;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v41 = 0LL;
    else
      v41 = (unsigned int)(v35 - 1);
    *(_DWORD *)(a1 + 24) = v41;
    v42 = *(_QWORD *)(a1 + 8);
    v43 = *(_QWORD *)(v42 + 72) & 2LL;
    v44 = *(_QWORD *)(v42 + 72) & 1LL;
    v17 = (unsigned __int64 *)(*(_QWORD *)(v42 + 72) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v43 )
      v45 = *v17;
    else
      v45 = (unsigned int)v44;
    if ( v45 <= (unsigned int)v41 )
      goto LABEL_113;
    if ( v43 )
      v44 = *v17;
    if ( (unsigned int)v41 >= v44 )
    {
LABEL_113:
      v34 = 0LL;
    }
    else if ( v44 == 1 )
    {
      v34 = *(_QWORD *)(v42 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v34 = v17[v41 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v42;
    *(_QWORD *)(a1 + 8) = v34;
LABEL_66:
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v9, 0xF4u, 0LL);
      goto LABEL_37;
    }
    if ( !v34 )
      goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, v9, 0xE1u, 0LL);
LABEL_37:
  v11 = v71;
  v10 = 64LL;
LABEL_38:
  if ( v9 == 1 || v9 == -2147467260 )
    v9 = 0;
  if ( v11 && (int)CThreadContext::GetCurrent(&v70) >= 0 )
  {
    if ( (*(_QWORD *)v70 & 2) != 0 )
      v31 = *(_QWORD *)(*(_QWORD *)v70 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v31 = *(_QWORD *)v70 & 1LL;
    CPtrArrayBase::RemoveAt(v70, v31 - 1);
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v32 = *(_DWORD *)(a1 + 40);
  if ( v32 == 10 )
  {
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v10 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v10) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v10) <= *(_DWORD *)(a1 + 36) )
    {
      v70 = 0LL;
      v65 = HrMalloc(0x10uLL, (unsigned int)v10, (void **)&v70);
      if ( v65 >= 0 )
      {
        operator delete(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v70;
        *(_DWORD *)(a1 + 36) = v10;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0xFEu, 0LL);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    result = (unsigned int)v9;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v32 + 1;
    return (unsigned int)v9;
  }
  return result;
}
