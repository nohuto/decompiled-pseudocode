/*
 * XREFs of ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054BD4
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180055AD8 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180056FBC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180056E30 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 */

CRenderingTechniqueFragment **__fastcall std::unique_ptr<CRenderingTechniqueFragment>::operator=(
        CRenderingTechniqueFragment **a1,
        CRenderingTechniqueFragment **a2)
{
  CRenderingTechniqueFragment *v3; // rax
  CRenderingTechniqueFragment *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v4, (unsigned int)a2);
  }
  return a1;
}
