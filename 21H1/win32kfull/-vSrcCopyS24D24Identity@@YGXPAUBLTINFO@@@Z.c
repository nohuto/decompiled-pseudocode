/*
 * XREFs of ?vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0xAAD26
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     ?vSrcAlignCopyMemory@@YGXPAE0K@Z @ 0xFBF0A (-vSrcAlignCopyMemory@@YGXPAE0K@Z.c)
 */

void __stdcall vSrcCopyS24D24Identity(struct BLTINFO *a1)
{
  int v2; // edi
  int v3; // ebx
  size_t v4; // edx
  char *v5; // edi
  char *v6; // ebx
  unsigned __int8 *v7; // [esp+0h] [ebp-10h]
  unsigned int v8; // [esp+4h] [ebp-Ch]
  size_t v9; // [esp+Ch] [ebp-4h]
  struct BLTINFO *v10; // [esp+18h] [ebp+8h]

  v2 = 3 * *((_DWORD *)a1 + 9);
  v3 = 3 * *((_DWORD *)a1 + 11);
  v4 = 3 * *((_DWORD *)a1 + 4);
  v10 = (struct BLTINFO *)*((_DWORD *)a1 + 5);
  v5 = (char *)(*((_DWORD *)a1 + 1) + v2);
  v6 = (char *)(*((_DWORD *)a1 + 2) + v3);
  v9 = v4;
  if ( *((int *)a1 + 3) < 0 )
  {
    v5 += 3 - v4;
    v6 += 3 - v4;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)a1 + 13) )
      vSrcAlignCopyMemory(v4, v7, v8);
    else
      memmove(v6, v5, v4);
    v10 = (struct BLTINFO *)((char *)v10 - 1);
    if ( !v10 )
      break;
    v5 += *((_DWORD *)a1 + 7);
    v6 += *((_DWORD *)a1 + 8);
    v4 = v9;
  }
}
