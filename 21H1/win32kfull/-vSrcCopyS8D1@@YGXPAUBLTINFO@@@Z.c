/*
 * XREFs of ?vSrcCopyS8D1@@YGXPAUBLTINFO@@@Z @ 0x22FCCF
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

void __stdcall vSrcCopyS8D1(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  char v2; // ch
  int v3; // edi
  _BYTE *v4; // edi
  int v5; // edx
  int v6; // ebx
  _BYTE *v7; // esi
  unsigned __int8 *v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // [esp+Ch] [ebp-20h]
  _BYTE *v12; // [esp+14h] [ebp-18h]
  int v13; // [esp+18h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-10h]
  _BYTE *v15; // [esp+24h] [ebp-8h]
  char v16; // [esp+2Bh] [ebp-1h]

  v1 = a1;
  v2 = 0;
  v16 = 0;
  v3 = *((_DWORD *)a1 + 11);
  v14 = v3 + *((_DWORD *)a1 + 4);
  v4 = (_BYTE *)(*((_DWORD *)a1 + 2) + (v3 >> 3));
  v5 = *((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9);
  v11 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v13 = *((_DWORD *)a1 + 5);
  while ( 1 )
  {
    v6 = *((_DWORD *)v1 + 11);
    v12 = v4;
    v15 = v4;
    if ( (v6 & 7) != 0 )
    {
      v2 = *v4 >> (8 - (v6 & 7));
      v16 = v2;
    }
    if ( v6 != v14 )
    {
      v7 = v4;
      v8 = (unsigned __int8 *)v5;
      do
      {
        v9 = *v8;
        v2 *= 2;
        ++v8;
        if ( *(_DWORD *)(v11 + 4 * v9) )
          v2 |= 1u;
        if ( (++v6 & 7) == 0 )
          *v7++ = v2;
      }
      while ( v6 != v14 );
      v4 = v12;
      v15 = v7;
      v1 = a1;
      v16 = v2;
    }
    v10 = v6 & 7;
    if ( v10 )
    {
      v2 = v16 << (8 - v10);
      v16 = v2;
      *v15 = (255 >> v10) & *v15 | v2 & ~(255 >> v10);
    }
    if ( !--v13 )
      break;
    v5 += *((_DWORD *)v1 + 7);
    v4 += *((_DWORD *)v1 + 8);
  }
}
