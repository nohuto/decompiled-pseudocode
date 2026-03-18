/*
 * XREFs of ?vSrcCopyS1D32@@YGXPAUBLTINFO@@@Z @ 0x4DFCC
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __stdcall vSrcCopyS1D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // edx
  unsigned __int8 v2; // bh
  int v3; // esi
  int v4; // edi
  int v5; // eax
  _BYTE *v6; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  char v12; // bl
  unsigned __int8 *v13; // edi
  char v14; // bl
  unsigned int v15; // edx
  _DWORD *v16; // esi
  unsigned int v17; // ecx
  unsigned int v18; // eax
  _DWORD v19[2]; // [esp+Ch] [ebp-20h]
  int v20; // [esp+14h] [ebp-18h]
  _DWORD *v21; // [esp+18h] [ebp-14h]
  int v22; // [esp+1Ch] [ebp-10h]
  _BYTE *v23; // [esp+20h] [ebp-Ch]
  unsigned int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v1 = a1;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 5);
  v25 = *((_DWORD *)a1 + 4);
  v5 = *(_DWORD *)a1;
  v6 = (_BYTE *)(*((_DWORD *)a1 + 1) + (v3 >> 3));
  v23 = v6;
  v7 = *(_DWORD **)(v5 + 16);
  v19[0] = *v7;
  v8 = v7[1];
  v9 = *((_DWORD *)a1 + 11);
  v19[1] = v8;
  v10 = *((_DWORD *)a1 + 2) + 4 * v9;
  v22 = v10;
  if ( v4 )
  {
    v11 = v25;
    while ( 1 )
    {
      v12 = *((_BYTE *)v1 + 36);
      v20 = v4 - 1;
      v13 = v6;
      v21 = (_DWORD *)v10;
      v24 = v11;
      v14 = v12 & 7;
      if ( v14 )
      {
        v2 = *v6 << v14;
        v11 = v25;
      }
      else
      {
        v13 = v6 - 1;
      }
      if ( v11 )
        break;
LABEL_14:
      v6 += *((_DWORD *)v1 + 7);
      v10 += *((_DWORD *)v1 + 8);
      v4 = v20;
      v23 = v6;
      v22 = v10;
      if ( !v20 )
        return;
    }
    v15 = v24;
    v16 = v21;
    while ( 1 )
    {
      if ( !v14 )
      {
        ++v13;
        if ( v15 >= 8 )
        {
          v24 = v15 >> 3;
          do
          {
            v2 = *v13;
            v15 -= 8;
            v17 = *v13;
            *v16 = v19[v17 >> 7];
            v16[1] = v19[(v17 >> 6) & 1];
            v16[2] = v19[(v17 >> 5) & 1];
            v16[3] = v19[(v17 >> 4) & 1];
            v16[4] = v19[(v17 >> 3) & 1];
            v16[5] = v19[(v17 >> 2) & 1];
            ++v13;
            v16[6] = v19[(v17 >> 1) & 1];
            v16[7] = v19[v17 & 1];
            v16 += 8;
            --v24;
          }
          while ( v24 );
          --v13;
          goto LABEL_12;
        }
        v2 = *v13;
      }
      v18 = v2;
      v2 *= 2;
      v14 = (v14 + 1) & 7;
      *v16++ = v19[v18 >> 7];
      --v15;
LABEL_12:
      if ( !v15 )
      {
        v1 = a1;
        v6 = v23;
        v10 = v22;
        v11 = v25;
        goto LABEL_14;
      }
    }
  }
}
