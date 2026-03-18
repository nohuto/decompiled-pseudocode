/*
 * XREFs of ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z @ 0x1802AC97C
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180053F34 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderingTechnique::DoesSurfaceHaveBorder(CRenderingTechnique *this, unsigned int a2)
{
  __int64 v2; // rdx
  char result; // al

  v2 = 44LL * a2;
  result = 0;
  if ( *((_BYTE *)this + v2 + 76) || *((_BYTE *)this + v2 + 77) )
    return 1;
  return result;
}
