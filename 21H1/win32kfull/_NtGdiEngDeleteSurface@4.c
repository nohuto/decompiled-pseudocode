/*
 * XREFs of _NtGdiEngDeleteSurface@4 @ 0x2181A3
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHsurfAndUnSecure@@YGHPAUHSURF__@@@Z @ 0x2167C8 (-ValidUmpdHsurfAndUnSecure@@YGHPAUHSURF__@@@Z.c)
 */

BOOL __stdcall NtGdiEngDeleteSurface(HSURF hsurf)
{
  return ValidUmpdHsurfAndUnSecure(hsurf) && EngDeleteSurface(hsurf);
}
