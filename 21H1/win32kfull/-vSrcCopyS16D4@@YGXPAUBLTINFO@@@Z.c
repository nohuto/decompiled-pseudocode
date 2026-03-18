/*
 * XREFs of ?vSrcCopyS16D4@@YGXPAUBLTINFO@@@Z @ 0x22FDAD
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

void __stdcall vSrcCopyS16D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // edi
  int v2; // esi
  XLATEOBJ *v3; // edx
  _BYTE *v4; // esi
  unsigned __int16 *v5; // eax
  int v6; // ebx
  unsigned __int16 *v7; // ecx
  int v8; // eax
  _BYTE *v9; // esi
  char v10; // bl
  char v11; // al
  _BYTE *v12; // [esp+Ch] [ebp-24h]
  int v13; // [esp+10h] [ebp-20h]
  int v14; // [esp+14h] [ebp-1Ch]
  unsigned __int16 *v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  XLATEOBJ *pxlo; // [esp+24h] [ebp-Ch]
  _BYTE *v19; // [esp+28h] [ebp-8h]
  unsigned __int16 *v20; // [esp+2Ch] [ebp-4h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 11);
  v3 = *(XLATEOBJ **)a1;
  v16 = v2 + *((_DWORD *)a1 + 4);
  v4 = (_BYTE *)(*((_DWORD *)a1 + 2) + (v2 >> 1));
  pxlo = *(XLATEOBJ **)a1;
  v5 = (unsigned __int16 *)(*((_DWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 9));
  v13 = *((_DWORD *)a1 + 5);
  while ( 1 )
  {
    v6 = *((_DWORD *)v1 + 11);
    v7 = v5;
    v15 = v5;
    v12 = v4;
    v19 = v4;
    v20 = v5;
    v17 = v6;
    if ( (v6 & 1) != 0 )
    {
      *v4 = XLATEOBJ_iXlate(v3, *v5) | *v4 & 0xF0;
      v7 = v15 + 1;
      v19 = v4 + 1;
      ++v6;
      v20 = v15 + 1;
      v17 = v6;
    }
    v8 = v16;
    v14 = v6 + 1;
    if ( v6 + 1 < v16 )
    {
      v9 = v19;
      do
      {
        v10 = XLATEOBJ_iXlate(pxlo, v7[1]);
        v11 = XLATEOBJ_iXlate(pxlo, *v20);
        v7 = v20 + 2;
        v20 += 2;
        *v9 = v10 | (16 * v11);
        v6 = v17 + 2;
        ++v9;
        v17 += 2;
        v14 += 2;
      }
      while ( v14 < v16 );
      v1 = a1;
      v8 = v16;
      v19 = v9;
      v4 = v12;
    }
    if ( v6 < v8 )
      *v19 = (16 * XLATEOBJ_iXlate(pxlo, *v7)) | *v19 & 0xF;
    if ( !--v13 )
      break;
    v5 = (unsigned __int16 *)((char *)v15 + *((_DWORD *)v1 + 7));
    v4 += *((_DWORD *)v1 + 8);
    v3 = pxlo;
  }
}
