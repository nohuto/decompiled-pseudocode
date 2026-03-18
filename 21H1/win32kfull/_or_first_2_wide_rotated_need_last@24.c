/*
 * XREFs of _or_first_2_wide_rotated_need_last@24 @ 0xBB436
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

_BYTE *__stdcall or_first_2_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5, int a6)
{
  unsigned __int8 *v6; // esi
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // al
  unsigned __int8 v9; // bl
  _BYTE *result; // eax
  unsigned __int8 *v11; // [esp+20h] [ebp+14h]

  v6 = a4;
  v11 = &a4[2 * a1];
  do
  {
    v7 = *v6;
    v8 = *v6;
    v9 = v6[1];
    v6 += 2;
    *a5 |= v8 >> a2;
    a5[1] = (v7 << (8 - a2)) | (v9 >> a2);
    result = &a5[a3];
    a5 += a3;
  }
  while ( v6 != v11 );
  return result;
}
