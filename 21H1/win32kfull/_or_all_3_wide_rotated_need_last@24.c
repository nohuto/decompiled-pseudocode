/*
 * XREFs of _or_all_3_wide_rotated_need_last@24 @ 0x24710D
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall or_all_3_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, int a5, int a6)
{
  unsigned __int8 *v6; // esi
  _BYTE *v7; // edi
  int v8; // eax
  int v9; // edx
  unsigned int v10; // edx
  unsigned int result; // eax

  v6 = a4;
  v7 = (_BYTE *)(a5 + 2);
  do
  {
    v8 = v6[2];
    v9 = (v6[1] | (*v6 << 8)) << 8;
    v6 += 3;
    v10 = (v8 | (unsigned int)v9) >> a2;
    *v7 |= v10;
    *(v7 - 2) |= BYTE2(v10);
    result = v10 >> 8;
    *(v7 - 1) |= BYTE1(v10);
    v7 += a3;
  }
  while ( v6 != &a4[3 * a1] );
  return result;
}
