/*
 * XREFs of ?vSrcCopyS32D1@@YGXPAUBLTINFO@@@Z @ 0xC5A46
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

void __stdcall vSrcCopyS32D1(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  int v2; // edi
  int v3; // edx
  _BYTE *v4; // edi
  int v5; // eax
  int v6; // ebx
  char v7; // al
  _BYTE *v8; // esi
  ULONG *v9; // edi
  bool v10; // zf
  int v11; // ebx
  XLATEOBJ *pxlo; // [esp+Ch] [ebp-20h]
  ULONG *v13; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h]
  _BYTE *v15; // [esp+18h] [ebp-14h]
  int v16; // [esp+1Ch] [ebp-10h]
  int v17; // [esp+20h] [ebp-Ch]
  _BYTE *v18; // [esp+24h] [ebp-8h]
  char v19; // [esp+2Bh] [ebp-1h]

  v1 = a1;
  v19 = 0;
  v2 = *((_DWORD *)a1 + 11);
  pxlo = *(XLATEOBJ **)a1;
  v3 = v2 + *((_DWORD *)a1 + 4);
  v4 = (_BYTE *)(*((_DWORD *)a1 + 2) + (v2 >> 3));
  v14 = v3;
  v5 = *((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9);
  v17 = *((_DWORD *)a1 + 5);
  while ( 1 )
  {
    v6 = *((_DWORD *)v1 + 11);
    v16 = v5;
    v15 = v4;
    v18 = v4;
    v13 = (ULONG *)v5;
    if ( (v6 & 7) != 0 )
    {
      v7 = *v4 >> (8 - (v6 & 7));
      v19 = v7;
    }
    else
    {
      v7 = v19;
    }
    if ( v6 != v3 )
    {
      v8 = v4;
      v9 = v13;
      do
      {
        v19 = 2 * v7;
        v10 = XLATEOBJ_iXlate(pxlo, *v9++) == 0;
        v7 = v19;
        if ( !v10 )
        {
          v7 = v19 | 1;
          v19 |= 1u;
        }
        if ( (++v6 & 7) == 0 )
          *v8++ = v7;
      }
      while ( v6 != v14 );
      v4 = v15;
      v18 = v8;
      v1 = a1;
    }
    v11 = v6 & 7;
    if ( v11 )
    {
      v19 = v7 << (8 - v11);
      *v18 = (255 >> v11) & *v18 | v19 & ~(255 >> v11);
    }
    if ( !--v17 )
      break;
    v5 = *((_DWORD *)v1 + 7) + v16;
    v4 += *((_DWORD *)v1 + 8);
    v3 = v14;
  }
}
