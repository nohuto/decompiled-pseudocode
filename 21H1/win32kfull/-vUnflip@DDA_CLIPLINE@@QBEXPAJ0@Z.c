/*
 * XREFs of ?vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z @ 0x238459
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QAEHK@Z @ 0x237B25 (-bEnumStartLine@XCLIPOBJ@@QAEHK@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IAEHXZ @ 0x237C98 (-bFindFirstSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x238330 (-vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z.c)
 *     ?vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x2383C7 (-vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall DDA_CLIPLINE::vUnflip(DDA_CLIPLINE *this, int *a2, int *a3)
{
  int v3; // eax
  int v4; // edx

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
