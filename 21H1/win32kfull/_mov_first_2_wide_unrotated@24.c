/*
 * XREFs of _mov_first_2_wide_unrotated@24 @ 0x24700A
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall mov_first_2_wide_unrotated(int a1, int a2, int a3, unsigned __int16 *a4, _BYTE *a5, int a6)
{
  unsigned __int16 *v6; // ecx
  unsigned int v8; // eax
  unsigned int result; // eax

  v6 = a4;
  do
  {
    v8 = *v6++;
    *a5 = v8;
    result = v8 >> 8;
    a5[1] = result;
    a5 += a3;
  }
  while ( v6 != &a4[a1] );
  return result;
}
