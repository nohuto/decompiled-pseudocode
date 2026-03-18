/*
 * XREFs of ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9
 * Callers:
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1565EB (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@ABVCFixPred@0@@Z @ 0x156681 (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$_ea_156681.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV10@ABVCFixPred@0@@Z @ 0x1566DC (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$Vector@VCFixPred@Prediction@@$02@0@ABV10@ABVCF.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@@Z @ 0x15672E (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$Vector@VCFixPred@Prediction@@$02@0@ABV-$Square.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AVCFixPred@0@ABV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x156793 (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AVCFixPred@0@ABV-$Vector@VCFixPred@Prediction@@$02.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1568F3 (--$-TVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV-$.c)
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QAE?AVCFixPred@2@V32@@Z @ 0x157DF2 (-Smooth@tagExpoSmoother@Prediction@@QAE-AVCFixPred@2@V32@@Z.c)
 *     ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x157E5A (-UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INF.c)
 * Callees:
 *     ?FastMul64by64@@YG_J_J0@Z @ 0x156EF2 (-FastMul64by64@@YG_J_J0@Z.c)
 */

_QWORD *__fastcall Prediction::operator*(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  *a1 = FastMul64by64(*a2, *a3);
  return a1;
}
