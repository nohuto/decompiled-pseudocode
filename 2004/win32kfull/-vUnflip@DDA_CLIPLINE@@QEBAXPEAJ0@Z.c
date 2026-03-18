/*
 * XREFs of ?vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z @ 0x1C013E12C
 * Callers:
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C013DFC0 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C013E048 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C013E394 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02CF994 (-vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DDA_CLIPLINE::vUnflip(DDA_CLIPLINE *this, int *a2, int *a3)
{
  int v3; // eax
  int v4; // r9d

  v3 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 5) != 0 )
  {
    v4 = *a2;
    *a2 = *a3;
    *a3 = v4;
    v3 = *(_DWORD *)this;
  }
  if ( (v3 & 8) != 0 )
  {
    *a3 = -*a3;
    v3 = *(_DWORD *)this;
  }
  if ( (v3 & 0x20) != 0 )
    *a2 = -*a2;
}
