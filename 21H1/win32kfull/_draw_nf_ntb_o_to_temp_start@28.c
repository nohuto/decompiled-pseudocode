/*
 * XREFs of _draw_nf_ntb_o_to_temp_start@28 @ 0x55820
 * Callers:
 *     ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0 (-vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRU.c)
 * Callees:
 *     _or_all_2_wide_rotated_no_last@24 @ 0x83020 (_or_all_2_wide_rotated_no_last@24.c)
 *     _or_all_2_wide_rotated_need_last@24 @ 0x9AF2A (_or_all_2_wide_rotated_need_last@24.c)
 *     _or_all_1_wide_rotated_need_last@24 @ 0x9CA4A (_or_all_1_wide_rotated_need_last@24.c)
 *     _or_all_3_wide_rotated_no_last@24 @ 0xA2C92 (_or_all_3_wide_rotated_no_last@24.c)
 *     _or_all_1_wide_unrotated@24 @ 0xA5040 (_or_all_1_wide_unrotated@24.c)
 *     _or_all_2_wide_unrotated@24 @ 0xA88E0 (_or_all_2_wide_unrotated@24.c)
 *     _exit_fast_text@24 @ 0xB5608 (_exit_fast_text@24.c)
 *     _or_all_3_wide_rotated_need_last@24 @ 0x24710D (_or_all_3_wide_rotated_need_last@24.c)
 *     _or_all_3_wide_unrotated@24 @ 0x247161 (_or_all_3_wide_unrotated@24.c)
 *     _or_all_4_wide_rotated_need_last@24 @ 0x247199 (_or_all_4_wide_rotated_need_last@24.c)
 *     _or_all_4_wide_rotated_no_last@24 @ 0x2471E1 (_or_all_4_wide_rotated_no_last@24.c)
 *     _or_all_4_wide_unrotated@24 @ 0x247244 (_or_all_4_wide_unrotated@24.c)
 *     _or_all_N_wide_rotated_need_last@28 @ 0x2472E3 (_or_all_N_wide_rotated_need_last@28.c)
 *     _or_all_N_wide_rotated_no_last@28 @ 0x247358 (_or_all_N_wide_rotated_no_last@28.c)
 *     _or_all_N_wide_unrotated@28 @ 0x2473C8 (_or_all_N_wide_unrotated@28.c)
 */

_BYTE *__userpurge draw_nf_ntb_o_to_temp_start@<eax>(
        _BYTE *result@<eax>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edx
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // esi
  unsigned __int8 *v14; // esi
  int (__stdcall *v15)(int, int, int, int, int, int); // ecx
  char v16; // cl
  char v17; // di
  unsigned __int8 v18; // bl
  _DWORD *v19; // [esp+0h] [ebp-14h]
  char v20; // [esp+4h] [ebp-10h]
  int v21; // [esp+8h] [ebp-Ch]
  int v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]
  int v24; // [esp+1Ch] [ebp+8h]
  int v25; // [esp+20h] [ebp+Ch]

  v8 = a3;
  if ( a3 )
  {
    v9 = a6;
    v10 = a2 + 4;
    v21 = a2 + 4;
    do
    {
      v25 = v8 - 1;
      v19 = **(_DWORD ***)v10;
      v11 = *v19 + *(_DWORD *)(v10 + 4) - a5;
      v12 = v11 & 7;
      v20 = v11 & 7;
      v13 = v19[2] + 7;
      v24 = v13 >> 3;
      v23 = (v12 + v13) >> 3;
      v14 = (unsigned __int8 *)(v19 + 4);
      result = (_BYTE *)(a4 + v9 * (*(_DWORD *)(v21 + 8) + v19[1] - a8) + (v11 >> 3));
      v22 = v19[3];
      if ( v23 > 4 )
      {
        result = (_BYTE *)OrAllTableWide[(v12 == 0) | (v23 <= v24 ? 0 : 2)](
                            v22,
                            v12,
                            v9,
                            (int)v14,
                            (int)result,
                            v24,
                            v23);
      }
      else
      {
        v15 = OrAllTableNarrow[(4 * v23) | (v12 == 0) | (v23 <= v24 ? 0 : 2)];
        if ( v15 == or_all_2_wide_rotated_no_last )
        {
          v16 = v12;
          v17 = 8 - v12;
          do
          {
            v18 = *v14++;
            *result |= v18 >> v16;
            result[1] |= v18 << v17;
            result += a6;
            v16 = v20;
            v9 = a6;
          }
          while ( v14 != (unsigned __int8 *)((char *)v19 + v22 + 16) );
        }
        else
        {
          result = (_BYTE *)v15(v22, v12, v9, (int)v14, (int)result, v24);
        }
      }
      v8 = v25;
      v10 = v21 + 16;
      v21 += 16;
    }
    while ( v25 );
  }
  return result;
}
