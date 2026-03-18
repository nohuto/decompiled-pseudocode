/*
 * XREFs of _or_all_3_wide_rotated_no_last@24 @ 0xA2C92
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall or_all_3_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, int a5, int a6)
{
  unsigned __int8 *v6; // edi
  _BYTE *v7; // esi
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int result; // eax

  v6 = a4;
  v7 = (_BYTE *)(a5 + 2);
  do
  {
    v8 = *v6;
    v9 = v6[1];
    v6 += 2;
    v10 = (v9 | (unsigned int)(v8 << 8)) << 8 >> a2;
    *v7 |= v10;
    *(v7 - 2) |= BYTE2(v10);
    result = v10 >> 8;
    *(v7 - 1) |= BYTE1(v10);
    v7 += a3;
  }
  while ( v6 != &a4[2 * a1] );
  return result;
}
