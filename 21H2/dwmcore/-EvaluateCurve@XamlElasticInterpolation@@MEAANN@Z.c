/*
 * XREFs of ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x180257430
 * Callers:
 *     <none>
 * Callees:
 *     exp @ 0x1801018D4 (exp.c)
 *     _o_sin_0 @ 0x180101958 (_o_sin_0.c)
 */

double __fastcall XamlElasticInterpolation::EvaluateCurve(XamlElasticInterpolation *this, double a2)
{
  double v3; // xmm8_8
  double v4; // xmm7_8
  double v5; // xmm8_8

  if ( COERCE_FLOAT(*((_DWORD *)this + 9) & _xmm) >= 0.0000011920929 )
  {
    v4 = *((float *)this + 9);
    v5 = exp(v4 * a2) - 1.0;
    v3 = v5 / (exp(v4) - 1.0);
  }
  else
  {
    v3 = a2;
  }
  return o_sin_0(((double)*((int *)this + 8) * 6.283185482025146 + 1.570796370506287) * a2) * v3;
}
