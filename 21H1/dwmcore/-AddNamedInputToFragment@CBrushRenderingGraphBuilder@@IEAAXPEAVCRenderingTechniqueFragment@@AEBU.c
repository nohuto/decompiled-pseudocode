/*
 * XREFs of ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18009CB1C
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18001F114 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009AAF8 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009D1C4 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020FA3C (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800737DC (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18009CB04 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x18009CBD8 (-FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRender.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  CRenderingTechniqueFragment *v18; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v20; // [rsp+68h] [rbp+20h] BYREF

  if ( !CBrushRenderingGraphBuilder::FindExistingNamedInput(this, a3, &v20) )
  {
    v7 = *(_QWORD *)this;
    v8 = *(unsigned int *)(v7 + 40);
    v9 = v8 + 1;
    if ( (int)v8 + 1 < (unsigned int)v8 )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v9 <= *(_DWORD *)(v7 + 36) )
      {
        v10 = 3 * v8;
        v11 = *(_QWORD *)(v7 + 16);
        *(_OWORD *)(v11 + 8 * v10) = *(_OWORD *)a3;
        *(_QWORD *)(v11 + 8 * v10 + 16) = *((_QWORD *)a3 + 2);
        *(_DWORD *)(v7 + 40) = v9;
LABEL_5:
        v12 = *(_DWORD *)(v7 + 40) - 1;
        goto LABEL_6;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 16, 24LL, 1LL, a3);
      v14 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
    }
    if ( v14 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
    goto LABEL_5;
  }
  v12 = v20;
LABEL_6:
  v18 = 0LL;
  v13 = (_QWORD *)*((_QWORD *)a2 + 5);
  LODWORD(v17) = v12;
  BYTE4(v17) = 0;
  if ( *((_QWORD **)a2 + 6) == v13 )
  {
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
      (__int64 *)a2 + 4,
      (__int64)v13,
      &v17);
  }
  else
  {
    *v13 = v17;
    v13[1] = v18;
    *((_QWORD *)a2 + 5) += 16LL;
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v18);
}
