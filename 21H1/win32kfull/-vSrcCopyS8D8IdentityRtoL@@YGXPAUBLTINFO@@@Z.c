/*
 * XREFs of ?vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z @ 0x2308FB
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

void __stdcall vSrcCopyS8D8IdentityRtoL(struct BLTINFO *a1)
{
  size_t v2; // eax
  char *v3; // esi
  _WORD *v4; // edi
  bool v5; // zf
  unsigned __int8 *v6; // [esp+0h] [ebp-10h]
  unsigned int v7; // [esp+4h] [ebp-Ch]
  size_t v8; // [esp+Ch] [ebp-4h]
  struct BLTINFO *v9; // [esp+18h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = (char *)(*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9) - v2 + 1);
  v8 = v2;
  v4 = (_WORD *)(*((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11) - v2 + 1);
  v9 = (struct BLTINFO *)*((_DWORD *)a1 + 5);
  do
  {
    if ( *((_DWORD *)a1 + 13) )
      vSrcAlignCopyMemory((unsigned int)v3, v4, v2, v6, v7);
    else
      memmove(v4, v3, v2);
    v3 += *((_DWORD *)a1 + 7);
    v4 = (_WORD *)((char *)v4 + *((_DWORD *)a1 + 8));
    v5 = v9 == (struct BLTINFO *)1;
    v9 = (struct BLTINFO *)((char *)v9 - 1);
    v2 = v8;
  }
  while ( !v5 );
}
