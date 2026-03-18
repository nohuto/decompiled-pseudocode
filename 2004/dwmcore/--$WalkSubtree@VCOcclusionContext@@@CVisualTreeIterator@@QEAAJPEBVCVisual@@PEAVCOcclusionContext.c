/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18006E330
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180062A80 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180054D44 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006FD60 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180070DE0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x18009E0BC (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A1FB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800A3040 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A4194 (--0CTreeData@@IEAA@XZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800BDC84 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BEFCC (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        CPtrArrayBase *a2,
        COcclusionContext *a3,
        int a4)
{
  CPtrArrayBase *v5; // rsi
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // r15
  int v10; // edi
  CPtrArrayBase *v11; // rbp
  unsigned __int64 i; // rbp
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // r15d
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // r11
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r10
  bool v29; // zf
  char v30; // al
  __int64 v31; // rdx
  int v32; // eax
  int v33; // eax
  __int64 v34; // r11
  __int64 v35; // rcx
  unsigned __int64 *v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r10
  int v39; // eax
  void *v40; // rdx
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  __int64 v46; // r8
  __int64 v47; // rax
  _BYTE *v48; // rdx
  __int64 j; // rcx
  _QWORD **v50; // rcx
  _QWORD *v51; // rdx
  struct CTreeData *UnusedTreeData; // r10
  CTreeData *v53; // rax
  __int64 v54; // rcx
  const unsigned int *v55; // rax
  _QWORD *v56; // rcx
  _DWORD *v57; // r11
  __int64 v58; // rcx
  unsigned int Slot; // eax
  __int64 v60; // r11
  unsigned int v61; // r12d
  int v62; // eax
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  void *v65; // rdi
  void *v66; // rdi
  HANDLE ProcessHeap; // rax
  unsigned int Count; // eax
  int v69; // eax
  __int64 v70; // rcx
  unsigned int v71; // [rsp+20h] [rbp-78h]
  CPtrArrayBase *v72; // [rsp+30h] [rbp-68h]
  void *lpMem[2]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v74; // [rsp+48h] [rbp-50h]
  bool v75; // [rsp+A0h] [rbp+8h] BYREF
  CPtrArrayBase *v76; // [rsp+A8h] [rbp+10h] BYREF
  int v77; // [rsp+B8h] [rbp+20h] BYREF

  v77 = a4;
  v76 = a2;
  v5 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0LL,
    0LL);
  *(_DWORD *)(a1 + 72) = 2;
  v72 = 0LL;
  v7 = CThreadContext::RegisterGraphWalkRoot(v5);
  v9 = 64LL;
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x40u, 0LL);
    v11 = 0LL;
  }
  else
  {
    v11 = v5;
    v72 = v5;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, 0xCFu, 0LL);
    goto LABEL_60;
  }
  for ( i = *(_QWORD *)(a1 + 8); ; i = v17 )
  {
    while ( 2 )
    {
      if ( (*(_BYTE *)(i + 95) & 2) == 0 && (CPtrArrayBase *)i != v5 )
      {
        while ( 1 )
        {
LABEL_36:
          v29 = (*(_BYTE *)(i + 95) & 2) == 0;
          v30 = 1;
          LOBYTE(v77) = 1;
          if ( !v29 || (CPtrArrayBase *)i == v5 )
          {
            v16 = COcclusionContext::PostSubgraph(a3, *(const struct CVisualTree **)(a1 + 64), (bool *)&v77);
            v10 = v16;
            if ( v16 < 0 )
            {
              v71 = 272;
              goto LABEL_131;
            }
            v30 = v77;
          }
          v31 = *(_QWORD *)(a1 + 16);
          if ( v30 )
            break;
LABEL_55:
          v39 = *(_DWORD *)(a1 + 4);
          if ( v39 )
          {
            v8 = *(unsigned int *)(a1 + 32);
            v40 = 0LL;
            v41 = 0;
            if ( (_DWORD)v8 )
            {
              v42 = (unsigned int)(v8 - 1);
              *(_DWORD *)(a1 + 32) = v42;
              v8 = 2 * v42;
              v39 = *(_DWORD *)(a1 + 4);
              *(_OWORD *)lpMem = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 8 * v8);
              v41 = (int)lpMem[1];
              v40 = lpMem[0];
            }
            i = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 8) = i;
            *(_QWORD *)(a1 + 16) = v40;
            *(_DWORD *)(a1 + 24) = v41;
            *(_DWORD *)(a1 + 4) = v39 - 1;
            if ( i )
              continue;
          }
          goto LABEL_59;
        }
        v10 = 0;
        i = 0LL;
        if ( v31 )
        {
          v32 = *(_DWORD *)(a1 + 28);
          if ( v32 == 1 )
          {
            if ( *(_DWORD *)(a1 + 24) != -1 )
            {
              Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v31 + 72));
              if ( (unsigned int)v34 < Count )
                goto LABEL_45;
            }
          }
          else if ( !v32 )
          {
            v33 = *(_DWORD *)(a1 + 24);
            if ( v33 )
            {
              v34 = (unsigned int)(v33 - 1);
LABEL_45:
              v35 = *(_QWORD *)(v31 + 72);
              if ( (v35 & 2) != 0 )
              {
                v36 = (unsigned __int64 *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
                v37 = v35 & 1;
                v38 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              else
              {
                v38 = v35 & 1;
                v37 = v38;
                v36 = (unsigned __int64 *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              if ( v38 <= (unsigned int)v34 )
                goto LABEL_127;
              if ( (v35 & 2) != 0 )
                v37 = *v36;
              if ( (unsigned int)v34 >= v37 )
              {
LABEL_127:
                v8 = 0LL;
              }
              else if ( v37 == 1 )
              {
                v8 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
              }
              else
              {
                v8 = v36[v34 + 2];
              }
              *(_QWORD *)(a1 + 8) = v8;
              i = v8;
              *(_DWORD *)(a1 + 24) = v34;
LABEL_54:
              if ( i )
                continue;
              goto LABEL_55;
            }
          }
        }
        v10 = 1;
        goto LABEL_54;
      }
      break;
    }
    v13 = *(_QWORD *)(a1 + 64);
    if ( !v13 )
      goto LABEL_11;
    v10 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 200LL))(*(_QWORD *)(a1 + 64)) )
    {
      v15 = (_QWORD *)(i + 320);
    }
    else
    {
      v46 = *(_QWORD *)(i + 224);
      if ( *(int *)v46 >= 0 )
        goto LABEL_85;
      v47 = *(unsigned int *)(v46 + 4);
      v48 = (_BYTE *)(v46 + 8);
      for ( j = 0LL; (unsigned int)j < (unsigned int)v47; ++v48 )
      {
        if ( *v48 == 1 )
          break;
        j = (unsigned int)(j + 1);
      }
      v50 = (unsigned int)j >= (unsigned int)v47 ? 0LL : (_QWORD **)(v46 + v47 + 15 + 8 * j - (((_BYTE)v47 + 15) & 7));
      v14 = *v50;
      if ( !v14 )
        goto LABEL_85;
      v51 = (_QWORD *)*v14;
      if ( (_QWORD *)*v14 == v14 )
        goto LABEL_85;
      while ( 1 )
      {
        v15 = v51 - 36;
        if ( v51[4] == v13 )
          break;
        v51 = (_QWORD *)*v51;
        if ( v51 == v14 )
          goto LABEL_85;
      }
    }
    if ( v15 )
      goto LABEL_10;
