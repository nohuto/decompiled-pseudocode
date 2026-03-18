/*
 * XREFs of ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0244318
 * Callers:
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244D34 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02443B8 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall InvertScrollHilite(struct tagWND *a1, const struct tagRECT *a2)
{
  const struct tagRECT *v2; // rdi
  struct tagSBTRACK *v5; // rdx
  HDC DCEx; // rbx

  v2 = a2 + 2;
  if ( !IsRectEmptyInl(a2 + 2) )
  {
    if ( (*(_DWORD *)v5 & 8) != 0 )
    {
      RecalcTrackRect(v5);
      a2->left &= ~8u;
    }
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    NtGdiPatBlt(DCEx, (unsigned int)v2->left, v2->top, v2->right - v2->left, v2->bottom - v2->top, 5570569);
    _ReleaseDC(DCEx);
  }
}
