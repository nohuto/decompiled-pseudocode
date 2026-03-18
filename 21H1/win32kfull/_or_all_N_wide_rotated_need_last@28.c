/*
 * XREFs of _or_all_N_wide_rotated_need_last@28 @ 0x2472E3
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

__int16 __stdcall or_all_N_wide_rotated_need_last(
        int a1,
        char a2,
        int a3,
        unsigned __int8 *a4,
        _BYTE *a5,
        int a6,
        int a7)
{
  int v7; // ecx
  _BYTE *v8; // esi
  int v9; // edi
  unsigned __int8 *v10; // edi
  unsigned __int8 v11; // ah
  unsigned __int8 *v12; // edi
  _BYTE *v13; // esi
  __int16 result; // ax
  _BYTE *v15; // [esp+14h] [ebp+8h]
  int v16; // [esp+1Ch] [ebp+10h]
  _BYTE *v17; // [esp+20h] [ebp+14h]
  char v18; // [esp+24h] [ebp+18h]

  v7 = a7;
  v8 = a5;
  v9 = a3 * a1;
  v16 = a3 - a7;
  v15 = &a5[v9];
  v18 = 8 - a2;
  do
  {
    v10 = a4;
    v17 = &v8[v7];
    v11 = *v10;
    v12 = v10 + 1;
    *v8 |= v11 >> a2;
    v13 = v8 + 1;
    HIBYTE(result) = v11 << v18;
    do
    {
      LOBYTE(result) = HIBYTE(result) | (*v12 >> a2);
      HIBYTE(result) = *v12;
      *v13 |= result;
      HIBYTE(result) <<= v18;
      ++v13;
      ++v12;
    }
    while ( v13 != v17 );
    v8 = &v13[v16];
    v7 = a7;
    a4 = v12;
  }
  while ( v8 != v15 );
  return result;
}
