/*
 * XREFs of _o_sin_0 @ 0x1800E3A74
 * Callers:
 *     Lanczos::Sinc @ 0x1801A0C34 (Lanczos--Sinc.c)
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x180205DF0 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x180206000 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x1802060C0 (-EvaluateCurve@XamlSineInterpolation@@MEAANN@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802062F4 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18021F4B4 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl o_sin_0(double X)
{
  return sin(X);
}