LABEL_85:
    UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
    if ( UnusedTreeData )
    {
      v57 = *(_DWORD **)(i + 224);
      if ( (*v57 & 0x8000000) != 0 )
      {
        v58 = *(_QWORD *)(i + 224);
        *v57 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v58, 5LL);
        if ( Slot < *(_DWORD *)(v60 + 4) )
          *(_BYTE *)(Slot + v60 + 8) = 0;
      }
      v55 = *(const unsigned int **)UnusedTreeData;
      goto LABEL_88;
    }
    v53 = (CTreeData *)operator new(0x148uLL);
    if ( v53 )
    {
      CTreeData::CTreeData(v53);
      v55 = &CVisualTreeData::`vftable';
      v56[40] = 0LL;
      *v56 = &CVisualTreeData::`vftable';
LABEL_88:
      (*((void (__fastcall **)(struct CTreeData *, __int64, unsigned __int64))v55 + 1))(UnusedTreeData, v13, i);
      goto LABEL_10;
    }
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, -2147024882, 0x133Eu, 0LL);
LABEL_10:
    if ( v10 < 0 )
      break;
LABEL_11:
    v16 = COcclusionContext::PreSubgraph(a3, *(const struct CVisualTree **)(a1 + 64), &v75);
    v10 = v16;
    if ( v16 < 0 )
    {
      v71 = 229;
LABEL_131:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v16, v71, 0LL);
      goto LABEL_59;
    }
    if ( !v75 )
    {
      v5 = v76;
      goto LABEL_36;
    }
    v17 = 0LL;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v18 & 2) != 0 )
      v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v18) = v18 & 1;
    if ( !(_DWORD)v18 )
    {
      v10 = 1;
      goto LABEL_32;
    }
    v19 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v74 = *(_QWORD *)(a1 + 16);
    DWORD2(v74) = *(_DWORD *)(a1 + 24);
    v20 = *(_DWORD *)(a1 + 32);
    lpMem[0] = 0LL;
    if ( v20 != (_DWORD)v19 )
      goto LABEL_17;
    v61 = 2 * v19;
    if ( (unsigned __int64)(2 * v19) > 0xFFFFFFFF )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v10 = -2147024362;
