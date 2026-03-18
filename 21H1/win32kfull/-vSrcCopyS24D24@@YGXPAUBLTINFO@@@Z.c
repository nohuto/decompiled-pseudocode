/*
 * XREFs of ?vSrcCopyS24D24@@YGXPAUBLTINFO@@@Z @ 0x2319E5
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

void __stdcall vSrcCopyS24D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  unsigned int v2; // eax
  int v3; // edx
  unsigned __int8 *v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  ULONG *v9; // ebx
  unsigned int v10; // esi
  ULONG v11; // eax
  ULONG v12; // ebx
  ULONG v13; // edi
  ULONG v14; // esi
  ULONG v15; // eax
  int v16; // ecx
  bool v17; // zf
  unsigned __int16 *v18; // edi
  int v19; // esi
  ULONG v20; // eax
  unsigned int v21; // [esp+Ch] [ebp-28h]
  unsigned int v22; // [esp+10h] [ebp-24h]
  int v23; // [esp+14h] [ebp-20h]
  unsigned __int8 *v24; // [esp+18h] [ebp-1Ch]
  int v25; // [esp+1Ch] [ebp-18h]
  unsigned int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+24h] [ebp-10h]
  ULONG *v28; // [esp+28h] [ebp-Ch]
  XLATEOBJ *pxlo; // [esp+2Ch] [ebp-8h]
  unsigned __int8 *v30; // [esp+30h] [ebp-4h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 4);
  v25 = *((_DWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11);
  v4 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9));
  pxlo = *(XLATEOBJ **)a1;
  v5 = v3 & 3;
  v24 = v4;
  v23 = v3;
  v22 = v5;
  if ( v5 > v2 )
  {
    v5 = *((_DWORD *)a1 + 4);
    v22 = v5;
  }
  v6 = v2 - v5;
  v7 = v6 >> 2;
  v8 = v6 & 3;
  v21 = v7;
  v27 = v8;
  while ( 1 )
  {
    v28 = (ULONG *)v3;
    v9 = (ULONG *)v3;
    if ( v5 )
    {
      v10 = v5;
      do
      {
        v11 = XLATEOBJ_iXlate(pxlo, *v4 | (*(unsigned __int16 *)(v4 + 1) << 8));
        *(_BYTE *)v9 = v11;
        v4 += 3;
        *((_BYTE *)v9 + 1) = BYTE1(v11);
        *((_BYTE *)v9 + 2) = BYTE2(v11);
        v9 = (ULONG *)((char *)v9 + 3);
        --v10;
      }
      while ( v10 );
      v1 = a1;
      v8 = v27;
      v28 = v9;
    }
    v26 = v21;
    if ( v21 )
    {
      do
      {
        v12 = XLATEOBJ_iXlate(pxlo, *v4 | (*(unsigned __int16 *)(v4 + 1) << 8));
        v30 = v4 + 3;
        v13 = XLATEOBJ_iXlate(pxlo, v4[3] | ((v4[4] | (v4[5] << 8)) << 8));
        v30 += 3;
        v14 = XLATEOBJ_iXlate(pxlo, *v30 | (*(unsigned __int16 *)(v30 + 1) << 8));
        v30 += 3;
        v15 = XLATEOBJ_iXlate(pxlo, *v30 | (*(unsigned __int16 *)(v30 + 1) << 8));
        *v28 = v12 | (v13 << 24);
        v16 = (v13 >> 8) | (v14 << 16);
        v4 = v30 + 3;
        v28[1] = v16;
        v28[2] = HIWORD(v14) | (v15 << 8);
        v9 = v28 + 3;
        v17 = v26-- == 1;
        v28 += 3;
      }
      while ( !v17 );
      v1 = a1;
      v8 = v27;
    }
    if ( v8 )
    {
      v18 = (unsigned __int16 *)(v4 + 1);
      v19 = v8;
      do
      {
        v20 = XLATEOBJ_iXlate(pxlo, *((unsigned __int8 *)v18 - 1) | (*v18 << 8));
        *(_BYTE *)v9 = v20;
        v18 = (unsigned __int16 *)((char *)v18 + 3);
        v9 = (ULONG *)((char *)v9 + 3);
        *((_BYTE *)v9 - 2) = BYTE1(v20);
        *((_BYTE *)v9 - 1) = BYTE2(v20);
        --v19;
      }
      while ( v19 );
      v1 = a1;
      v8 = v27;
    }
    if ( !--v25 )
      break;
    v4 = &v24[*((_DWORD *)v1 + 7)];
    v3 = *((_DWORD *)v1 + 8) + v23;
    v5 = v22;
    v24 = v4;
    v23 = v3;
  }
}
