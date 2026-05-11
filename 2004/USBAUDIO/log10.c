/*
 * XREFs of log10 @ 0x1C0012688
 * Callers:
 *     USBCntrlGetSetDbLevel @ 0x1C00311F0 (USBCntrlGetSetDbLevel.c)
 * Callees:
 *     _handle_error @ 0x1C0012AFC (_handle_error.c)
 */

double __cdecl log10(double X)
{
  double v1; // r8
  __int64 v2; // xmm5_8
  int v3; // r9d
  double v4; // xmm4_8
  double v5; // xmm2_8
  double v6; // xmm1_8
  double v7; // xmm3_8
  __int64 v8; // rdx
  double v9; // xmm2_8
  double v10; // xmm0_8
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      X = 0.0;
      v12 = v2;
      v11 = 0;
LABEL_4:
      handle_error((unsigned int)"log10", 27, LODWORD(v1), 1, v11, 33, v12, 0LL, 1);
      return X;
    }
    if ( X >= 0.0 )
      return X;
LABEL_7:
    X = 0.0;
    LODWORD(v1) = 0;
    v12 = v2;
    v11 = 8;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    X = 0.0;
    handle_error((unsigned int)"log10", 27, 0, 2, 4, 34, v2, 0LL, 1);
    return X;
  }
  v3 = 0;
  if ( X < 0.0 )
    goto LABEL_7;
  if ( (unsigned __int64)(*(_QWORD *)&X - 0x3FEE0FAA00000000LL) > 0x2F88200000000LL )
  {
    if ( *(_QWORD *)&X < 0x10000000000000uLL )
    {
      v3 = 60;
      v1 = COERCE_DOUBLE(*(_QWORD *)&X | 0x3D0000000000000LL) - 2.565335500811485e-290;
    }
    v8 = ((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40);
    v9 = (COERCE_DOUBLE(*(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL) - (double)(int)v8 * 0.0078125)
       / ((COERCE_DOUBLE(*(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL) - (double)(int)v8 * 0.0078125) * 0.5
        + (double)(int)v8 * 0.0078125);
    v10 = (double)(int)(((*(_QWORD *)&v1 >> 52) & 0x7FF) - v3 - 1023);
    v4 = v10 * 0.6931471228599548 + *(double *)&aOutputbufferCa[8 * v8 + 8];
    v7 = ((v9 * v9 * 0.002232198107585598 + 0.01249999999781387) * (v9 * v9) + 0.08333333333333336) * (v9 * v9) * v9
       + v9
       + qword_1C0017F70[v8]
       + v10 * 0.00000005769999047543285;
  }
  else
  {
    *(_QWORD *)&v4 = COERCE_UNSIGNED_INT64(X - 1.0) & 0xFFFFFFFF00000000uLL;
    v5 = (X - 1.0) / (X - 1.0 + 2.0);
    v6 = v5 + v5;
    v7 = (((v6 * v6 * 0.0004348877777076146 + 0.002232139987919448) * (v6 * v6) + 0.01250000000377175) * (v6 * v6)
        + 0.08333333333333179)
       * (v6
        * v6
        * v6)
       - v5 * (X - 1.0)
       + X
       - 1.0
       - v4;
  }
  return v7 * 0.0000007349550096401511
       + v4 * 0.0000007349550096401511
       + v7 * 0.4342937469482422
       + v4 * 0.4342937469482422;
}
