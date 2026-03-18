/*
 * XREFs of _mov_first_1_wide_unrotated@24 @ 0xBB414
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

int __stdcall mov_first_1_wide_unrotated(int a1, int a2, int a3, _BYTE *a4, _BYTE *a5, int a6)
{
  _BYTE *v6; // ecx
  int result; // eax

  v6 = a4;
  do
  {
    LOBYTE(result) = *v6++;
    *a5 = result;
    a5 += a3;
  }
  while ( v6 != &a4[a1] );
  return result;
}
