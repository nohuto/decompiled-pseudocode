/*
 * XREFs of _or_all_4_wide_unrotated@24 @ 0x247244
 * Callers:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

__int16 __stdcall or_all_4_wide_unrotated(int a1, int a2, int a3, unsigned int a4, int a5, int a6)
{
  char *v6; // ecx
  _WORD *v7; // edx
  char *v8; // esi
  int v9; // edi
  unsigned int v10; // eax
  char *v11; // ecx
  _BYTE *v12; // edx
  char v13; // al
  unsigned int v14; // esi

  v6 = (char *)a4;
  v7 = (_WORD *)a5;
  v8 = (char *)(a4 + 4 * a1);
  v9 = 0;
  if ( (a5 & 3) != 0 )
  {
    LOWORD(v10) = (a5 & 3) - 1;
    if ( (a5 & 3) != 1 )
    {
      LOWORD(v10) = (a5 & 3) - 2;
      if ( (a5 & 3) == 2 )
      {
        while ( v6 != v8 )
        {
          *v7 |= *(_WORD *)v6;
          LOWORD(v10) = *((_WORD *)v6 + 1);
          v6 += 4;
          v7[1] |= v10;
          v7 = (_WORD *)((char *)v7 + a3);
        }
        return v10;
      }
      LOWORD(v10) = (a5 & 3) - 3;
      if ( (a5 & 3) != 3 )
        return v10;
    }
    if ( (char *)a4 != v8 )
    {
      v11 = (char *)(a4 + 2);
      v12 = (_BYTE *)(a5 + 2);
      do
      {
        *(v12 - 2) |= *(v11 - 2);
        *(v12 - 1) |= *(v11 - 1);
        v13 = *v11;
        v11 += 4;
        *v12 |= v13;
        v12[1] |= *(v11 - 3);
        LOWORD(v10) = (_WORD)v11 - 2;
        v12 += a3;
      }
      while ( v11 - 2 != v8 );
    }
  }
  else
  {
    v10 = (unsigned int)(4 * a1 + 3) >> 2;
    v14 = (unsigned int)v8 >= a4 ? v10 : 0;
    if ( v14 )
    {
      do
      {
        v10 = *(_DWORD *)v6;
        v6 += 4;
        *(_DWORD *)v7 |= v10;
        v7 = (_WORD *)((char *)v7 + a3);
        ++v9;
      }
      while ( v9 != v14 );
    }
  }
  return v10;
}
