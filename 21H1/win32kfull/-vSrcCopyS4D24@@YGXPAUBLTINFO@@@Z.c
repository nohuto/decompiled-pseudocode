/*
 * XREFs of ?vSrcCopyS4D24@@YGXPAUBLTINFO@@@Z @ 0x231BD8
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

void __stdcall vSrcCopyS4D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // edx
  unsigned int v2; // edi
  int v3; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // esi
  int v8; // edi
  unsigned __int8 *v9; // esi
  char v10; // cl
  unsigned int v11; // edi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  _BYTE *v19; // ebx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // [esp+Ch] [ebp-2Ch]
  unsigned int v24; // [esp+10h] [ebp-28h]
  int v25; // [esp+14h] [ebp-24h]
  int v26; // [esp+18h] [ebp-20h]
  int v27; // [esp+1Ch] [ebp-1Ch]
  unsigned int v28; // [esp+20h] [ebp-18h]
  int v29; // [esp+20h] [ebp-18h]
  int v30; // [esp+24h] [ebp-14h]
  int v31; // [esp+28h] [ebp-10h]
  unsigned int v32; // [esp+2Ch] [ebp-Ch]
  unsigned int v33; // [esp+30h] [ebp-8h]
  int v34; // [esp+34h] [ebp-4h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 4);
  v27 = *((_DWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 1);
  v31 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v5 = v3 & 3;
  v26 = v4;
  v25 = v3;
  v24 = v5;
  if ( v5 > v2 )
  {
    v5 = *((_DWORD *)a1 + 4);
    v24 = v5;
  }
  v6 = v2 - v5;
  v7 = v6 >> 2;
  v8 = v6 & 3;
  v23 = v7;
  v30 = v8;
  while ( 1 )
  {
    v34 = *((_DWORD *)v1 + 9);
    v9 = (unsigned __int8 *)v4;
    v10 = v34;
    if ( v5 )
    {
      v11 = v5;
      do
      {
        v12 = *v9;
        if ( (v10 & 1) != 0 )
        {
          v13 = v12 & 0xF;
          ++v9;
        }
        else
        {
          v13 = v12 >> 4;
        }
        v14 = *(_DWORD *)(v31 + 4 * v13);
        *(_BYTE *)v3 = v14;
        *(_BYTE *)(v3 + 2) = BYTE2(v14);
        *(_BYTE *)(v3 + 1) = BYTE1(v14);
        v10 = v34 + 1;
        v3 += 3;
        ++v34;
        --v11;
      }
      while ( v11 );
      v1 = a1;
      v8 = v30;
    }
    if ( v23 )
    {
      v15 = v23;
      do
      {
        v28 = *v9;
        if ( (v10 & 1) != 0 )
        {
          v16 = v9[1];
          v9 += 2;
          v29 = *(_DWORD *)(v31 + 4 * (v28 & 0xF));
          v33 = *(_DWORD *)(v31 + 4 * (v16 >> 4));
          v32 = *(_DWORD *)(v31 + 4 * (v16 & 0xF));
          v17 = *(_DWORD *)(v31 + 4 * (*v9 >> 4));
        }
        else
        {
          v33 = *(_DWORD *)(v31 + 4 * (v28 & 0xF));
          v29 = *(_DWORD *)(v31 + 4 * (v28 >> 4));
          v18 = v9[1];
          v9 += 2;
          v17 = *(_DWORD *)(v31 + 4 * (v18 & 0xF));
          v32 = *(_DWORD *)(v31 + 4 * (v18 >> 4));
        }
        *(_DWORD *)v3 = v29 | (v33 << 24);
        *(_DWORD *)(v3 + 4) = (v33 >> 8) | (v32 << 16);
        *(_DWORD *)(v3 + 8) = HIWORD(v32) | (v17 << 8);
        v3 += 12;
        v10 = v34 + 4;
        v34 += 4;
        --v15;
      }
      while ( v15 );
      v1 = a1;
      v8 = v30;
    }
    if ( v8 )
    {
      v19 = (_BYTE *)(v3 + 2);
      do
      {
        v20 = *v9;
        if ( (v10 & 1) != 0 )
        {
          v21 = v20 & 0xF;
          ++v9;
        }
        else
        {
          v21 = v20 >> 4;
        }
        v22 = *(_DWORD *)(v31 + 4 * v21);
        *(v19 - 2) = v22;
        *v19 = BYTE2(v22);
        *(v19 - 1) = BYTE1(v22);
        v10 = v34 + 1;
        v19 += 3;
        ++v34;
        --v8;
      }
      while ( v8 );
      v1 = a1;
      v8 = v30;
    }
    if ( !--v27 )
      break;
    v4 = *((_DWORD *)v1 + 7) + v26;
    v3 = *((_DWORD *)v1 + 8) + v25;
    v5 = v24;
    v26 = v4;
    v25 = v3;
  }
}
