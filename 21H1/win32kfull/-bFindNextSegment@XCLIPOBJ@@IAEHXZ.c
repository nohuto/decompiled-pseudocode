/*
 * XREFs of ?bFindNextSegment@XCLIPOBJ@@IAEHXZ @ 0x237F2B
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z @ 0x237A4C (-bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z @ 0x237F88 (-bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z.c)
 */

int __thiscall XCLIPOBJ::bFindNextSegment(XCLIPOBJ *this)
{
  struct _POINTL *v2; // esi
  unsigned int v3; // ecx
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // edi

  v2 = (struct _POINTL *)*((_DWORD *)this + 30);
  v3 = *((_DWORD *)this + 20);
  if ( (v2[2].x & 0x400000) != 0 )
  {
    if ( v3 >= *((_DWORD *)this + 22) )
      return 0;
  }
  else if ( !v3 )
  {
    return 0;
  }
  v5 = *((_DWORD *)this + 21) + v3;
  v6 = *((_DWORD *)this + 17);
  *((_DWORD *)this + 20) = v5;
  v7 = *(_DWORD *)(v6 + 4 * v5 + 12);
  if ( (((unsigned int)v2[2].x >> 22) & 1) == v7 > v2[16].x )
    return 0;
  XCLIPOBJ::bIntersectWall(this, v7, 0, v2 + 14, &v2[2].y);
  return 1;
}
