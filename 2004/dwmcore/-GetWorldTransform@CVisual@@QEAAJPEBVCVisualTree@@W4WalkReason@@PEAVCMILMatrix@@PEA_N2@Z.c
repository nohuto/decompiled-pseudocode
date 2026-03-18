/*
 * XREFs of ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A1AD0
 * Callers:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x18000DD8C (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000DF28 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180021838 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x180022300 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180075FB0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180078060 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18009D0F8 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A0B40 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A11B0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x18019B9A0 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801AEBF0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1801F5A8C (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x1801F5C60 (-UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x180233450 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180004440 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180066514 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C3914 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@details@wil@@QEAA_NXZ @ 0x1800E9134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@d.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
  struct _LIST_ENTRY *v11; // rdi
  char v12; // bp
  struct _LIST_ENTRY *TreeDataListHead; // rax
  char v15; // r15
  int v16; // r12d
  struct CTreeData *TreeData; // rbp
  struct _LIST_ENTRY *v18; // rcx
  _DWORD *v19; // r8
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  unsigned int i; // eax
  _QWORD **v23; // rcx
  _QWORD *v24; // rcx
  CVisual *v25; // rax
  CVisual *v26; // r15
  struct _LIST_ENTRY *v27; // rax
  unsigned __int64 v28; // rax
  int updated; // eax
  bool v30; // zf
  struct _LIST_ENTRY *v31; // rax
  int Blink; // eax
  __int64 v33; // rcx

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
    v15 = 0;
    v16 = 0;
    TreeData = 0LL;
    if ( a1 == *((CVisual **)a2 + 7) )
      goto LABEL_40;
    v18 = 0LL;
    if ( g_pComposition )
      v18 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
    if ( BYTE2(v11[1].Flink) && v11[17].Blink == v18 )
      goto LABEL_29;
    v19 = (_DWORD *)*((_QWORD *)a1 + 28);
    if ( (*v19 & 0x1000000) == 0 )
      goto LABEL_29;
    v20 = (unsigned int)v19[1];
    v21 = v19 + 2;
    for ( i = 0; i < (unsigned int)v20; ++v21 )
    {
      if ( *v21 == 8 )
        break;
      ++i;
    }
    v23 = i >= (unsigned int)v20 ? 0LL : (_QWORD **)((char *)v19 + 8LL * i - (((_BYTE)v20 + 15) & 7) + v20 + 15);
    v24 = *v23;
    if ( v24 && (v25 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 200LL))(*v24)) != 0LL )
    {
      v15 = 1;
      TreeData = CVisual::FindTreeData(v25, a2);
    }
    else
    {
LABEL_29:
      v26 = (CVisual *)*((_QWORD *)a1 + 10);
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
      {
        TreeData = (CVisual *)((char *)v26 + 320);
      }
      else
      {
        v27 = CVisual::GetTreeDataListHead(v26);
        if ( v27 )
        {
          Flink = v27->Flink;
          if ( v27->Flink != v27 )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
            {
              Flink = Flink->Flink;
              if ( Flink == v27 )
                goto LABEL_37;
            }
            TreeData = (struct CTreeData *)&Flink[-18];
          }
        }
      }
LABEL_37:
      v15 = 0;
    }
    if ( !TreeData )
LABEL_40:
      v28 = 1LL;
    else
      v28 = *((_QWORD *)TreeData + 15);
    if ( v11[7].Blink < (struct _LIST_ENTRY *)v28 )
    {
      updated = CVisual::UpdateWorldTransform((CComposition **)a1, a2, (struct CTreeData *)v11, v15, TreeData);
      v16 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, updated, 0x793u, 0LL);
    }
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, v16, 0x6DDu, 0LL);
      return (unsigned int)v16;
    }
    if ( !v11[7].Blink )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, -2003292412, 0x74u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, -2003292412, 0x6E2u, 0LL);
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
      v30 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_HitTesting_32337248>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_HitTesting_32337248>::GetImpl'::`2'::impl) == 0;
      v31 = v11[7].Flink;
      if ( v30 || v31 )
      {
        *(struct _LIST_ENTRY *)a6 = *v31;
        *(struct _LIST_ENTRY *)(a6 + 16) = v31[1];
        *(struct _LIST_ENTRY *)(a6 + 32) = v31[2];
        *(struct _LIST_ENTRY *)(a6 + 48) = v31[3];
        Blink = (int)v31[4].Flink;
      }
      else
      {
        *(struct _LIST_ENTRY *)a6 = *(struct _LIST_ENTRY *)((char *)v11 + 40);
        *(struct _LIST_ENTRY *)(a6 + 16) = *(struct _LIST_ENTRY *)((char *)v11 + 56);
        *(struct _LIST_ENTRY *)(a6 + 32) = *(struct _LIST_ENTRY *)((char *)v11 + 72);
        *(struct _LIST_ENTRY *)(a6 + 48) = *(struct _LIST_ENTRY *)((char *)v11 + 88);
        Blink = (int)v11[6].Blink;
      }
      *(_DWORD *)(a6 + 64) = Blink;
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
