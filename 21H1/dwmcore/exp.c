/*
 * XREFs of exp @ 0x1800E258C
 * Callers:
 *     ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x180006380 (-EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x1802089C0 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl exp(double X)
{
  return _o_exp(X);
}
