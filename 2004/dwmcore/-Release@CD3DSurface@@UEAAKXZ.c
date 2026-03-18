/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x1800D1070
 * Callers:
 *     ?Release@CD3DResource@@$4PPPPPPPM@II@EAAKXZ @ 0x1800F14C0 (-Release@CD3DResource@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?Release@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800F1500 (-Release@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?Release@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F1CF0 (-Release@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILPoolResource::Release(this);
}
