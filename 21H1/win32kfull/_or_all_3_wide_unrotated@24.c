/*
 * XREFs of _or_all_3_wide_unrotated@24 @ 0x247161
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

char __stdcall or_all_3_wide_unrotated(int a1, int a2, int a3, char *a4, int a5, int a6)
{
  char *v6; // edi
  _BYTE *v7; // esi
  char v8; // cl
  char v9; // dl
  char result; // al

  v6 = a4;
  v7 = (_BYTE *)(a5 + 2);
  do
  {
    v8 = v6[1];
    v9 = v6[2];
    result = *v6;
    v6 += 3;
    *(v7 - 2) |= result;
    *(v7 - 1) |= v8;
    *v7 |= v9;
    v7 += a3;
  }
  while ( v6 != &a4[3 * a1] );
  return result;
}
