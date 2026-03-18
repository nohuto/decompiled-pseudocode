/*
 * XREFs of ?vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0xFB94C
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QAEP6IKPAU_XLATEOBJ@@K@ZXZ @ 0xBB29C (-pfnXlateBetweenBitfields@XLATE@@QAEP6IKPAU_XLATEOBJ@@K@ZXZ.c)
 */

void __stdcall vSrcCopyS24D16(struct BLTINFO *a1)
{
  int v2; // ebx
  int v3; // edi
  unsigned __int8 *v4; // esi
  int v5; // ecx
  XLATE *v6; // edx
  int v7; // eax
  unsigned __int8 *v8; // esi
  unsigned int *v9; // edi
  unsigned int v10; // eax
  unsigned __int8 *v11; // esi
  int *v12; // edi
  int v13; // eax
  struct _XLATEOBJ *v14; // ecx
  struct _XLATEOBJ *v15; // edi
  char *v16; // ecx
  bool v17; // zf
  int (__fastcall *v18)(struct _XLATEOBJ *, unsigned int); // [esp+Ch] [ebp-20h]
  int v19; // [esp+14h] [ebp-18h]
  int v20; // [esp+18h] [ebp-14h]
  int v21; // [esp+1Ch] [ebp-10h]
  int v22; // [esp+20h] [ebp-Ch]
  unsigned __int8 *v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+28h] [ebp-4h]
  int i; // [esp+28h] [ebp-4h]
  int v26; // [esp+28h] [ebp-4h]
  int j; // [esp+28h] [ebp-4h]
  int v28; // [esp+28h] [ebp-4h]
  struct BLTINFO *v29; // [esp+34h] [ebp+8h]

  v22 = *((_DWORD *)a1 + 5);
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 11);
  v4 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9));
  v21 = *((_DWORD *)a1 + 4);
  v23 = v4;
  v29 = (struct BLTINFO *)v3;
  v5 = *((_DWORD *)a1 + 8);
  v6 = *(XLATE **)a1;
  v19 = v5 - 2 * v21;
  v20 = v2 - 3 * v21;
  if ( (*(_BYTE *)(*((_DWORD *)v6 + 9) + 16) & 8) == 0 )
    goto LABEL_20;
  v7 = *(_DWORD *)(*((_DWORD *)v6 + 10) + 16);
  if ( (v7 & 0x400000) != 0 )
  {
    while ( 1 )
    {
      v24 = v21;
      if ( (v3 & 2) != 0 )
      {
        *(_WORD *)v3 = (*v4 >> 3) | (8 * (v4[1] & 0xFC | (32 * (v4[2] & 0xF8))));
        v29 = (struct BLTINFO *)((char *)v29 + 2);
        v23 += 3;
        v24 = v21 - 1;
      }
      v8 = v23;
      v9 = (unsigned int *)v29;
      for ( i = v24 - 2; i >= 0; i -= 2 )
      {
        v10 = ((v8[5] << 24) | (v8[3] << 13) | (8 * v8[1])) & 0xF81F07E0 | ((v8[4] << 19) | (v8[2] << 8) | (*v8 >> 3)) & 0x7E0F81F;
        v8 += 6;
        *v9++ = v10;
      }
      if ( (i & 1) != 0 )
      {
        *(_WORD *)v9 = (*v8 >> 3) | (8 * (v8[1] & 0xFC | (32 * (v8[2] & 0xF8))));
        v9 = (unsigned int *)((char *)v9 + 2);
        v8 += 3;
      }
      if ( !--v22 )
        break;
      v4 = &v8[v20];
      v3 = (int)v9 + v19;
      v23 = v4;
      v29 = (struct BLTINFO *)v3;
    }
    return;
  }
  if ( (((unsigned int)&loc_1FFFFC + 4) & v7) == 0 )
  {
LABEL_20:
    v18 = XLATE::pfnXlateBetweenBitfields(v6);
    v15 = v14;
    while ( 1 )
    {
      v28 = v21;
      do
      {
        *(_WORD *)v29 = v18(v15, *v4 | (*(unsigned __int16 *)(v4 + 1) << 8));
        v16 = (char *)v29 + 2;
        v4 = v23 + 3;
        v29 = (struct BLTINFO *)((char *)v29 + 2);
        v17 = v28-- == 1;
        v23 += 3;
      }
      while ( !v17 );
      if ( !--v22 )
        break;
      v4 += v20;
      v23 = v4;
      v29 = (struct BLTINFO *)&v16[v19];
    }
    return;
  }
  while ( 1 )
  {
    v26 = v21;
    if ( (v3 & 2) != 0 )
    {
      *(_WORD *)v3 = (*v4 >> 3) | (4 * (v4[1] & 0xF8 | (32 * (v4[2] & 0xF8))));
      v29 = (struct BLTINFO *)((char *)v29 + 2);
      v23 += 3;
      v26 = v21 - 1;
    }
    v11 = v23;
    v12 = (int *)v29;
    for ( j = v26 - 2; j >= 0; j -= 2 )
    {
      v13 = ((v11[5] << 23) | (v11[3] << 13) | (4 * v11[1])) & 0x7C1F03E0 | ((v11[4] << 18) | (v11[2] << 7) | (*v11 >> 3)) & 0x3E07C1F;
      v11 += 6;
      *v12++ = v13;
    }
    if ( (j & 1) != 0 )
    {
      *(_WORD *)v12 = (*v11 >> 3) | (4 * (v11[1] & 0xF8 | (32 * (v11[2] & 0xF8))));
      v12 = (int *)((char *)v12 + 2);
      v11 += 3;
    }
    if ( !--v22 )
      break;
    v4 = &v11[v20];
    v3 = (int)v12 + v19;
    v23 = v4;
    v29 = (struct BLTINFO *)v3;
  }
}
