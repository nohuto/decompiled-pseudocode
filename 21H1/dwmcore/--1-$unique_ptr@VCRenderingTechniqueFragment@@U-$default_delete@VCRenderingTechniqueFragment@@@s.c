/*
 * XREFs of ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18009CB04
 * Callers:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18009CB1C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x1800C46EC (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 * Callees:
 *     <none>
 */

CRenderingTechniqueFragment *__fastcall std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(
        CRenderingTechniqueFragment **a1)
{
  CRenderingTechniqueFragment *v1; // rcx
  CRenderingTechniqueFragment *result; // rax

  v1 = *a1;
  if ( v1 )
    return CRenderingTechniqueFragment::`scalar deleting destructor'(v1);
  return result;
}
