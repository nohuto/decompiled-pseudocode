/*
 * XREFs of _or_first_3_wide_rotated_need_last@24 @ 0x247403
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall or_first_3_wide_rotated_need_last(
        int a1,
        char a2,
        int a3,
        unsigned __int8 *a4,
        _BYTE *a5,
        int a6)
{
  unsigned __int8 *v7; // esi
  int v8; // eax
  int v9; // edx
  unsigned int v10; // edx
  unsigned int result; // eax

  v7 = a4;
  do
  {
    v8 = v7[2];
    v9 = (v7[1] | (*v7 << 8)) << 8;
    v7 += 3;
    v10 = (v8 | (unsigned int)v9) >> a2;
    a5[2] = v10;
    *a5 |= BYTE2(v10);
    result = v10 >> 8;
    a5[1] = BYTE1(v10);
    a5 += a3;
  }
  while ( v7 != &a4[3 * a1] );
  return result;
}
