/*
 * XREFs of ?HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800DE894
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBlurRenderingGraph::HasMatchingParameters(
        CBlurRenderingGraph *this,
        const struct D2D_VECTOR_2F *a2,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a3)
{
  return *((_DWORD *)this + 392) == a3
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 390) - a2->x) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 391) - a2->y) & _xmm) <= 0.0000011920929;
}
