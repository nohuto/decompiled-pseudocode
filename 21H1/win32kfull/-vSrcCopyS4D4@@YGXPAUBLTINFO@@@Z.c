/*
 * XREFs of ?vSrcCopyS4D4@@YGXPAUBLTINFO@@@Z @ 0xBA4D8
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

void __stdcall vSrcCopyS4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // edi
  _BYTE *v2; // esi
  _BYTE *v3; // edx
  int v4; // eax
  int v5; // ebx
  _BYTE *v6; // ecx
  _BYTE *v7; // edi
  int v8; // edx
  _BYTE *v9; // eax
  _BYTE *v10; // edi
  int v11; // esi
  char v12; // cl
  int v13; // eax
  int v14; // [esp+Ch] [ebp-20h]
  int v15; // [esp+10h] [ebp-1Ch]
  _BYTE *v16; // [esp+14h] [ebp-18h]
  _BYTE *v17; // [esp+18h] [ebp-14h]
  char v18; // [esp+1Ch] [ebp-10h]
  int v19; // [esp+20h] [ebp-Ch]
  _BYTE *v20; // [esp+24h] [ebp-8h]
  _BYTE *v21; // [esp+28h] [ebp-4h]

  v1 = a1;
  v14 = *((_DWORD *)a1 + 5);
  v2 = (_BYTE *)(*((_DWORD *)a1 + 2) + (*((int *)a1 + 11) >> 1));
  v3 = (_BYTE *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 1));
  v19 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  while ( 1 )
  {
    v4 = *((_DWORD *)v1 + 9);
    v15 = *((_DWORD *)v1 + 11) & 1;
    v5 = *((_DWORD *)v1 + 10) - v4;
    v17 = v3;
    v16 = v2;
    v21 = v2;
    v20 = v3;
    v18 = v5;
    if ( (((unsigned __int8)v4 ^ *((_BYTE *)v1 + 44)) & 1) != 0 )
    {
      if ( v15 && v5 )
      {
        --v5;
        v1 = a1;
        *v2 = *(_BYTE *)(v19 + 4 * ((unsigned __int8)*v3 >> 4)) | *v2 & 0xF0;
        v21 = v2 + 1;
        v18 = v5;
      }
      v9 = v3;
      if ( (v5 >> 1) - 1 >= 0 )
      {
        v10 = v21;
        v11 = (v5 >> 1) - 1;
        do
        {
          v12 = *(_BYTE *)(v19 + 4 * ((unsigned __int8)v9[1] >> 4)) | (16 * *(_BYTE *)(v19 + 4 * (*v9 & 0xF)));
          ++v9;
          *v10++ = v12;
          --v11;
        }
        while ( v11 >= 0 );
        v2 = v16;
        LOBYTE(v5) = v18;
        v21 = v10;
        v1 = a1;
      }
      if ( (v5 & 1) != 0 )
      {
        v13 = *v9 & 0xF;
LABEL_25:
        *v21 = *v21 & 0xF | (16 * *(_BYTE *)(v19 + 4 * v13));
      }
    }
    else
    {
      if ( v15 && v5 )
      {
        v6 = v3 + 1;
        v1 = a1;
        --v5;
        *v2 = *(_BYTE *)(v19 + 4 * (*v3 & 0xF)) | *v2 & 0xF0;
        v20 = v3 + 1;
        v21 = v2 + 1;
        v18 = v5;
      }
      else
      {
        v6 = v3;
      }
      if ( (v5 >> 1) - 1 >= 0 )
      {
        v7 = v21;
        v8 = (v5 >> 1) - 1;
        do
        {
          *v7++ = *(_BYTE *)(v19 + 4 * (*v6 & 0xF)) | (16 * *(_BYTE *)(v19 + 4 * ((unsigned __int8)*v6 >> 4)));
          v6 = v20 + 1;
          --v8;
          ++v20;
        }
        while ( v8 >= 0 );
        LOBYTE(v5) = v18;
        v3 = v17;
        v21 = v7;
        v1 = a1;
      }
      if ( (v5 & 1) != 0 )
      {
        v13 = (unsigned __int8)*v6 >> 4;
        goto LABEL_25;
      }
    }
    if ( !--v14 )
      break;
    v3 += *((_DWORD *)v1 + 7);
    v2 += *((_DWORD *)v1 + 8);
  }
}
