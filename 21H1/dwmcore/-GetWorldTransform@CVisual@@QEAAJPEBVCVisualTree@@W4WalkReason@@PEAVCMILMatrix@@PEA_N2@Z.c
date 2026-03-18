/*
 * XREFs of ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A9060
 * Callers:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x18000A24C (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000A3E8 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180019574 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x180023440 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180034D74 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066A10 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18007B750 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x18019E550 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801B1550 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1801F844C (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x1801F8620 (-UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x180235E10 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18007D638 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800BCFB4 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        CVisual *a1,
        const struct CVisualTree *a2,
        int a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v11; // rbx
  char v12; // r10
  int v13; // r12d
  char v14; // r13
  __int64 **TreeData; // rsi
  struct _LIST_ENTRY *v16; // rcx
  _DWORD *v17; // r8
  CVisual *v18; // r13
  unsigned __int64 v19; // rax
  int updated; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rcx
  _BYTE *v25; // rdx
  unsigned int i; // eax
  _QWORD **v27; // rcx
  _QWORD *v28; // rcx
  CVisual *v29; // rax
  struct _LIST_ENTRY *v30; // rax
  __int64 v31; // rcx

  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
  {
    v11 = (struct _LIST_ENTRY *)((char *)a1 + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(a1);
    if ( !TreeDataListHead )
      return 2291674884LL;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      return 2291674884LL;
    while ( 1 )
    {
      v11 = Flink - 18;
      if ( (const struct CVisualTree *)Flink[2].Flink == a2 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        return 2291674884LL;
    }
  }
  if ( !v11 )
    return 2291674884LL;
  v12 = 0;
  if ( a3 != 5 || v11[7].Blink && CVisualTree::_IsInTree(a2, a1, 1) )
  {
    v13 = 0;
    v14 = 0;
    TreeData = 0LL;
    if ( a1 == *((CVisual **)a2 + 7) )
      goto LABEL_52;
    v16 = 0LL;
    if ( g_pComposition )
      v16 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
    if ( BYTE2(v11[1].Flink) && v11[17].Blink == v16 )
      goto LABEL_10;
    v17 = (_DWORD *)*((_QWORD *)a1 + 28);
    if ( (*v17 & 0x1000000) == 0 )
      goto LABEL_10;
    v24 = (unsigned int)v17[1];
    v25 = v17 + 2;
    for ( i = 0; i < (unsigned int)v24; ++v25 )
    {
      if ( *v25 == 8 )
        break;
      ++i;
    }
    v27 = i >= (unsigned int)v24 ? 0LL : (_QWORD **)((char *)v17 + 8LL * i - (((_BYTE)v24 + 15) & 7) + v24 + 15);
    v28 = *v27;
    if ( v28 && (v29 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 200LL))(*v28)) != 0LL )
    {
      v14 = 1;
      TreeData = CVisual::FindTreeData(v29, a2);
    }
    else
    {
LABEL_10:
      v18 = (CVisual *)*((_QWORD *)a1 + 10);
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
      {
        TreeData = (__int64 **)((char *)v18 + 320);
      }
      else
      {
        v23 = CVisual::GetTreeDataListHead(v18);
        if ( v23 )
        {
          Flink = v23->Flink;
          if ( v23->Flink != v23 )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
            {
              Flink = Flink->Flink;
              if ( Flink == v23 )
                goto LABEL_12;
            }
            TreeData = (__int64 **)&Flink[-18];
          }
        }
      }
LABEL_12:
      v14 = 0;
    }
    if ( !TreeData )
LABEL_52:
      v19 = 1LL;
    else
      v19 = (unsigned __int64)TreeData[15];
    if ( v11[7].Blink < (struct _LIST_ENTRY *)v19 )
    {
      updated = CVisual::UpdateWorldTransform(a1, a2, (struct CTreeData *)v11, v14, (const struct CTreeData *)TreeData);
      v13 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, updated, 0x793u, 0LL);
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, v13, 0x6DDu, 0LL);
      return (unsigned int)v13;
    }
    if ( !v11[7].Blink )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, -2003292412, 0x65u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2003292412, 0x6E2u, 0LL);
      return 2291674884LL;
    }
    *(struct _LIST_ENTRY *)a4 = *(struct _LIST_ENTRY *)((char *)v11 + 40);
    *(struct _LIST_ENTRY *)(a4 + 16) = *(struct _LIST_ENTRY *)((char *)v11 + 56);
    *(struct _LIST_ENTRY *)(a4 + 32) = *(struct _LIST_ENTRY *)((char *)v11 + 72);
    *(struct _LIST_ENTRY *)(a4 + 48) = *(struct _LIST_ENTRY *)((char *)v11 + 88);
    *(_DWORD *)(a4 + 64) = v11[6].Blink;
    v12 = BYTE1(v11[1].Flink);
    if ( a6 )
    {
      v30 = v11[7].Flink;
      *(struct _LIST_ENTRY *)a6 = *v30;
      *(struct _LIST_ENTRY *)(a6 + 16) = v30[1];
      *(struct _LIST_ENTRY *)(a6 + 32) = v30[2];
      *(struct _LIST_ENTRY *)(a6 + 48) = v30[3];
      *(_DWORD *)(a6 + 64) = v30[4].Flink;
    }
  }
  else
  {
    *(_QWORD *)a4 = 1065353216LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_DWORD *)(a4 + 16) = 0;
    *(_QWORD *)(a4 + 20) = 1065353216LL;
    *(_QWORD *)(a4 + 28) = 0LL;
    *(_DWORD *)(a4 + 36) = 0;
    *(_QWORD *)(a4 + 40) = 1065353216LL;
    *(_QWORD *)(a4 + 48) = 0LL;
    *(_DWORD *)(a4 + 56) = 0;
    *(_DWORD *)(a4 + 60) = 1065353216;
    *(_WORD *)(a4 + 64) = 32085;
    if ( a6 )
    {
      *(_QWORD *)a6 = 1065353216LL;
      *(_QWORD *)(a6 + 8) = 0LL;
      *(_DWORD *)(a6 + 16) = 0;
      *(_QWORD *)(a6 + 20) = 1065353216LL;
      *(_QWORD *)(a6 + 28) = 0LL;
      *(_DWORD *)(a6 + 36) = 0;
      *(_QWORD *)(a6 + 40) = 1065353216LL;
      *(_QWORD *)(a6 + 48) = 0LL;
      *(_DWORD *)(a6 + 56) = 0;
      *(_DWORD *)(a6 + 60) = 1065353216;
      *(_WORD *)(a6 + 64) = 32085;
    }
  }
  if ( a5 )
    *a5 = v12;
  return 0LL;
}
