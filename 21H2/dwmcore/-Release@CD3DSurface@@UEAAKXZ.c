/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x1800D52C0
 * Callers:
 *     ?Release@CD3DResource@@$4PPPPPPPM@II@EAAKXZ @ 0x1800F6F20 (-Release@CD3DResource@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?Release@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800F6F60 (-Release@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?Release@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F7750 (-Release@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILPoolResource::Release(this);
}
