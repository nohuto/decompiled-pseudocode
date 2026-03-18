/*
 * XREFs of ?vSrcCopyS32D4@@YGXPAUBLTINFO@@@Z @ 0x230060
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

void __stdcall vSrcCopyS32D4(struct BLTINFO *a1)
{
  int v1; // esi
  _BYTE *v2; // esi
  ULONG *v3; // edi
  ULONG v4; // ebx
  char v5; // dl
  struct BLTINFO *v6; // eax
  int v7; // ecx
  char v8; // al
  char v9; // al
  ULONG v10; // eax
  char v11; // al
  _BYTE *v12; // esi
  _BYTE *v13; // [esp+Ch] [ebp-24h]
  int v14; // [esp+10h] [ebp-20h]
  int v15; // [esp+14h] [ebp-1Ch]
  ULONG *v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h]
  XLATEOBJ *pxlo; // [esp+20h] [ebp-10h]
  _BYTE *v19; // [esp+24h] [ebp-Ch]
  int v20; // [esp+28h] [ebp-8h]
  char v21; // [esp+2Fh] [ebp-1h]

  v1 = *((_DWORD *)a1 + 11);
  v17 = v1 + *((_DWORD *)a1 + 4);
  v2 = (_BYTE *)(*((_DWORD *)a1 + 2) + (v1 >> 1));
  v13 = v2;
  v3 = (ULONG *)(*((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9));
  v4 = *v3;
  v14 = *((_DWORD *)a1 + 5);
  v16 = v3;
  pxlo = *(XLATEOBJ **)a1;
  v5 = XLATEOBJ_iXlate(*(XLATEOBJ **)a1, *v3);
  v6 = a1;
  while ( 1 )
  {
    v7 = *((_DWORD *)v6 + 11);
    v19 = v2;
    v20 = v7;
    if ( (v7 & 1) != 0 )
    {
      v3 = v16 + 1;
      if ( v4 != *v16 )
      {
        v4 = *v16;
        v8 = XLATEOBJ_iXlate(pxlo, *v16);
        v7 = v20;
        v5 = v8;
      }
      ++v7;
      *v2 = v5 | *v2 & 0xF0;
      v19 = v2 + 1;
      v20 = v7;
    }
    v15 = v7 + 1;
    if ( v7 + 1 < v17 )
    {
      do
      {
        if ( v4 == *v3 )
        {
          v21 = v5;
        }
        else
        {
          v4 = *v3;
          v9 = XLATEOBJ_iXlate(pxlo, *v3);
          v7 = v20;
          v5 = v9;
          v21 = v9;
        }
        v10 = v3[1];
        v3 += 2;
        if ( v4 != v10 )
        {
          v4 = v10;
          v11 = XLATEOBJ_iXlate(pxlo, v10);
          v7 = v20;
          v5 = v11;
        }
        v7 += 2;
        v12 = v19;
        v20 = v7;
        ++v19;
        *v12 = v5 | (16 * v21);
        v15 += 2;
      }
      while ( v15 < v17 );
      v2 = v13;
    }
    if ( v7 < v17 )
    {
      if ( v4 != *v3 )
      {
        v4 = *v3;
        v5 = XLATEOBJ_iXlate(pxlo, *v3);
      }
      *v19 = (16 * v5) | *v19 & 0xF;
    }
    if ( !--v14 )
      break;
    v6 = a1;
    v3 = (ULONG *)((char *)v16 + *((_DWORD *)a1 + 7));
    v2 += *((_DWORD *)a1 + 8);
    v16 = v3;
    v13 = v2;
  }
}
