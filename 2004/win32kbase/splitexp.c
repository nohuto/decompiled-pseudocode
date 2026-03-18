/*
 * XREFs of splitexp @ 0x1C00D2C94
 * Callers:
 *     exp @ 0x1C00D29D8 (exp.c)
 * Callees:
 *     <none>
 */

double *__fastcall splitexp(double a1, double a2, double a3, double a4, double a5, int *a6, double *a7, double *a8)
{
  double v9; // xmm4_8
  double v11; // xmm4_8
  int v12; // r8d
  __int64 v13; // rcx
  double v14; // xmm0_8
  double v15; // xmm3_8
  double v16; // xmm4_8
  double v17; // xmm6_8
  double *result; // rax
  double v19; // xmm1_8

  v9 = a1 * a3;
  if ( a1 * a3 <= 0.0 )
    v11 = v9 - 0.5;
  else
    v11 = v9 + 0.5;
  v12 = (int)v11;
  v13 = (int)v11 & 0x1F;
  v14 = (double)(int)v11;
  v15 = qword_1C020C240[v13];
  v16 = qword_1C020C340[v13];
  *a6 = (v12 - (int)v13) / 32;
  v17 = (a1 - v14 * a4) * a2;
  *a7 = v15;
  result = a8;
  v19 = (double)-v12 * a5 * a2;
  *a8 = ((((((v19 + v17) * 0.001388894908637772 + 0.008333367984342196) * (v19 + v17) + 0.04166666666622608)
         * (v19 + v17)
         + 0.1666666666652609)
        * (v19 + v17)
        + 0.5)
       * ((v19 + v17)
        * (v19 + v17))
       + v19
       + v17)
      * (v16 + v15)
      + v16;
  return result;
}
