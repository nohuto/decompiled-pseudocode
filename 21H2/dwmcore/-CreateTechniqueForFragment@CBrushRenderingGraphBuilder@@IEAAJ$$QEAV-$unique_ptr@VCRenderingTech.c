/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18003740C
 * Callers:
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180031C28 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180032458 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180035C34 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036214 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180037300 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18025A000 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180035778 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x1800374CC (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  CRenderingTechnique *v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // esi
  unsigned int v17; // ecx
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)DefaultHeap::Alloc(0x110uLL);
  if ( !v5 || (v7 = CRenderingTechnique::CRenderingTechnique(v5), (v8 = (CRenderingTechnique *)v7) == 0LL) )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x246u, 0LL);
    return v12;
  }
  v9 = *a1 + 144LL;
  v18 = v7;
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v12 = -2147024362;
    goto LABEL_11;
  }
  if ( v11 > *(_DWORD *)(v9 + 20) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet(v9, 8LL, 1LL, &v18);
    v16 = v14;
    v12 = v14;
    if ( v14 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u, 0LL);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x249u, 0LL);
    CRenderingTechnique::`scalar deleting destructor'(v8);
    return v12;
  }
  *(_QWORD *)(*(_QWORD *)v9 + 8LL * v10) = v8;
  *(_DWORD *)(v9 + 24) = v11;
LABEL_6:
  *a3 = *(_DWORD *)(v9 + 24) - 1;
  return 0;
}
