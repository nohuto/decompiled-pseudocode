/*
 * XREFs of ?_SurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x53E0C
 * Callers:
 *     ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C (-ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     ?SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x794DE (-SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x798DC (-DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall _SurfaceAccessCheck(_DWORD *this)
{
  int v1; // eax

  v1 = this[18];
  if ( (v1 & 0x800) != 0 )
    return UserSurfaceAccessCheck(this[113]);
  if ( (v1 & 0x10000000) != 0 )
    return UserScreenAccessCheck();
  return 1;
}
