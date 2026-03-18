/*
 * XREFs of ?vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0xA7E1A
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

void __stdcall vSrcCopyS32D24(struct BLTINFO *a1)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v4; // edi
  XLATE *v5; // ecx
  int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  int v10; // ebx
  unsigned int i; // edx
  int v12; // edx
  int v13; // ebx
  int v14; // eax
  int j; // edx
  char v16; // al
  char v17; // al
  unsigned int (__fastcall *v18)(struct _XLATEOBJ *, unsigned int); // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int v22; // [esp+Ch] [ebp-18h]
  unsigned int (__fastcall *v23)(struct _XLATEOBJ *, unsigned int); // [esp+Ch] [ebp-18h]
  int v24; // [esp+10h] [ebp-14h]
  int v25; // [esp+14h] [ebp-10h]
  XLATE *v26; // [esp+18h] [ebp-Ch]
  XLATE *v27; // [esp+18h] [ebp-Ch]
  unsigned int v28; // [esp+1Ch] [ebp-8h]
  unsigned int v29; // [esp+1Ch] [ebp-8h]
  unsigned int v30; // [esp+20h] [ebp-4h]
  int v31; // [esp+20h] [ebp-4h]
  struct BLTINFO *v32; // [esp+2Ch] [ebp+8h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = 3 * *((_DWORD *)a1 + 11);
  v30 = v2;
  v4 = *((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9);
  v5 = *(XLATE **)a1;
  v32 = (struct BLTINFO *)*((_DWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 2) + v3;
  v26 = v5;
  v25 = *((_DWORD *)a1 + 7) - 4 * v2;
  v24 = *((_DWORD *)a1 + 8) - 3 * v2;
  if ( (*(_BYTE *)(*((_DWORD *)v5 + 9) + 16) & 8) != 0 && (*(_BYTE *)(*((_DWORD *)v5 + 10) + 16) & 8) != 0 )
  {
    v7 = v6 & 3;
    v27 = (XLATE *)v7;
    if ( v7 > v2 )
    {
      v7 = v2;
      v27 = (XLATE *)v2;
    }
    v8 = v2 - v7;
    v9 = v8 >> 2;
    v10 = v8 & 3;
    v22 = v9;
    v31 = v10;
    while ( 1 )
    {
      for ( i = v7; i; --i )
      {
        *(_BYTE *)v6 = *(_BYTE *)v4;
        *(_BYTE *)(v6 + 1) = *(_BYTE *)(v4 + 1);
        v16 = *(_BYTE *)(v4 + 2);
        v4 += 4;
        *(_BYTE *)(v6 + 2) = v16;
        v6 += 3;
      }
      v28 = v9;
      if ( v9 )
      {
        do
        {
          v12 = *(_DWORD *)(v4 + 4) >> 8;
          *(_DWORD *)v6 = (*(_DWORD *)(v4 + 4) << 24) | *(_DWORD *)v4 & 0xFFFFFF;
          v13 = HIWORD(*(_DWORD *)(v4 + 8));
          *(_DWORD *)(v6 + 4) = (*(_DWORD *)(v4 + 8) << 16) | (unsigned __int16)v12;
          v14 = *(_DWORD *)(v4 + 12);
          v4 += 16;
          *(_DWORD *)(v6 + 8) = (v14 << 8) | (unsigned __int8)v13;
          v6 += 12;
          --v28;
        }
        while ( v28 );
        v10 = v31;
        v9 = v22;
      }
      for ( j = v10; j; --j )
      {
        *(_BYTE *)v6 = *(_BYTE *)v4;
        *(_BYTE *)(v6 + 1) = *(_BYTE *)(v4 + 1);
        v17 = *(_BYTE *)(v4 + 2);
        v4 += 4;
        *(_BYTE *)(v6 + 2) = v17;
        v6 += 3;
      }
      v32 = (struct BLTINFO *)((char *)v32 - 1);
      if ( !v32 )
        break;
      v4 += v25;
      v6 += v24;
      v7 = (unsigned int)v27;
    }
  }
  else
  {
    v18 = XLATE::pfnXlateBetweenBitfields(v5);
    v23 = v18;
    while ( 1 )
    {
      v29 = v2;
      do
      {
        v19 = v18((struct _XLATEOBJ *)v26, *(_DWORD *)v4);
        *(_BYTE *)v6 = v19;
        v4 += 4;
        v20 = v19 >> 8;
        *(_BYTE *)(v6 + 2) = BYTE2(v19);
        v18 = v23;
        *(_BYTE *)(v6 + 1) = v20;
        v6 += 3;
        --v29;
      }
      while ( v29 );
      v21 = v32 == (struct BLTINFO *)1;
      v32 = (struct BLTINFO *)((char *)v32 - 1);
      v2 = v30;
      if ( v21 )
        break;
      v4 += v25;
      v6 += v24;
    }
  }
}
