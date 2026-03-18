/*
 * XREFs of pow @ 0x1800E3D6C
 * Callers:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800361E0 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z @ 0x1800DED00 (-EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x180203FB0 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z @ 0x180204030 (-EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
