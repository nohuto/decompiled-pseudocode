/*
 * XREFs of _o_sin_0 @ 0x180101958
 * Callers:
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x1800FBC10 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     Lanczos::Sinc @ 0x1801E7218 (Lanczos--Sinc.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x180257430 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x180257570 (-EvaluateCurve@XamlSineInterpolation@@MEAANN@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802577B0 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180270A6C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl o_sin_0(double X)
{
  return sin(X);
}
