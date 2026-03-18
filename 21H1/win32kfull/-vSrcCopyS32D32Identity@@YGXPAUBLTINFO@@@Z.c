/*
 * XREFs of ?vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x52550
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

void __stdcall vSrcCopyS32D32Identity(struct BLTINFO *a1)
{
  char *v2; // edi
  char *v3; // ebx
  int v4; // ecx
  size_t v5; // ecx
  int v6; // eax
  unsigned __int8 *v7; // [esp+0h] [ebp-10h]
  unsigned int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-4h]
  struct BLTINFO *i; // [esp+18h] [ebp+8h]

  v2 = (char *)(*((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9));
  v3 = (char *)(*((_DWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 11));
  v4 = *((_DWORD *)a1 + 4);
  v9 = *((_DWORD *)a1 + 5);
  if ( *((int *)a1 + 3) < 0 )
  {
    v6 = 4 - 4 * v4;
    v2 += v6;
    v3 += v6;
  }
  v5 = 4 * v4;
  for ( i = (struct BLTINFO *)v5; ; v5 = (size_t)i )
  {
    if ( *((_DWORD *)a1 + 13) )
      vSrcAlignCopyMemory(v5, v7, v8);
    else
      memmove(v3, v2, v5);
    if ( !--v9 )
      break;
    v2 += *((_DWORD *)a1 + 7);
    v3 += *((_DWORD *)a1 + 8);
  }
}
