/*
 * XREFs of _or_first_4_wide_rotated_need_last@24 @ 0x24749F
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

unsigned __int32 __stdcall or_first_4_wide_rotated_need_last(
        int a1,
        char a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5,
        int a6)
{
  unsigned int *v7; // edi
  unsigned int v8; // edx
  unsigned __int32 v9; // edx
  unsigned __int32 result; // eax

  v7 = a4;
  do
  {
    v8 = *v7++;
    v9 = _byteswap_ulong(v8) >> a2;
    a5[3] = v9;
    *a5 |= HIBYTE(v9);
    a5[1] = BYTE2(v9);
    result = v9 >> 8;
    a5[2] = BYTE1(v9);
    a5 += a3;
  }
  while ( v7 != &a4[a1] );
  return result;
}
