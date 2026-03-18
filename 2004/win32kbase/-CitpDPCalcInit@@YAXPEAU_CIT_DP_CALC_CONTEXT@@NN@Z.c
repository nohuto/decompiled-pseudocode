/*
 * XREFs of ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C01F91D8
 * Callers:
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01F92C0 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     exp @ 0x1C00D29D8 (exp.c)
 *     log @ 0x1C00D2DC0 (log.c)
 */

void __fastcall CitpDPCalcInit(struct _CIT_DP_CALC_CONTEXT *a1, double a2, double a3)
{
  double v4; // xmm0_8
  double v5; // xmm7_8
  double v6; // xmm0_8
  double v7; // xmm0_8

  *(double *)a1 = a2;
  v4 = exp(a2);
  *((double *)a1 + 1) = v4;
  v5 = v4;
  *((double *)a1 + 2) = exp(a2 + a2);
  *((double *)a1 + 6) = a3;
  *((double *)a1 + 4) = 1.0 / (v5 + 1.0);
  *((double *)a1 + 3) = v5 / (v5 + 1.0);
  *((double *)a1 + 5) = (v5 - 1.0) / (v5 + 1.0);
  v6 = log(((1.0 - a3) * v5 + a3) / (v5 * a3 + 1.0 - a3));
  *((double *)a1 + 7) = v6;
  v7 = exp(v6);
  *((double *)a1 + 8) = v7;
  *((double *)a1 + 9) = (v7 + 1.0) / (v7 - 1.0);
}
