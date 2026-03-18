/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x18028C9C8
 * Callers:
 *     ?Release@CD3DSurface@@$4PPPPPPPM@A@EAAKXZ @ 0x1801092D0 (-Release@CD3DSurface@@$4PPPPPPPM@A@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILRefCountBaseT<IDeviceResource>::InternalRelease((volatile signed __int32 *)this - 58);
}
