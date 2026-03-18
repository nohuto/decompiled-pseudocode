/*
 * XREFs of _or_all_N_wide_rotated_no_last@28 @ 0x247358
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

char *__stdcall or_all_N_wide_rotated_no_last(int a1, char a2, int a3, char *a4, _BYTE *a5, int a6, int a7)
{
  int v7; // edx
  _BYTE *v8; // esi
  char v9; // bl
  char *result; // eax
  char v11; // dl
  int v12; // [esp+Ch] [ebp-4h]
  _BYTE *v13; // [esp+18h] [ebp+8h]
  _BYTE *v14; // [esp+20h] [ebp+10h]

  v7 = a7;
  v8 = a5;
  v13 = &a5[a3 * a1];
  v12 = a3 - a7 + 1;
  do
  {
    v9 = 0;
    v14 = &v8[v7 - 1];
    result = a4;
    do
    {
      v11 = *result;
      *v8 |= v9 | ((unsigned __int8)*result >> a2);
      v9 = v11 << (8 - a2);
      ++v8;
      result = ++a4;
    }
    while ( v8 != v14 );
    *v8 |= v9;
    v8 += v12;
    v7 = a7;
  }
  while ( v8 != v13 );
  return result;
}
