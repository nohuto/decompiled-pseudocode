/*
 * XREFs of ?vSrcCopyS8D24@@YGXPAUBLTINFO@@@Z @ 0x231DA2
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

void __stdcall vSrcCopyS8D24(struct BLTINFO *a1)
{
  unsigned int v2; // ebx
  unsigned __int8 *v3; // edi
  int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edx
  int v8; // ebx
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-1Ch]
  unsigned int v17; // [esp+10h] [ebp-18h]
  unsigned int v18; // [esp+14h] [ebp-14h]
  int v19; // [esp+18h] [ebp-10h]
  unsigned int v20; // [esp+1Ch] [ebp-Ch]
  unsigned int v21; // [esp+20h] [ebp-8h]
  int v22; // [esp+24h] [ebp-4h]
  struct BLTINFO *v23; // [esp+30h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9));
  v19 = *((_DWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11);
  v23 = *(struct BLTINFO **)(*(_DWORD *)a1 + 16);
  v17 = *((_DWORD *)a1 + 7) - v2;
  v5 = v4 & 3;
  v16 = *((_DWORD *)a1 + 8) - 3 * v2;
  v18 = v5;
  if ( v5 > v2 )
  {
    v5 = v2;
    v18 = v2;
  }
  v6 = v2 - v5;
  v7 = v6 >> 2;
  v8 = v6 & 3;
  v21 = v7;
  v22 = v8;
  while ( 1 )
  {
    if ( v5 )
    {
      v9 = v5;
      do
      {
        v10 = *((_DWORD *)v23 + *v3);
        *(_BYTE *)v4 = v10;
        ++v3;
        *(_BYTE *)(v4 + 1) = BYTE1(v10);
        *(_BYTE *)(v4 + 2) = BYTE2(v10);
        v4 += 3;
        --v9;
      }
      while ( v9 );
      v8 = v22;
      v7 = v21;
    }
    v20 = v7;
    if ( v7 )
    {
      do
      {
        v11 = *((_DWORD *)v23 + v3[1]) >> 8;
        *(_DWORD *)v4 = *((_DWORD *)v23 + *v3) | (*((_DWORD *)v23 + v3[1]) << 24);
        v12 = HIWORD(*((_DWORD *)v23 + v3[2]));
        *(_DWORD *)(v4 + 4) = (*((_DWORD *)v23 + v3[2]) << 16) | v11;
        v13 = v3[3];
        v3 += 4;
        *(_DWORD *)(v4 + 8) = v12 | (*((_DWORD *)v23 + v13) << 8);
        v4 += 12;
        --v20;
      }
      while ( v20 );
      v8 = v22;
      v7 = v21;
    }
    if ( v8 )
    {
      v14 = v8;
      do
      {
        v15 = *((_DWORD *)v23 + *v3);
        *(_BYTE *)v4 = v15;
        ++v3;
        *(_BYTE *)(v4 + 1) = BYTE1(v15);
        *(_BYTE *)(v4 + 2) = BYTE2(v15);
        v4 += 3;
        --v14;
      }
      while ( v14 );
      v8 = v22;
      v7 = v21;
    }
    if ( !--v19 )
      break;
    v3 += v17;
    v4 += v16;
    v5 = v18;
  }
}
