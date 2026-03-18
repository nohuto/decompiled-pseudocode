/*
 * XREFs of ??$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ @ 0x180212980
 * Callers:
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180179B30 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180179F00 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     TryFillRenderState @ 0x180199C4C (TryFillRenderState.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Is2DTransformExceptForZTranslation<1>(float *a1)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[2] - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[3] - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[6] - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[7] - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[8] - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[9] - 0.0) & _xmm) < 0.000081380211
      && (COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[10] - 0.0) & _xmm) < 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[10] - 1.0) & _xmm) < 0.000081380211)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[11] - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[15] - 1.0) & _xmm) < 0.000081380211;
}
