/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800DBAC0
 * Callers:
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x1800F0620 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 *     ?AddRef@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F0630 (-AddRef@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ @ 0x1800F10E0 (-AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?AddRef@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800F1130 (-AddRef@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F1910 (-AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F3780 (-AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
