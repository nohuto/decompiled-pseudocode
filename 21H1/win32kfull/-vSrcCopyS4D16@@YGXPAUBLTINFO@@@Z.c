/*
 * XREFs of ?vSrcCopyS4D16@@YGXPAUBLTINFO@@@Z @ 0x2310EA
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

void __stdcall vSrcCopyS4D16(struct BLTINFO *a1)
{
  int v2; // edi
  unsigned __int8 *v3; // ecx
  int v4; // ebx
  unsigned __int8 *v5; // esi
  unsigned __int8 v6; // al
  int v7; // ecx
  unsigned __int8 v8; // di
  int v9; // eax
  unsigned __int8 v10; // cl
  struct BLTINFO *v11; // [esp+Ch] [ebp-1Ch]
  int v12; // [esp+10h] [ebp-18h]
  unsigned __int8 *v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+1Ch] [ebp-Ch]
  int v16; // [esp+20h] [ebp-8h]
  unsigned __int8 v17; // [esp+27h] [ebp-1h]
  struct BLTINFO *v18; // [esp+30h] [ebp+8h]

  v17 = 0;
  v2 = *((_DWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 11);
  v14 = *((_DWORD *)a1 + 5);
  v3 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 1));
  v16 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v15 = *((_DWORD *)a1 + 10);
  while ( 1 )
  {
    v4 = *((_DWORD *)a1 + 9);
    v5 = v3;
    v13 = v3;
    v12 = v2;
    v18 = (struct BLTINFO *)v2;
    if ( (v4 & 1) != 0 )
    {
      v6 = *v3;
      v5 = v3 + 1;
      v17 = *v3;
    }
    else
    {
      v6 = v17;
    }
    if ( v4 != v15 )
    {
      v7 = v2;
      v8 = v6;
      do
      {
        v11 = (struct BLTINFO *)(v7 + 2);
        if ( (v4 & 1) != 0 )
        {
          v9 = v8 & 0xF;
        }
        else
        {
          v10 = *v5++;
          v8 = v10;
          v17 = v10;
          v9 = v10 >> 4;
        }
        ++v4;
        *(_WORD *)v18 = *(_WORD *)(v16 + 4 * v9);
        v7 = (int)v11;
        v15 = *((_DWORD *)a1 + 10);
        v18 = v11;
      }
      while ( v4 != v15 );
      v3 = v13;
      v2 = v12;
    }
    if ( !--v14 )
      break;
    v3 += *((_DWORD *)a1 + 7);
    v2 += *((_DWORD *)a1 + 8);
  }
}
