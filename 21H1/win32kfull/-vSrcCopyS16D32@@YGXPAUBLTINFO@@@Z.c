/*
 * XREFs of ?vSrcCopyS16D32@@YGXPAUBLTINFO@@@Z @ 0x231ED5
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

void __stdcall vSrcCopyS16D32(struct BLTINFO *a1)
{
  int v2; // ecx
  int v3; // eax
  unsigned __int16 *v4; // esi
  unsigned int *v5; // edi
  int v6; // ecx
  XLATEOBJ *v7; // edx
  ULONG iUniq; // eax
  _DWORD *v9; // ecx
  int v10; // edx
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // ebx
  unsigned int v14; // edx
  int v15; // ebx
  ULONG v16; // eax
  int v17; // [esp+Ch] [ebp-10h]
  int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]
  XLATEOBJ *v20; // [esp+18h] [ebp-4h]
  struct BLTINFO *v21; // [esp+24h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 9);
  v3 = *((_DWORD *)a1 + 1);
  v21 = (struct BLTINFO *)*((_DWORD *)a1 + 5);
  v4 = (unsigned __int16 *)(v3 + 2 * v2);
  v5 = (unsigned int *)(*((_DWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 11));
  v19 = *((_DWORD *)a1 + 4);
  v18 = *((_DWORD *)a1 + 7) - 2 * v19;
  v6 = *((_DWORD *)a1 + 8);
  v7 = *(XLATEOBJ **)a1;
  v20 = v7;
  v17 = v6 - 4 * v19;
  iUniq = v7[2].iUniq;
  v9 = (_DWORD *)v7[1].pulXlate[19];
  if ( v9[2] == 31 )
  {
    v10 = v9[1];
    if ( v10 == 2016 && *v9 == 63488 && (*(_BYTE *)(iUniq + 16) & 8) != 0 )
    {
      while ( 1 )
      {
        v11 = v19;
        do
        {
          v12 = *v4++;
          *v5++ = ((v12 & 0x600 | (v12 >> 1) & 0xE) >> 1) | (8
                                                           * (v12 & 0xE01F | (4 * (v12 & 0x7E0 | (8 * (v12 & 0xF800))))));
          --v11;
        }
        while ( v11 );
        v21 = (struct BLTINFO *)((char *)v21 - 1);
        if ( !v21 )
          break;
        v4 = (unsigned __int16 *)((char *)v4 + v18);
        v5 = (unsigned int *)((char *)v5 + v17);
      }
      return;
    }
    if ( v10 == 992 && *v9 == 31744 && (*(_BYTE *)(iUniq + 16) & 8) != 0 )
    {
      while ( 1 )
      {
        v13 = v19;
        do
        {
          v14 = *v4++;
          *v5++ = (v14 >> 2) & 7 | (2
                                  * (v14 & 0x380 | (4
                                                  * (v14 & 0x1F | (2
                                                                 * (v14 & 0x7000 | (4
                                                                                  * (v14 & 0x3E0 | (8 * (v14 & 0x7C00))))))))));
          --v13;
        }
        while ( v13 );
        v21 = (struct BLTINFO *)((char *)v21 - 1);
        if ( !v21 )
          break;
        v4 = (unsigned __int16 *)((char *)v4 + v18);
        v5 = (unsigned int *)((char *)v5 + v17);
      }
      return;
    }
    v7 = v20;
  }
  while ( 1 )
  {
    v15 = v19;
    do
    {
      v16 = XLATEOBJ_iXlate(v7, *v4);
      v7 = v20;
      ++v4;
      *v5++ = v16;
      --v15;
    }
    while ( v15 );
    v21 = (struct BLTINFO *)((char *)v21 - 1);
    if ( !v21 )
      break;
    v4 = (unsigned __int16 *)((char *)v4 + v18);
    v5 = (unsigned int *)((char *)v5 + v17);
  }
}
