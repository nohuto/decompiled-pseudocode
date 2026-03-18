/*
 * XREFs of exp @ 0x1C00D29D8
 * Callers:
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C01F91D8 (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 * Callees:
 *     splitexp @ 0x1C00D2C94 (splitexp.c)
 *     _handle_error @ 0x1C00D31D4 (_handle_error.c)
 */

double __cdecl exp(double X)
{
  __int64 v1; // r8
  __int64 v2; // r9
  double v3; // xmm4_8
  unsigned __int64 v4; // rax
  int v5; // edx
  int v7; // [rsp+60h] [rbp+10h] BYREF
  double v8; // [rsp+68h] [rbp+18h]
  double v9; // [rsp+70h] [rbp+20h]
  __int64 v10; // [rsp+78h] [rbp+28h]

  v7 = 0;
  v9 = 0.0;
  v8 = 0.0;
  v3 = X;
  *(double *)&v10 = X;
  v4 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v5 = -17155601;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) >= 0x40862E42FEFA39EFLL )
  {
    v5 = 0;
    if ( v4 >= 0x7FF0000000000000LL )
    {
      if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        handle_error((unsigned int)"exp", 20, LODWORD(X), 1, 0, 33, *(__int64 *)&X, 0LL, 1);
      }
      else if ( X < 0.0 )
      {
        return 0.0;
      }
      return X;
    }
    if ( X > 709.782712893384 )
    {
      handle_error((unsigned int)"exp", 20, 0, 3, 17, 34, *(__int64 *)&X, 0LL, 1);
      return X;
    }
    X = DOUBLE_N745_1332191019411;
    if ( v3 < -745.1332191019411 )
    {
      handle_error((unsigned int)"exp", 20, 0, 4, 18, 34, *(__int64 *)&v3, 0LL, 1);
      return X;
    }
  }
  if ( v4 >= 0x3FB0000000000000LL )
  {
    splitexp(0, v5, v1, v2, *(__int64 *)&DOUBLE_5_689487495325456eN11, (__int64)&v7);
    if ( (unsigned int)(v7 + 1022) > 0x7FD )
    {
      v10 = (v7 - v7 / 2 + 1023LL) << 52;
      return (v8 + v9) * COERCE_DOUBLE((v7 / 2 + 1023LL) << 52) * *(double *)&v10;
    }
    else
    {
      v10 = (v7 + 1023LL) << 52;
      return (v8 + v9) * *(double *)&v10;
    }
  }
  else
  {
    if ( v4 >= 0x3C00000000000000LL )
      v3 = (((((((((v3 * 0.0000002755731922398589 + 0.000002755731922398589) * v3 + 0.0000248015873015873) * v3
                + 0.0001984126984126984)
               * v3
               + 0.001388888888888889)
              * v3
              + 0.008333333333333333)
             * v3
             + 0.04166666666666666)
            * v3
            + 0.1666666666666667)
           * v3
           + 0.5)
          * v3
          + 1.0)
         * v3;
    return v3 + 1.0;
  }
}
