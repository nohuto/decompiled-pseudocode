/*
 * XREFs of ?vSrcCopyS8D4@@YGXPAUBLTINFO@@@Z @ 0x230198
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

void __stdcall vSrcCopyS8D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  int v2; // edx
  _BYTE *v3; // edx
  unsigned __int8 *v4; // edi
  int v5; // ebx
  unsigned __int8 *v6; // ecx
  int v7; // eax
  _BYTE *v8; // esi
  unsigned __int8 *v9; // edi
  char v10; // cl
  int v11; // eax
  unsigned __int8 *v12; // [esp+10h] [ebp-1Ch]
  int v13; // [esp+14h] [ebp-18h]
  int v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  _BYTE *v16; // [esp+20h] [ebp-Ch]
  int v17; // [esp+24h] [ebp-8h]
  unsigned __int8 *v18; // [esp+28h] [ebp-4h]
  unsigned __int8 *v19; // [esp+28h] [ebp-4h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 11);
  v14 = v2 + *((_DWORD *)a1 + 4);
  v13 = *((_DWORD *)a1 + 5);
  v3 = (_BYTE *)(*((_DWORD *)a1 + 2) + (v2 >> 1));
  v4 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9));
  v17 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  while ( 1 )
  {
    v5 = *((_DWORD *)v1 + 11);
    v6 = v4;
    v12 = v4;
    v16 = v3;
    v18 = v4;
    if ( (v5 & 1) != 0 )
    {
      v1 = a1;
      ++v5;
      *v3 = *(_BYTE *)(v17 + 4 * *v4) | *v3 & 0xF0;
      v6 = v4 + 1;
      v18 = v4 + 1;
      v16 = v3 + 1;
    }
    v15 = v5 + 1;
    v7 = v14;
    if ( v5 + 1 < v14 )
    {
      v8 = v16;
      v9 = v18;
      do
      {
        v5 += 2;
        v10 = *(_BYTE *)(v17 + 4 * *v9);
        v11 = v9[1];
        v9 += 2;
        *v8++ = *(_BYTE *)(v17 + 4 * v11) | (16 * v10);
        v15 += 2;
      }
      while ( v15 < v14 );
      v7 = v14;
      v19 = v9;
      v4 = v12;
      v6 = v19;
      v16 = v8;
      v1 = a1;
    }
    if ( v5 < v7 )
      *v16 = *v16 & 0xF | (16 * *(_BYTE *)(v17 + 4 * *v6));
    if ( !--v13 )
      break;
    v4 += *((_DWORD *)v1 + 7);
    v3 += *((_DWORD *)v1 + 8);
  }
}
