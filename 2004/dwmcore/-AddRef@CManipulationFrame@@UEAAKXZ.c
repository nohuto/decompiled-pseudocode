/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800DBF90
 * Callers:
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x1800F09D0 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 *     ?AddRef@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F09E0 (-AddRef@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ @ 0x1800F1490 (-AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?AddRef@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800F14E0 (-AddRef@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F1CC0 (-AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F3B30 (-AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
