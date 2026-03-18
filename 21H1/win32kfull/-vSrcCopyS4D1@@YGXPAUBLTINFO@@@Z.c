/*
 * XREFs of ?vSrcCopyS4D1@@YGXPAUBLTINFO@@@Z @ 0xB9616
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

void __stdcall vSrcCopyS4D1(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // edx
  char v2; // bl
  _BYTE *v3; // edi
  _BYTE *v4; // esi
  int v5; // ecx
  int v6; // eax
  _BYTE *v7; // edi
  char v8; // si
  int v9; // eax
  int v10; // eax
  _BYTE *v11; // [esp+10h] [ebp-20h]
  _BYTE *v12; // [esp+14h] [ebp-1Ch]
  int v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+1Ch] [ebp-14h]
  _BYTE *v15; // [esp+20h] [ebp-10h]
  int v16; // [esp+24h] [ebp-Ch]
  _BYTE *v17; // [esp+28h] [ebp-8h]
  int v18; // [esp+2Ch] [ebp-4h]

  v1 = a1;
  v2 = 0;
  v13 = *((_DWORD *)a1 + 5);
  v3 = (_BYTE *)(*((_DWORD *)a1 + 2) + (*((int *)a1 + 11) >> 3));
  v4 = (_BYTE *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 1));
  LOBYTE(v18) = 0;
  v14 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  while ( 1 )
  {
    v5 = *((_DWORD *)v1 + 9);
    v6 = *((_DWORD *)v1 + 11);
    v12 = v4;
    v11 = v3;
    v17 = v3;
    v15 = v4;
    v16 = v6;
    if ( (v5 & 1) != 0 )
    {
      LOBYTE(v1) = *v4;
      v18 = (int)v1;
      v15 = v4 + 1;
      v1 = a1;
    }
    if ( (v6 & 7) != 0 )
      v2 = *v3 >> (8 - (v6 & 7));
    if ( v5 != *((_DWORD *)v1 + 10) )
    {
      v6 = v18;
      v7 = v15;
      v8 = v18;
      do
      {
        v2 *= 2;
        if ( (v5 & 1) != 0 )
        {
          v9 = v8 & 0xF;
        }
        else
        {
          LOBYTE(v6) = *v7++;
          v8 = v6;
          v18 = v6;
          v9 = (unsigned __int8)v6 >> 4;
        }
        v1 = a1;
        if ( *(_DWORD *)(v14 + 4 * v9) )
          v2 |= 1u;
        v6 = v16 + 1;
        ++v5;
        v16 = v6;
        if ( (v6 & 7) == 0 )
        {
          *v17++ = v2;
          v1 = a1;
        }
      }
      while ( v5 != *((_DWORD *)v1 + 10) );
      v4 = v12;
      v3 = v11;
    }
    v10 = v6 & 7;
    if ( v10 )
    {
      v18 = 255 >> v10;
      v2 <<= 8 - v10;
      *v17 = (255 >> v10) & *v17 | v2 & ~(255 >> v10);
    }
    if ( !--v13 )
      break;
    v4 += *((_DWORD *)v1 + 7);
    v3 += *((_DWORD *)v1 + 8);
  }
}
