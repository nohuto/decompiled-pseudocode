/*
 * XREFs of _or_all_1_wide_unrotated@24 @ 0xA5040
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

int __stdcall or_all_1_wide_unrotated(int a1, int a2, int a3, _BYTE *a4, _BYTE *a5, int a6)
{
  _BYTE *v6; // ecx
  int result; // eax

  v6 = a4;
  do
  {
    LOBYTE(result) = *v6;
    *a5 |= *v6++;
    a5 += a3;
  }
  while ( v6 != &a4[a1] );
  return result;
}
