/*
 * XREFs of ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180056664
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180055A9C (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18005629C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(
        CRenderingTechniqueFragment **a1,
        unsigned int a2)
{
  CRenderingTechniqueFragment *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CRenderingTechniqueFragment::`scalar deleting destructor'(v2, a2);
  return result;
}
