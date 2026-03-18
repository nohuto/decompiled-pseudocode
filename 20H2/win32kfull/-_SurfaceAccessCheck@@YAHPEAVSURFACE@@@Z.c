/*
 * XREFs of ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D310
 * Callers:
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009CCAC (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009CEFC (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C01031A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 28);
  if ( (v1 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 81));
  if ( (v1 & 0x10000000) != 0 )
    return UserScreenAccessCheck();
  return 1LL;
}
