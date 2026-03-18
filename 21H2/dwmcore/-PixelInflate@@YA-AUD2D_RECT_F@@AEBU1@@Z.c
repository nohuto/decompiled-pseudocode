/*
 * XREFs of ?PixelInflate@@YA?AUD2D_RECT_F@@AEBU1@@Z @ 0x180057D6C
 * Callers:
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800557F8 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x180057B58 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180252278 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     floorf @ 0x1801018F8 (floorf.c)
 */

struct D2D_RECT_F *__fastcall PixelInflate(struct D2D_RECT_F *__return_ptr retstr, const struct D2D_RECT_F *a2)
{
  float left; // xmm7_4
  float right; // xmm0_4
  float v6; // xmm0_4
  float top; // xmm8_4
  float v8; // xmm6_4
  float bottom; // xmm0_4
  float v10; // xmm0_4

  left = a2->left;
  if ( COERCE_FLOAT(LODWORD(a2->left) & _xmm) < 8388608.0 )
    left = (float)(int)floorf(a2->left);
  right = a2->right;
  retstr->left = left;
  v6 = o_ceilf_0(right);
  top = a2->top;
  v8 = v6;
  retstr->right = v6;
  if ( COERCE_FLOAT(LODWORD(top) & _xmm) < 8388608.0 )
    top = (float)(int)floorf(top);
  bottom = a2->bottom;
  retstr->top = top;
  v10 = o_ceilf_0(bottom);
  retstr->bottom = v10;
  if ( left == v8 )
    retstr->right = v8 + 1.0;
  if ( top == v10 )
    retstr->bottom = v10 + 1.0;
  return retstr;
}
