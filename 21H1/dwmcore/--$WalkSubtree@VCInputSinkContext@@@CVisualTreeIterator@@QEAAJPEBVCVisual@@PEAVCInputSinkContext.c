/*
 * XREFs of ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x1800BACC8
 * Callers:
 *     ?CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800BFD08 (-CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV-$vector@PEAVCVisual@@V-$allocator@.c)
 * Callees:
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18000463C (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180017780 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007C654 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800BAE1C (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$alloca.c)
 *     ?PreSubgraph@CInputSinkContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BAEB4 (-PreSubgraph@CInputSinkContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GotoParent@?$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z @ 0x1800BAF58 (-GotoParent@-$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800BAFC8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800BB07C (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CInputSinkContext>(
        __int64 a1,
        struct CVisual *a2,
        CInputSinkContext *a3,
        int a4)
{
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  struct CVisual *v10; // rdi
  const struct CVisualTree *v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-20h]
  struct CTreeData *v14; // [rsp+30h] [rbp-10h] BYREF
  struct CVisual *v15; // [rsp+70h] [rbp+30h] BYREF
  struct CVisual *v16; // [rsp+78h] [rbp+38h] BYREF
  int v17; // [rsp+88h] [rbp+48h] BYREF

  v17 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0,
    0);
  v16 = a2;
  *(_DWORD *)(a1 + 72) = 1;
  v7 = CGraphWalker<CVisual>::BeginWalk(a1, &v16);
  v9 = v7;
  if ( v7 < 0 )
  {
    v13 = 207;
  }
  else
  {
    v10 = *(struct CVisual **)(a1 + 8);
LABEL_3:
    while ( (*((_BYTE *)v10 + 95) & 2) != 0 || v10 == a2 )
    {
      v11 = *(const struct CVisualTree **)(a1 + 64);
      if ( v11 )
        v9 = CVisual::EnsureTreeData(v10, v11, &v14);
      else
        v9 = 0;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0xE1u, 0LL);
        goto LABEL_14;
      }
      v7 = CInputSinkContext::PreSubgraph(a3, v11, (bool *)&v17);
      v9 = v7;
      if ( v7 < 0 )
      {
        v13 = 229;
        goto LABEL_30;
      }
      if ( !(_BYTE)v17 )
        goto LABEL_9;
      v15 = 0LL;
      v7 = CGraphWalker<CVisual>::GotoFirstChild(a1, &v15, 0LL);
      v9 = v7;
      if ( v7 < 0 )
      {
        v13 = 244;
        goto LABEL_30;
      }
      if ( !v15 )
        goto LABEL_9;
      v10 = v15;
    }
    while ( 1 )
    {
LABEL_9:
      if ( (*((_BYTE *)v10 + 95) & 2) != 0 || v10 == a2 )
        *(_BYTE *)(*((_QWORD *)a3 + 4) + 88LL) &= ~0x20u;
      v15 = 0LL;
      v7 = CGraphWalker<CVisual>::GotoSibling(a1, &v15, 0LL);
      v9 = v7;
      if ( v7 < 0 )
        break;
      v10 = v15;
      if ( v15 )
        goto LABEL_3;
      v15 = 0LL;
      CGraphWalker<CVisual>::GotoParent(a1, &v15);
      v10 = v15;
      if ( !v15 )
        goto LABEL_14;
    }
    v13 = 289;
  }
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v13, 0LL);
LABEL_14:
  if ( v9 == 1 || v9 == -2147467260 )
    v9 = 0;
  CGraphWalker<CVisual>::EndWalk(a1, v16);
  return (unsigned int)v9;
}