LABEL_119:
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x8Bu, 0LL);
      v9 = 64LL;
      goto LABEL_32;
    }
    if ( v61 <= 0x40 )
      v61 = 64;
    v62 = HrMalloc(0x10uLL, v61, lpMem);
    v21 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x53u, 0LL);
    }
    else
    {
      v64 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v64 <= 0xFFFFFFFF )
      {
        v65 = lpMem[0];
        memcpy_0(lpMem[0], *(const void **)(a1 + 48), (unsigned int)v64);
        operator delete(*(void **)(a1 + 48));
        v20 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 36) = v61;
        *(_QWORD *)(a1 + 48) = v65;
LABEL_17:
        v21 = 0;
        v22 = 2LL * v20;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v20) = v74;
        v23 = *(_DWORD *)(a1 + 56);
        if ( v23 <= ++*(_DWORD *)(a1 + 32) )
          v23 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 56) = v23;
        goto LABEL_20;
      }
      v21 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v66 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v66);
    }
LABEL_20:
    v10 = v21;
    if ( v21 < 0 )
      goto LABEL_119;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v24 = 0;
    else
      v24 = v18 - 1;
    *(_DWORD *)(a1 + 24) = v24;
    v25 = *(_QWORD *)(a1 + 8);
    v26 = *(_QWORD *)(v25 + 72) & 2LL;
    v27 = *(_QWORD *)(v25 + 72) & 1LL;
    v8 = *(_QWORD *)(v25 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v26 )
      v28 = *(_QWORD *)v8;
    else
      v28 = (unsigned int)v27;
    if ( v28 <= v24 )
      goto LABEL_121;
    if ( v26 )
      v27 = *(_QWORD *)v8;
    if ( v24 >= v27 )
    {
LABEL_121:
      v17 = 0LL;
    }
    else if ( v27 == 1 )
    {
      v17 = *(_QWORD *)(v25 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v17 = *(_QWORD *)(v8 + 8LL * v24 + 16);
    }
    ++*(_DWORD *)(a1 + 4);
    v9 = 64LL;
    *(_QWORD *)(a1 + 16) = v25;
    *(_QWORD *)(a1 + 8) = v17;
LABEL_32:
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, 0xF4u, 0LL);
      goto LABEL_59;
    }
    v5 = v76;
    if ( !v17 )
      goto LABEL_36;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v10, 0xE1u, 0LL);
LABEL_59:
  v11 = v72;
LABEL_60:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v11 && (int)CThreadContext::GetCurrent(&v76) >= 0 )
  {
    if ( (*(_QWORD *)v76 & 2) != 0 )
      v43 = *(_QWORD *)(*(_QWORD *)v76 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v43 = *(_QWORD *)v76 & 1LL;
    CPtrArrayBase::RemoveAt(v76, v43 - 1);
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v44 = *(_DWORD *)(a1 + 40);
  if ( v44 == 10 )
  {
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v9 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v9) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v9) <= *(_DWORD *)(a1 + 36) )
    {
      v76 = 0LL;
      v69 = HrMalloc(0x10uLL, (unsigned int)v9, (void **)&v76);
      if ( v69 >= 0 )
      {
        operator delete(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v76;
        *(_DWORD *)(a1 + 36) = v9;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0xFEu, 0LL);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v44 + 1;
  }
  return (unsigned int)v10;
}
