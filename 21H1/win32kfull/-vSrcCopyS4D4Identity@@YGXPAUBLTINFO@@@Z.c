/*
 * XREFs of ?vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z @ 0xBFDC2
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

void __stdcall vSrcCopyS4D4Identity(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // edi
  _BYTE *v2; // esi
  _BYTE *v3; // edx
  int v4; // eax
  int v5; // ebx
  void *v6; // eax
  _BYTE *v7; // edi
  int v8; // esi
  char v9; // cl
  int v10; // eax
  char *v11; // ecx
  char v12; // cl
  bool v13; // zf
  int v14; // eax
  int v15; // edx
  int v16; // eax
  unsigned __int8 v17; // ch
  char v18; // al
  int v19; // eax
  int v20; // [esp+Ch] [ebp-20h]
  int v21; // [esp+10h] [ebp-1Ch]
  unsigned __int8 *v22; // [esp+10h] [ebp-1Ch]
  _BYTE *v23; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  _BYTE *v25; // [esp+1Ch] [ebp-10h]
  _BYTE *Src; // [esp+20h] [ebp-Ch]
  char *Srca; // [esp+20h] [ebp-Ch]
  _BYTE *v28; // [esp+24h] [ebp-8h]
  _BYTE *v29; // [esp+24h] [ebp-8h]
  unsigned __int8 v30; // [esp+2Bh] [ebp-1h]

  v1 = a1;
  v30 = 0;
  v2 = (_BYTE *)(*((_DWORD *)a1 + 2) + (*((int *)a1 + 11) >> 1));
  v3 = (_BYTE *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 1));
  v23 = v2;
  v25 = v3;
  v24 = *((_DWORD *)a1 + 5);
  if ( *((int *)a1 + 3) <= 0 )
  {
    while ( 1 )
    {
      v10 = *((_DWORD *)v1 + 9);
      v11 = (char *)*((_DWORD *)v1 + 11);
      v29 = v2;
      v22 = v3;
      v20 = v10;
      Srca = v11;
      if ( (v10 & 1) == 0 )
      {
        v30 = *v3;
        v22 = v3 - 1;
        v11 = (char *)*((_DWORD *)v1 + 11);
      }
      v12 = ((unsigned __int8)v11 & 1) != 0 ? 0 : *v2 & 0xF;
      v13 = v10 == *((_DWORD *)v1 + 10);
      v14 = *((_DWORD *)v1 + 11);
      if ( !v13 )
        break;
LABEL_41:
      if ( (v14 & 1) == 0 )
        *v29 = v12 | *v29 & 0xF0;
      if ( !--v24 )
        return;
      v3 += *((_DWORD *)v1 + 7);
      v2 += *((_DWORD *)v1 + 8);
      v25 = v3;
      v23 = v2;
    }
    v15 = v20;
    while ( 1 )
    {
      v16 = v14 & 1;
      if ( (v15 & 1) != 0 )
      {
        v17 = *v22--;
        v1 = a1;
        v30 = v17;
        if ( !v16 )
        {
          LOBYTE(v19) = 16 * v17;
LABEL_38:
          *v2-- = v12 | v19;
          v12 = 0;
          goto LABEL_39;
        }
        v18 = v17 & 0xF;
      }
      else
      {
        if ( !v16 )
        {
          v19 = v30 & 0xF0;
          goto LABEL_38;
        }
        v18 = v30 >> 4;
      }
      v12 |= v18;
LABEL_39:
      --v15;
      LOBYTE(v14) = (_BYTE)Srca-- - 1;
      if ( v15 == *((_DWORD *)v1 + 10) )
      {
        v3 = v25;
        v29 = v2;
        v2 = v23;
        goto LABEL_41;
      }
    }
  }
  while ( 1 )
  {
    v4 = *((_DWORD *)v1 + 9);
    v21 = *((_DWORD *)v1 + 11) & 1;
    v5 = *((_DWORD *)v1 + 10) - v4;
    v28 = v2;
    Src = v3;
    if ( (((unsigned __int8)v4 ^ *((_BYTE *)v1 + 44)) & 1) != 0 )
    {
      if ( v21 && v5 )
      {
        *v2 = *v2 & 0xF0 | (*v3 >> 4);
        --v5;
        v28 = v2 + 1;
      }
      if ( (v5 >> 1) - 1 >= 0 )
      {
        v7 = v28;
        v8 = (v5 >> 1) - 1;
        do
        {
          v9 = 16 * *v3++;
          *v7++ = v9 | (*v3 >> 4);
          --v8;
        }
        while ( v8 >= 0 );
        v2 = v23;
        Src = v3;
        v3 = v25;
        v28 = v7;
        v1 = a1;
      }
      if ( (v5 & 1) != 0 )
        *v28 = *v28 & 0xF | (16 * *Src);
    }
    else
    {
      if ( v21 && v5 )
      {
        *v2 ^= (*v2 ^ *v3) & 0xF;
        Src = v3 + 1;
        --v5;
        v6 = v2 + 1;
        v28 = v2 + 1;
      }
      else
      {
        v6 = v2;
      }
      memmove(v6, Src, v5 >> 1);
      if ( (v5 & 1) != 0 )
        v28[v5 >> 1] = Src[v5 >> 1] ^ (v28[v5 >> 1] ^ Src[v5 >> 1]) & 0xF;
      v3 = v25;
    }
    if ( !--v24 )
      break;
    v3 += *((_DWORD *)v1 + 7);
    v2 += *((_DWORD *)v1 + 8);
    v25 = v3;
    v23 = v2;
  }
}
