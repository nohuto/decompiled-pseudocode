/*
 * XREFs of ?vSrcCopyS24D4@@YGXPAUBLTINFO@@@Z @ 0x22FEBE
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

void __stdcall vSrcCopyS24D4(struct BLTINFO *a1)
{
  int v1; // edi
  int v2; // ecx
  int v3; // edi
  unsigned __int8 *v4; // ebx
  ULONG v5; // esi
  char v6; // dl
  struct BLTINFO *v7; // eax
  int v8; // eax
  unsigned __int8 *v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned __int8 *v16; // [esp+Ch] [ebp-24h]
  int v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+14h] [ebp-1Ch]
  _BYTE *v19; // [esp+18h] [ebp-18h]
  int v20; // [esp+1Ch] [ebp-14h]
  _BYTE *v21; // [esp+20h] [ebp-10h]
  XLATEOBJ *pxlo; // [esp+24h] [ebp-Ch]
  int v23; // [esp+28h] [ebp-8h]
  int v24; // [esp+28h] [ebp-8h]
  char v25; // [esp+2Fh] [ebp-1h]

  v1 = *((_DWORD *)a1 + 11);
  v2 = v1 + *((_DWORD *)a1 + 4);
  v3 = *((_DWORD *)a1 + 2) + (v1 >> 1);
  v4 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9));
  v20 = v2;
  v17 = *((_DWORD *)a1 + 5);
  v19 = (_BYTE *)v3;
  v5 = *v4 | (*(unsigned __int16 *)(v4 + 1) << 8);
  v16 = v4;
  pxlo = *(XLATEOBJ **)a1;
  v6 = XLATEOBJ_iXlate(*(XLATEOBJ **)a1, v5);
  v7 = a1;
  while ( 1 )
  {
    v8 = *((_DWORD *)v7 + 11);
    v21 = (_BYTE *)v3;
    v9 = v4;
    v23 = v8;
    if ( (v8 & 1) != 0 )
    {
      v10 = *v4;
      if ( v5 != (v10 | (*(unsigned __int16 *)(v4 + 1) << 8)) )
      {
        v5 = v10 | (*(unsigned __int16 *)(v4 + 1) << 8);
        v6 = XLATEOBJ_iXlate(pxlo, v5);
      }
      v9 = v4 + 3;
      *v19 = v6 | *v19 & 0xF0;
      v21 = v19 + 1;
      v8 = ++v23;
    }
    v18 = v8 + 1;
    if ( v8 + 1 >= v20 )
    {
      v14 = v20;
    }
    else
    {
      v11 = v23;
      do
      {
        v12 = *v9;
        if ( v5 != (v12 | (*(unsigned __int16 *)(v9 + 1) << 8)) )
        {
          v5 = v12 | (*(unsigned __int16 *)(v9 + 1) << 8);
          v6 = XLATEOBJ_iXlate(pxlo, v5);
        }
        v25 = v6;
        v13 = v9[3];
        if ( v5 != (v13 | (*((unsigned __int16 *)v9 + 2) << 8)) )
        {
          v5 = v13 | (*((unsigned __int16 *)v9 + 2) << 8);
          v6 = XLATEOBJ_iXlate(pxlo, v5);
        }
        v9 += 6;
        v11 += 2;
        *v21++ = v6 | (16 * v25);
        v14 = v20;
        v18 += 2;
      }
      while ( v18 < v20 );
      v24 = v11;
      v4 = v16;
      v8 = v24;
    }
    if ( v8 < v14 )
    {
      v15 = *v9;
      if ( v5 != (v15 | (*(unsigned __int16 *)(v9 + 1) << 8)) )
      {
        v5 = v15 | (*(unsigned __int16 *)(v9 + 1) << 8);
        v6 = XLATEOBJ_iXlate(pxlo, v5);
      }
      *v21 = (16 * v6) | *v21 & 0xF;
    }
    if ( !--v17 )
      break;
    v7 = a1;
    v4 += *((_DWORD *)a1 + 7);
    v3 = (int)&v19[*((_DWORD *)a1 + 8)];
    v16 = v4;
    v19 = (_BYTE *)v3;
  }
}
