/*
 * XREFs of _or_all_2_wide_unrotated@24 @ 0xA88E0
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall or_all_2_wide_unrotated(int a1, int a2, int a3, unsigned __int16 *a4, _BYTE *a5, int a6)
{
  unsigned __int16 *v6; // edx
  _BYTE *v7; // ecx
  unsigned __int16 *v8; // esi
  unsigned int v9; // eax
  unsigned int result; // eax

  v6 = a4;
  v7 = a5;
  v8 = &a4[a1];
  if ( ((unsigned __int8)a5 & 1) != 0 )
  {
    do
    {
      v9 = *v6++;
      *v7 |= v9;
      result = v9 >> 8;
      v7[1] |= result;
      v7 += a3;
    }
    while ( v6 != v8 );
  }
  else
  {
    do
    {
      result = *v6++;
      *(_WORD *)v7 |= result;
      v7 += a3;
    }
    while ( v6 != v8 );
  }
  return result;
}
