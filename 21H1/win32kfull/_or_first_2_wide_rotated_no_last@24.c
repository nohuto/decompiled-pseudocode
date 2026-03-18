/*
 * XREFs of _or_first_2_wide_rotated_no_last@24 @ 0xBB3D6
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

char __stdcall or_first_2_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5, int a6)
{
  unsigned __int8 *v6; // esi
  unsigned __int8 v8; // dl
  char result; // al
  unsigned __int8 *v10; // [esp+20h] [ebp+14h]

  v6 = a4;
  v10 = &a4[a1];
  do
  {
    v8 = *v6++;
    result = v8 >> a2;
    *a5 |= v8 >> a2;
    a5[1] = v8 << (8 - a2);
    a5 += a3;
  }
  while ( v6 != v10 );
  return result;
}
