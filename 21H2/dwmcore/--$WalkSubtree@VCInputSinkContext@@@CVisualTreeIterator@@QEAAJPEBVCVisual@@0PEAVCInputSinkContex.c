/*
 * XREFs of ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x180046190
 * Callers:
 *     ?CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ @ 0x18007D698 (-CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180045CC0 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x180045DE8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180045EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GotoParent@?$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z @ 0x180046044 (-GotoParent@-$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180046384 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$alloca.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004933C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008F210 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800E63D8 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     IsNotifyInputSinkParentedPresent @ 0x180101E5C (IsNotifyInputSinkParentedPresent.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CInputSinkContext>(
        __int64 a1,
        __int64 a2,
        const void *a3,
        __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  CVisual *v11; // rdi
  const struct CVisualTree *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // ebp
  int v19; // eax
  unsigned int v20; // ecx
  CVisual *v21; // r10
  __int64 v22; // r10
  void *InputHandle; // rax
  __int64 v24; // r11
  CVisual *v25; // [rsp+60h] [rbp+8h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0,
    0,
    a4);
  *(_DWORD *)(a1 + 72) = 1;
  v8 = CGraphWalker<CVisual>::BeginWalk(a1, a2, a3);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD6u, 0LL);
  }
  else
  {
    v11 = *(CVisual **)(a1 + 8);
LABEL_3:
    while ( (*((_BYTE *)v11 + 103) & 2) != 0 || v11 == (CVisual *)a2 )
    {
      v12 = *(const struct CVisualTree **)(a1 + 64);
      if ( v12 )
        CVisual::EnsureTreeData(v11, v12);
      v13 = *(_QWORD *)(a4 + 8);
      if ( CVisual::GetInputHandle((CVisual *)v13) )
      {
        if ( !*(_QWORD *)(a4 + 80) )
        {
          if ( (unsigned __int8)IsNotifyInputSinkParentedPresent() )
          {
            if ( (*(_BYTE *)(v13 + 103) & 2) != 0 )
            {
              v21 = *(CVisual **)(v13 + 88);
              if ( v21 )
              {
                while ( !CVisual::GetInputHandle(v21) )
                {
                  if ( (*(_BYTE *)(v22 + 103) & 2) != 0 )
                  {
                    v21 = *(CVisual **)(v22 + 88);
                    if ( v21 )
                      continue;
                  }
                  goto LABEL_33;
                }
                CVisual::GetInputHandle((CVisual *)v22);
              }
            }
LABEL_33:
            InputHandle = CVisual::GetInputHandle((CVisual *)v13);
            NotifyInputSinkParented(InputHandle, v24);
          }
          *(_QWORD *)(a4 + 80) = v13;
        }
        *(_BYTE *)(v13 + 100) |= 0x40u;
      }
      if ( (*(_DWORD *)(v13 + 96) & 0x2000) == 0 )
        goto LABEL_8;
      v25 = 0LL;
      v19 = CGraphWalker<CVisual>::GotoFirstChild(a1, &v25, 0LL);
      v10 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x105u, 0LL);
        goto LABEL_17;
      }
      if ( !v25 )
        goto LABEL_8;
      v11 = v25;
    }
    do
    {
LABEL_8:
      if ( (*((_BYTE *)v11 + 103) & 2) != 0 || v11 == (CVisual *)a2 )
      {
        v14 = *(_QWORD *)(a4 + 8);
        if ( v14 == *(_QWORD *)(a4 + 80) )
          *(_QWORD *)(a4 + 80) = 0LL;
        *(_BYTE *)(v14 + 96) &= ~0x20u;
      }
      v25 = 0LL;
      v15 = CGraphWalker<CVisual>::GotoSibling(a1, &v25, 0LL);
      v10 = v15;
      v17 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x137u, 0LL);
        goto LABEL_17;
      }
      v11 = v25;
      if ( v25 )
        goto LABEL_3;
      v25 = 0LL;
      CGraphWalker<CVisual>::GotoParent(a1, &v25);
      v11 = v25;
    }
    while ( v25 );
    if ( v17 == 1 )
      v10 = 0;
LABEL_17:
    CGraphWalker<CVisual>::EndWalk(a1, (__int64)a3);
  }
  return v10;
}
