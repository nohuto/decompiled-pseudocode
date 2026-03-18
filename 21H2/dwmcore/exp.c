/*
 * XREFs of exp @ 0x1801018D4
 * Callers:
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x180257430 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x1802574F0 (-EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl exp(double X)
{
  return _o_exp(X);
}
