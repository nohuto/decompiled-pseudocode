/*
 * XREFs of ??$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z @ 0x1801A5E04
 * Callers:
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1801A5508 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ST::SO3_compute_exp_diff_inv_coef<float>(float *a1, float a2, float a3, float a4, float a5)
{
  float v5; // xmm0_4

  if ( a2 >= 0.17577 )
  {
    if ( a2 <= 9.0 )
      v5 = (float)((float)(a4 * 0.5) - a5) / a3;
    else
      v5 = (float)(a4 - (float)(a3 * 0.5)) / (float)(a2 * a4);
  }
  else
  {
    v5 = (float)((float)((float)(a2 * 0.000033068784) + 0.0013888889) * a2) + 0.083333336;
  }
  *a1 = v5;
}
