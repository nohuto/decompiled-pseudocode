/*
 * XREFs of ?vSrcCopyS24D1@@YGXPAUBLTINFO@@@Z @ 0x22FBD9
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

void __stdcall vSrcCopyS24D1(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  char v2; // al
  int v3; // edi
  int v4; // edx
  _BYTE *v5; // edi
  int v6; // ecx
  int v7; // ebx
  _BYTE *v8; // esi
  unsigned __int8 *v9; // edi
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int v13; // ebx
  XLATEOBJ *pxlo; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+10h] [ebp-18h]
  _BYTE *v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  _BYTE *v19; // [esp+20h] [ebp-8h]
  char v20; // [esp+27h] [ebp-1h]

  v1 = a1;
  v2 = 0;
  v20 = 0;
  v3 = *((_DWORD *)a1 + 11);
  v4 = v3 + *((_DWORD *)a1 + 4);
  pxlo = *(XLATEOBJ **)a1;
  v5 = (_BYTE *)(*((_DWORD *)a1 + 2) + (v3 >> 3));
  v15 = v4;
  v17 = *((_DWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9);
  while ( 1 )
  {
    v7 = *((_DWORD *)v1 + 11);
    v18 = v6;
    v16 = v5;
    v19 = v5;
    if ( (v7 & 7) != 0 )
    {
      v2 = *v5 >> (8 - (v7 & 7));
      v20 = v2;
    }
    if ( v7 != v4 )
    {
      v8 = v5;
      v9 = (unsigned __int8 *)(v6 + 1);
      do
      {
        v10 = v9[1];
        v20 = 2 * v2;
        v11 = *v9;
        v9 += 3;
        v12 = XLATEOBJ_iXlate(pxlo, *(v9 - 4) | ((v11 | (v10 << 8)) << 8)) == 0;
        v2 = v20;
        if ( !v12 )
        {
          v2 = v20 | 1;
          v20 |= 1u;
        }
        if ( (++v7 & 7) == 0 )
          *v8++ = v2;
      }
      while ( v7 != v15 );
      v5 = v16;
      v19 = v8;
      v1 = a1;
    }
    v13 = v7 & 7;
    if ( v13 )
    {
      v20 = v2 << (8 - v13);
      *v19 = (255 >> v13) & *v19 | v20 & ~(255 >> v13);
    }
    if ( !--v17 )
      break;
    v6 = *((_DWORD *)v1 + 7) + v18;
    v5 += *((_DWORD *)v1 + 8);
    v2 = v20;
    v4 = v15;
  }
}
