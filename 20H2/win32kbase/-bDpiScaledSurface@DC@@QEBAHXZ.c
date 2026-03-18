/*
 * XREFs of ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00409C0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0039050 (-bCompute@DC@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C003E50C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0040990 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C004BD20 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C004BD4C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0097D00 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C013E718 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
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
