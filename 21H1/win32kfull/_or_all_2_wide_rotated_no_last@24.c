/*
 * XREFs of _or_all_2_wide_rotated_no_last@24 @ 0x83020
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

_BYTE *__stdcall or_all_2_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5, int a6)
{
  char v6; // cl
  unsigned __int8 *v7; // esi
  _BYTE *result; // eax
  unsigned __int8 v9; // bl
  unsigned __int8 *v10; // [esp+20h] [ebp+14h]

  v6 = a2;
  v7 = a4;
  v10 = &a4[a1];
  result = a5;
  do
  {
    v9 = *v7++;
    *result |= v9 >> v6;
    result[1] |= v9 << (8 - a2);
    result += a3;
    v6 = a2;
  }
  while ( v7 != v10 );
  return result;
}
