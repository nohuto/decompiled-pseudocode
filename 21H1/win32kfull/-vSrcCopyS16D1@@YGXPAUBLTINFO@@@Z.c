/*
 * XREFs of ?vSrcCopyS16D1@@YGXPAUBLTINFO@@@Z @ 0x22F795
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

void __stdcall vSrcCopyS16D1(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  int v2; // edi
  int v3; // edx
  _BYTE *v4; // edi
  int v5; // eax
  int v6; // ebx
  unsigned __int16 *v7; // ecx
  char v8; // al
  _BYTE *v9; // esi
  ULONG v10; // eax
  bool v11; // zf
  int v12; // ebx
  XLATEOBJ *pxlo; // [esp+Ch] [ebp-20h]
  int v14; // [esp+10h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-14h]
  int v16; // [esp+1Ch] [ebp-10h]
  _BYTE *v17; // [esp+20h] [ebp-Ch]
  unsigned __int16 *v18; // [esp+24h] [ebp-8h]
  char v19; // [esp+2Bh] [ebp-1h]

  v1 = a1;
  v19 = 0;
  v2 = *((_DWORD *)a1 + 11);
  pxlo = *(XLATEOBJ **)a1;
  v3 = v2 + *((_DWORD *)a1 + 4);
  v4 = (_BYTE *)(*((_DWORD *)a1 + 2) + (v2 >> 3));
  v14 = v3;
  v5 = *((_DWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 9);
  v16 = *((_DWORD *)a1 + 5);
  while ( 1 )
  {
    v6 = *((_DWORD *)v1 + 11);
    v7 = (unsigned __int16 *)v5;
    v15 = v5;
    v17 = v4;
    v18 = (unsigned __int16 *)v5;
    if ( (v6 & 7) != 0 )
    {
      v8 = *v4 >> (8 - (v6 & 7));
      v7 = v18;
      v19 = v8;
    }
    else
    {
      v8 = v19;
    }
    if ( v6 != v3 )
    {
      v9 = v4;
      do
      {
        v19 = 2 * v8;
        v10 = XLATEOBJ_iXlate(pxlo, *v7);
        v7 = v18 + 1;
        v11 = v10 == 0;
        v8 = v19;
        ++v18;
        if ( !v11 )
        {
          v8 = v19 | 1;
          v19 |= 1u;
        }
        if ( (++v6 & 7) == 0 )
          *v9++ = v8;
      }
      while ( v6 != v14 );
      v17 = v9;
      v1 = a1;
    }
    v12 = v6 & 7;
    if ( v12 )
    {
      v19 = v8 << (8 - v12);
      *v17 = (255 >> v12) & *v17 | v19 & ~(255 >> v12);
    }
    if ( !--v16 )
      break;
    v5 = *((_DWORD *)v1 + 7) + v15;
    v4 += *((_DWORD *)v1 + 8);
    v3 = v14;
  }
}
