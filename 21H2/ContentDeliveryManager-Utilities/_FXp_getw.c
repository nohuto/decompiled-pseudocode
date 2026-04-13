/*
 * XREFs of _FXp_getw @ 0x1800BA90C
 * Callers:
 *     _FDtento @ 0x1800BADF0 (_FDtento.c)
 * Callees:
 *     <none>
 */

float __fastcall FXp_getw(float *a1, int a2)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm5_4

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
    *((_WORD *)a1 + 4) |= 1u;
    v5 = a1[2];
  }
  if ( (float)(v6 - v3) == v4 )
    return v5 + v6;
  else
    return (float)(v5 + v4) + v3;
}
