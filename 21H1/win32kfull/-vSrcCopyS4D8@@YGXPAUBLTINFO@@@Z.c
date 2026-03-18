/*
 * XREFs of ?vSrcCopyS4D8@@YGXPAUBLTINFO@@@Z @ 0x2307EB
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

void __stdcall vSrcCopyS4D8(struct BLTINFO *a1)
{
  int v2; // esi
  _BYTE *v3; // edx
  int v4; // ebx
  unsigned __int8 *v5; // edi
  unsigned __int8 v6; // al
  int v7; // edx
  unsigned __int8 v8; // si
  int v9; // eax
  unsigned __int8 v10; // dl
  bool v11; // zf
  struct BLTINFO *v12; // [esp+Ch] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  _BYTE *v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  unsigned __int8 v18; // [esp+27h] [ebp-1h]
  struct BLTINFO *v19; // [esp+30h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v13 = *((_DWORD *)a1 + 5);
  v3 = (_BYTE *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 1));
  v18 = 0;
  v17 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v14 = v2;
  v15 = v3;
  v16 = *((_DWORD *)a1 + 10);
  do
  {
    v4 = *((_DWORD *)a1 + 9);
    v5 = v3;
    v19 = (struct BLTINFO *)v2;
    if ( (v4 & 1) != 0 )
    {
      v6 = *v3;
      v5 = v3 + 1;
      v18 = *v3;
    }
    else
    {
      v6 = v18;
    }
    if ( v4 < v16 )
    {
      v7 = v2;
      v8 = v6;
      do
      {
        v12 = (struct BLTINFO *)(v7 + 1);
        if ( (v4 & 1) != 0 )
        {
          v9 = v8 & 0xF;
        }
        else
        {
          v10 = *v5++;
          v8 = v10;
          v18 = v10;
          v9 = v10 >> 4;
        }
        ++v4;
        *(_BYTE *)v19 = *(_BYTE *)(v17 + 4 * v9);
        v7 = (int)v12;
        v16 = *((_DWORD *)a1 + 10);
        v19 = v12;
      }
      while ( v4 < v16 );
      v3 = v15;
      v2 = v14;
    }
    v3 += *((_DWORD *)a1 + 7);
    v2 += *((_DWORD *)a1 + 8);
    v11 = v13-- == 1;
    v15 = v3;
    v14 = v2;
  }
  while ( !v11 );
}
