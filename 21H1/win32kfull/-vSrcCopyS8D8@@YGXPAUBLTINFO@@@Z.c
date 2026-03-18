/*
 * XREFs of ?vSrcCopyS8D8@@YGXPAUBLTINFO@@@Z @ 0xBA604
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

void __stdcall vSrcCopyS8D8(struct BLTINFO *a1)
{
  int v2; // esi
  struct BLTINFO *v3; // edi
  unsigned __int8 *v4; // edx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // [esp+Ch] [ebp-1Ch]
  int v16; // [esp+10h] [ebp-18h]
  unsigned int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]
  struct BLTINFO *v21; // [esp+30h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v3 = (struct BLTINFO *)*((_DWORD *)a1 + 4);
  v4 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9));
  v5 = -v2 & 3;
  v18 = *((_DWORD *)a1 + 5);
  v6 = *(_DWORD *)a1;
  v21 = (struct BLTINFO *)v5;
  v20 = *(_DWORD *)(v6 + 16);
  v16 = *((_DWORD *)a1 + 7) - (_DWORD)v3;
  v15 = *((_DWORD *)a1 + 8) - (_DWORD)v3;
  if ( v5 > (unsigned int)v3 )
  {
    v5 = (unsigned int)v3;
    v21 = v3;
  }
  v7 = (unsigned int)v3 - v5;
  v8 = v7 >> 2;
  v9 = v7 & 3;
  v17 = v8;
  v19 = v9;
  while ( 1 )
  {
    v10 = v5;
    if ( v5 )
    {
      do
      {
        *(_BYTE *)v2++ = *(_BYTE *)(v20 + 4 * *v4++);
        --v10;
      }
      while ( v10 );
      v9 = v19;
      v5 = (unsigned int)v21;
      v8 = v17;
    }
    if ( v8 )
    {
      v11 = v8;
      do
      {
        v12 = *(_DWORD *)(v20 + 4 * v4[1]) | ((*(_DWORD *)(v20 + 4 * v4[2]) | (*(_DWORD *)(v20 + 4 * v4[3]) << 8)) << 8);
        v13 = *v4;
        v4 += 4;
        *(_DWORD *)v2 = *(_DWORD *)(v20 + 4 * v13) | (v12 << 8);
        v2 += 4;
        --v11;
      }
      while ( v11 );
      v9 = v19;
      v5 = (unsigned int)v21;
    }
    v14 = v9;
    if ( v9 )
    {
      do
      {
        *(_BYTE *)v2++ = *(_BYTE *)(v20 + 4 * *v4++);
        --v14;
      }
      while ( v14 );
      v9 = v19;
      v5 = (unsigned int)v21;
    }
    if ( !--v18 )
      break;
    v4 += v16;
    v2 += v15;
    v8 = v17;
  }
}
