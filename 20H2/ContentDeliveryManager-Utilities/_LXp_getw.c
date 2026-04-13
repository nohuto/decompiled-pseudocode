/*
 * XREFs of _LXp_getw @ 0x1800B9118
 * Callers:
 *     _Dtento @ 0x1800B9614 (_Dtento.c)
 *     _LDtento @ 0x1800BA0AC (_LDtento.c)
 * Callees:
 *     <none>
 */

double __fastcall LXp_getw(double *a1, int a2)
{
  double v3; // xmm3_8
  double v4; // xmm2_8
  double v5; // xmm1_8
  double v6; // xmm5_8

  if ( !a2 )
    return 0.0;
  if ( a2 == 1 )
    return *a1;
  v3 = *a1;
  if ( *a1 == 0.0 )
    return *a1;
  v4 = a1[1];
  if ( v4 == 0.0 )
    return *a1;
  if ( a2 == 2 )
    return v4 + v3;
  v5 = a1[2];
  if ( v5 == 0.0 )
    return v4 + v3;
  v6 = v4 + v3;
  if ( a1[3] != 0.0 )
  {
    *((_WORD *)a1 + 8) |= 1u;
    v5 = a1[2];
  }
  if ( v6 - v3 == v4 )
    return v5 + v6;
  else
    return v5 + v4 + v3;
}
