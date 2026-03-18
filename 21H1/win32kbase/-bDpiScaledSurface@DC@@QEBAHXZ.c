/*
 * XREFs of ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C007F430
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C00295E0 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0078690 (-bCompute@DC@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C007D4D8 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C007F400 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008B880 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008B8AC (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0146F28 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 62);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 116) & 0x800) != 0;
  return v2;
}
