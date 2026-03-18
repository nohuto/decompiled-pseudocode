/*
 * XREFs of _or_all_N_wide_unrotated@28 @ 0x2473C8
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

int __stdcall or_all_N_wide_unrotated(int a1, int a2, int a3, _BYTE *a4, _BYTE *a5, int a6, int a7)
{
  _BYTE *v7; // ecx
  int result; // eax
  _BYTE *v10; // ebx

  v7 = a5;
  result = a7;
  do
  {
    v10 = &v7[result];
    do
      *v7++ |= *a4++;
    while ( v7 != v10 );
    result = a7;
    v7 += a3 - a7;
  }
  while ( v7 != &a5[a3 * a1] );
  return result;
}
