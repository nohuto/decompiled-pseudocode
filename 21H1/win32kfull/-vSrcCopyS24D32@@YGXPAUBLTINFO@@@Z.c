/*
 * XREFs of ?vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0x97606
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

void __stdcall vSrcCopyS24D32(struct BLTINFO *a1)
{
  int v2; // ebx
  int *v3; // edi
  int v4; // ecx
  unsigned __int8 *v5; // esi
  XLATE *v6; // ecx
  struct BLTINFO *v7; // edx
  int v8; // eax
  int v9; // ecx
  struct _XLATEOBJ *v10; // ebx
  unsigned int (__fastcall *v11)(struct _XLATEOBJ *, unsigned int); // [esp+Ch] [ebp-18h]
  struct _XLATEOBJ *v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+1Ch] [ebp-8h]
  struct BLTINFO *v16; // [esp+20h] [ebp-4h]
  struct BLTINFO *v17; // [esp+2Ch] [ebp+8h]

  v2 = *((_DWORD *)a1 + 5);
  v15 = v2;
  v3 = (int *)(*((_DWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 11));
  v4 = *((_DWORD *)a1 + 7);
  v5 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9));
  v17 = (struct BLTINFO *)*((_DWORD *)a1 + 4);
  v14 = v4 - 3 * (_DWORD)v17;
  v13 = *((_DWORD *)a1 + 8) - 4 * (_DWORD)v17;
  v6 = *(XLATE **)a1;
  v12 = *(struct _XLATEOBJ **)a1;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a1 + 36) + 16) & 8) != 0 && (*(_BYTE *)(*((_DWORD *)v6 + 10) + 16) & 8) != 0 )
  {
    while ( 1 )
    {
      v7 = v17;
      do
      {
        v8 = *v5;
        v9 = *(unsigned __int16 *)(v5 + 1) << 8;
        v5 += 3;
        *v3++ = v8 | v9;
        v7 = (struct BLTINFO *)((char *)v7 - 1);
      }
      while ( v7 );
      if ( !--v2 )
        break;
      v5 += v14;
      v3 = (int *)((char *)v3 + v13);
    }
  }
  else
  {
    v10 = *(struct _XLATEOBJ **)a1;
    v11 = XLATE::pfnXlateBetweenBitfields(v6);
    while ( 1 )
    {
      v16 = v17;
      do
      {
        *v3 = v11(v10, *v5 | (*(unsigned __int16 *)(v5 + 1) << 8));
        v5 += 3;
        ++v3;
        v16 = (struct BLTINFO *)((char *)v16 - 1);
      }
      while ( v16 );
      if ( !--v15 )
        break;
      v5 += v14;
      v3 = (int *)((char *)v3 + v13);
      v10 = v12;
    }
  }
}
