/*
 * XREFs of ?vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x231257
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

void __stdcall vSrcCopyS16D24(struct BLTINFO *a1)
{
  unsigned int v1; // esi
  int v2; // ebx
  int v3; // edx
  int v4; // edi
  unsigned __int16 *v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // [esp+Ch] [ebp-24h]
  int v17; // [esp+10h] [ebp-20h]
  unsigned int v18; // [esp+14h] [ebp-1Ch]
  unsigned int v19; // [esp+18h] [ebp-18h]
  int v20; // [esp+1Ch] [ebp-14h]
  unsigned int v21; // [esp+20h] [ebp-10h]
  unsigned int v22; // [esp+20h] [ebp-10h]
  int v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+24h] [ebp-Ch]
  int v25; // [esp+28h] [ebp-8h]
  int (__fastcall *v26)(struct _XLATEOBJ *, unsigned int); // [esp+2Ch] [ebp-4h]
  struct BLTINFO *v27; // [esp+38h] [ebp+8h]

  v1 = *((_DWORD *)a1 + 4);
  v20 = *((_DWORD *)a1 + 5);
  v2 = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11);
  v25 = *((_DWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 9);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *((_DWORD *)a1 + 7) - 2 * v1;
  v27 = *(struct BLTINFO **)a1;
  v17 = v4;
  v16 = v3 - 3 * v1;
  v5 = (unsigned __int16 *)v25;
  v26 = XLATE::pfnXlateBetweenBitfields(v27);
  v6 = v2 & 3;
  v19 = v6;
  if ( v6 > v1 )
  {
    v6 = v1;
    v19 = v1;
  }
  v7 = v1 - v6;
  v8 = v7 >> 2;
  v9 = v7 & 3;
  v18 = v8;
  v24 = v9;
  while ( 1 )
  {
    v21 = v6;
    if ( v6 )
    {
      do
      {
        v10 = v26((struct _XLATEOBJ *)v27, *v5);
        *(_BYTE *)v2 = v10;
        ++v5;
        *(_BYTE *)(v2 + 1) = BYTE1(v10);
        *(_BYTE *)(v2 + 2) = BYTE2(v10);
        v2 += 3;
        --v21;
      }
      while ( v21 );
      v9 = v24;
      v8 = v18;
      v25 = (int)v5;
    }
    v22 = v8;
    if ( v8 )
    {
      do
      {
        v11 = v26((struct _XLATEOBJ *)v27, *v5);
        v12 = v26((struct _XLATEOBJ *)v27, v5[1]);
        *(_DWORD *)v2 = v11 | (v12 << 24);
        v13 = v26((struct _XLATEOBJ *)v27, *(unsigned __int16 *)(v25 + 4));
        *(_DWORD *)(v2 + 4) = (v13 << 16) | (v12 >> 8);
        v14 = v26((struct _XLATEOBJ *)v27, *(unsigned __int16 *)(v25 + 6));
        v5 = (unsigned __int16 *)(v25 + 8);
        v25 += 8;
        *(_DWORD *)(v2 + 8) = HIWORD(v13) | (v14 << 8);
        v2 += 12;
        --v22;
      }
      while ( v22 );
      v9 = v24;
    }
    v23 = v9;
    if ( v9 )
    {
      do
      {
        v15 = v26((struct _XLATEOBJ *)v27, *v5);
        *(_BYTE *)v2 = v15;
        ++v5;
        *(_BYTE *)(v2 + 1) = BYTE1(v15);
        *(_BYTE *)(v2 + 2) = BYTE2(v15);
        v2 += 3;
        --v23;
      }
      while ( v23 );
      v9 = v24;
    }
    if ( !--v20 )
      break;
    v5 = (unsigned __int16 *)((char *)v5 + v17);
    v2 += v16;
    v6 = v19;
    v8 = v18;
    v25 = (int)v5;
  }
}
