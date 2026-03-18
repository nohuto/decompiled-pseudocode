/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180057FB8
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E2F8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180056ACC (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180056FBC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180057C80 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180056DF0 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x180058084 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B5304 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  unsigned int v6; // ecx
  CRenderingTechnique *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  CRenderingTechnique *v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)DefaultHeap::Alloc(0x100uLL);
  if ( v5 )
    v7 = (CRenderingTechnique *)CRenderingTechnique::CRenderingTechnique(v5);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = *a1 + 144LL;
    v15 = v7;
    v9 = *(_DWORD *)(v8 + 24);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v10 <= *(_DWORD *)(v8 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v8 + 8LL * v9) = v7;
        *(_DWORD *)(v8 + 24) = v10;
LABEL_7:
        *a3 = *(_DWORD *)(v8 + 24) - 1;
        return 0;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v8, 8LL, 1LL, &v15);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
    }
    if ( v11 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0x238u, 0LL);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x235u, 0LL);
  }
  if ( v7 )
    CRenderingTechnique::`scalar deleting destructor'(v7);
  return (unsigned int)v11;
}
