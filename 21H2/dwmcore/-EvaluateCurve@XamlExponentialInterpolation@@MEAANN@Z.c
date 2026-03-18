/*
 * XREFs of ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x1802574F0
 * Callers:
 *     <none>
 * Callees:
 *     exp @ 0x1801018D4 (exp.c)
 */

double __fastcall XamlExponentialInterpolation::EvaluateCurve(XamlExponentialInterpolation *this, double a2)
{
  double v2; // xmm8_8
  double v3; // xmm7_8
  double v4; // xmm8_8

  v2 = a2;
  if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) >= 0.0000011920929 )
  {
    v3 = *((float *)this + 8);
    v4 = exp(v3 * a2) - 1.0;
    return v4 / (exp(v3) - 1.0);
  }
  return v2;
}
