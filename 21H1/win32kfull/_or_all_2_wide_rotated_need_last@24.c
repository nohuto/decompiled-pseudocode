/*
 * XREFs of _or_all_2_wide_rotated_need_last@24 @ 0x9AF2A
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

char __stdcall or_all_2_wide_rotated_need_last(int a1, char a2, int a3, __int16 *a4, _BYTE *a5, int a6)
{
  __int16 *v7; // esi
  __int16 v8; // dx
  char result; // al
  __int16 *v10; // [esp+20h] [ebp+14h]

  v7 = a4;
  v10 = &a4[a1];
  do
  {
    v8 = *v7++;
    *a5 |= (unsigned __int8)v8 >> a2;
    result = ((_BYTE)v8 << (8 - a2)) | (HIBYTE(v8) >> a2);
    a5[1] |= result;
    a5 += a3;
  }
  while ( v7 != v10 );
  return result;
}
