/*
 * XREFs of _or_first_3_wide_rotated_no_last@24 @ 0x247454
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall or_first_3_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5, int a6)
{
  unsigned __int8 *v6; // esi
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int result; // eax

  v6 = a4;
  do
  {
    v8 = *v6;
    v9 = v6[1];
    v6 += 2;
    v10 = (v9 | (unsigned int)(v8 << 8)) << 8 >> a2;
    a5[2] = v10;
    *a5 |= BYTE2(v10);
    result = v10 >> 8;
    a5[1] = BYTE1(v10);
    a5 += a3;
  }
  while ( v6 != &a4[2 * a1] );
  return result;
}
