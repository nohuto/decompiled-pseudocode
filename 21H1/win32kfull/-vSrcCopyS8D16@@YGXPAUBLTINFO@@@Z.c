/*
 * XREFs of ?vSrcCopyS8D16@@YGXPAUBLTINFO@@@Z @ 0x2311A5
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

void __stdcall vSrcCopyS8D16(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // esi
  int v3; // ebx
  int v4; // ecx
  int v5; // edi
  int v6; // edx
  int v7; // eax
  bool v8; // sf
  int v9; // eax
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+Ch] [ebp-10h]
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  char v16; // [esp+18h] [ebp-4h]
  struct BLTINFO *v17; // [esp+24h] [ebp+8h]

  v2 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9));
  v3 = *((_DWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 4);
  v17 = (struct BLTINFO *)*((_DWORD *)a1 + 5);
  v15 = v4;
  v5 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v13 = *((_DWORD *)a1 + 7) - v4;
  v6 = *((_DWORD *)a1 + 8) - 2 * v4;
  v14 = v6;
  while ( 1 )
  {
    v7 = v4;
    if ( (v3 & 2) != 0 )
    {
      *(_WORD *)v3 = *(_WORD *)(v5 + 4 * *v2);
      v3 += 2;
      ++v2;
      v7 = v4 - 1;
    }
    v8 = v7 - 2 < 0;
    v9 = v7 - 2;
    v16 = v9;
    if ( !v8 )
    {
      v10 = (unsigned int)(v9 + 2) >> 1;
      do
      {
        v11 = *(_DWORD *)(v5 + 4 * v2[1]);
        v12 = *v2;
        v2 += 2;
        *(_DWORD *)v3 = *(_DWORD *)(v5 + 4 * v12) | (v11 << 16);
        v3 += 4;
        --v10;
      }
      while ( v10 );
      LOBYTE(v9) = v16;
      v4 = v15;
      v6 = v14;
    }
    if ( (v9 & 1) != 0 )
    {
      *(_WORD *)v3 = *(_WORD *)(v5 + 4 * *v2);
      v3 += 2;
      ++v2;
    }
    v17 = (struct BLTINFO *)((char *)v17 - 1);
    if ( !v17 )
      break;
    v2 += v13;
    v3 += v6;
  }
}
