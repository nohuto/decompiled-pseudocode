/*
 * XREFs of _or_all_1_wide_rotated_need_last@24 @ 0x9CA4A
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

char __stdcall or_all_1_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5, int a6)
{
  unsigned __int8 *v6; // edx
  unsigned __int8 v8; // al
  char result; // al

  v6 = a4;
  do
  {
    v8 = *v6++;
    result = v8 >> a2;
    *a5 |= result;
    a5 += a3;
  }
  while ( v6 != &a4[a1] );
  return result;
}
