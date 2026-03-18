/*
 * XREFs of ?vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x230957
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

void __stdcall vSrcCopyS16D16(XLATE **a1)
{
  _DWORD *v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  XLATE *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ecx
  unsigned int v11; // edx
  XLATE *v12; // edx
  XLATE *v13; // eax
  bool v14; // sf
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // ecx
  int (__fastcall *v19)(struct _XLATEOBJ *, unsigned int); // [esp+Ch] [ebp-18h]
  char v20; // [esp+10h] [ebp-14h]
  XLATE *v21; // [esp+10h] [ebp-14h]
  XLATE *v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+18h] [ebp-Ch]
  int v24; // [esp+1Ch] [ebp-8h]
  XLATE *v25; // [esp+20h] [ebp-4h]
  struct BLTINFO *v26; // [esp+2Ch] [ebp+8h]

  v22 = *a1;
  v2 = (_DWORD *)((char *)a1[1] + 2 * (_DWORD)a1[9]);
  v3 = (int)a1[2] + 2 * (_DWORD)a1[11];
  v25 = a1[4];
  v26 = a1[5];
  v4 = *((_DWORD *)v22 + 10);
  v24 = (int)a1[7] - 2 * (_DWORD)v25;
  v23 = (int)a1[8] - 2 * (_DWORD)v25;
  v5 = *(_DWORD *)(*((_DWORD *)v22 + 9) + 16);
  if ( (v5 & 0x200000) != 0 && (*(_DWORD *)(v4 + 16) & 0x400000) != 0 )
  {
    while ( 1 )
    {
      v6 = v25;
      if ( (v3 & 2) != 0 )
      {
        v7 = *(unsigned __int16 *)v2;
        v2 = (_DWORD *)((char *)v2 + 2);
        *(_WORD *)v3 = v7 & 0x1F | (2 * (v7 & 0xFFE0)) | (v7 >> 4) & 0x20;
        v3 += 2;
        v6 = (XLATE *)((char *)v25 - 1);
      }
      v8 = (int)v6 - 2;
      if ( v8 >= 0 )
      {
        v9 = (unsigned int)(v8 + 2) >> 1;
        do
        {
          v10 = *v2 & 0x1F001F;
          v11 = (2 * (*v2 & 0xFFE07FE0)) | (*v2 >> 4) & 0x200020;
          ++v2;
          *(_DWORD *)v3 = v10 | v11;
          v3 += 4;
          --v9;
        }
        while ( v9 );
      }
      if ( (v8 & 1) != 0 )
      {
        *(_WORD *)v3 = *(_WORD *)v2 & 0x1F | (2 * (*(_WORD *)v2 & 0xFFE0)) | (*(_WORD *)v2 >> 4) & 0x20;
        v3 += 2;
        v2 = (_DWORD *)((char *)v2 + 2);
      }
      v26 = (struct BLTINFO *)((char *)v26 - 1);
      if ( !v26 )
        break;
      v2 = (_DWORD *)((char *)v2 + v24);
      v3 += v23;
    }
  }
  else if ( (v5 & 0x400000) != 0 && (*(_DWORD *)(v4 + 16) & 0x200000) != 0 )
  {
    v12 = v25;
    while ( 1 )
    {
      v13 = v12;
      if ( (v3 & 2) != 0 )
      {
        v13 = (XLATE *)((char *)v12 - 1);
        *(_WORD *)v3 = *(_WORD *)v2 & 0x1F | (*(_WORD *)v2 >> 1) & 0x7FE0;
        v3 += 2;
        v2 = (_DWORD *)((char *)v2 + 2);
      }
      v14 = (int)v13 - 2 < 0;
      v15 = (int)v13 - 2;
      v20 = v15;
      if ( !v14 )
      {
        v16 = (unsigned int)(v15 + 2) >> 1;
        do
        {
          v17 = *v2 & 0x1F001F;
          v18 = (*v2++ >> 1) & 0x7FE07FE0;
          *(_DWORD *)v3 = v17 | v18;
          v3 += 4;
          --v16;
        }
        while ( v16 );
        LOBYTE(v15) = v20;
        v12 = v25;
      }
      if ( (v15 & 1) != 0 )
      {
        *(_WORD *)v3 = *(_WORD *)v2 & 0x1F | (*(_WORD *)v2 >> 1) & 0x7FE0;
        v3 += 2;
        v2 = (_DWORD *)((char *)v2 + 2);
      }
      v26 = (struct BLTINFO *)((char *)v26 - 1);
      if ( !v26 )
        break;
      v2 = (_DWORD *)((char *)v2 + v24);
      v3 += v23;
    }
  }
  else
  {
    v19 = XLATE::pfnXlateBetweenBitfields(v22);
    while ( 1 )
    {
      v21 = v25;
      do
      {
        *(_WORD *)v3 = v19((struct _XLATEOBJ *)v22, *(unsigned __int16 *)v2);
        v2 = (_DWORD *)((char *)v2 + 2);
        v3 += 2;
        v21 = (XLATE *)((char *)v21 - 1);
      }
      while ( v21 );
      v26 = (struct BLTINFO *)((char *)v26 - 1);
      if ( !v26 )
        break;
      v2 = (_DWORD *)((char *)v2 + v24);
      v3 += v23;
    }
  }
}
