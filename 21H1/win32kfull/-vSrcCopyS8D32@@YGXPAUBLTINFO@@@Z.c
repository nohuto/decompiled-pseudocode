/*
 * XREFs of ?vSrcCopyS8D32@@YGXPAUBLTINFO@@@Z @ 0xB9BDC
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

void __stdcall vSrcCopyS8D32(struct BLTINFO *a1)
{
  int v1; // esi
  int v2; // ecx
  int v3; // eax
  unsigned __int8 *v4; // edi
  struct BLTINFO *v5; // edx
  _DWORD *v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v1 = *((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9);
  v2 = *((_DWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 11);
  v10 = *((_DWORD *)a1 + 4);
  v11 = *((_DWORD *)a1 + 5);
  v9 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v3 = v11;
  while ( 1 )
  {
    v4 = (unsigned __int8 *)v1;
    v5 = a1;
    v6 = (_DWORD *)v2;
    if ( v10 )
    {
      v7 = v10;
      do
      {
        v8 = *v4++;
        *v6++ = *(_DWORD *)(v9 + 4 * v8);
        --v7;
      }
      while ( v7 );
      v5 = a1;
      v3 = v11;
    }
    v11 = --v3;
    if ( !v3 )
      break;
    v1 += *((_DWORD *)v5 + 7);
    v2 += *((_DWORD *)v5 + 8);
  }
}
