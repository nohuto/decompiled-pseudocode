/*
 * XREFs of _or_all_4_wide_rotated_no_last@24 @ 0x2471E1
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall or_all_4_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, int a5, int a6)
{
  unsigned __int8 *v6; // esi
  unsigned __int8 *v7; // edi
  _BYTE *v8; // ebx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  unsigned int result; // eax

  v6 = a4;
  v7 = &a4[3 * a1];
  if ( a4 != v7 )
  {
    v8 = (_BYTE *)(a5 + 2);
    do
    {
      v9 = v6[2];
      v10 = (v6[1] | (*v6 << 8)) << 8;
      v6 += 3;
      v11 = (v9 | (unsigned int)v10) << 8 >> a2;
      v8[1] |= v11;
      *(v8 - 2) |= HIBYTE(v11);
      *(v8 - 1) |= BYTE2(v11);
      result = v11 >> 8;
      *v8 |= BYTE1(v11);
      v8 += a3;
    }
    while ( v6 != v7 );
  }
  return result;
}
