/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800E06F0
 * Callers:
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x1800F6430 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 *     ?AddRef@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F6440 (-AddRef@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ @ 0x1800F6EF0 (-AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?AddRef@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800F6F40 (-AddRef@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F7720 (-AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F9590 (-AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
