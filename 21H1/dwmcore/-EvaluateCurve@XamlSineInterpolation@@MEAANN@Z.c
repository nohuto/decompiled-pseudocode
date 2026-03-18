/*
 * XREFs of ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x180208A80
 * Callers:
 *     <none>
 * Callees:
 *     _o_sin_0 @ 0x1800E25D4 (_o_sin_0.c)
 */

double __fastcall XamlSineInterpolation::EvaluateCurve(XamlSineInterpolation *this, double a2)
{
  return 1.0 - o_sin_0((1.0 - a2) * 3.141592741012573 * 0.5);
}
