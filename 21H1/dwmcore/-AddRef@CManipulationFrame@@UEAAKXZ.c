/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800D43C0
 * Callers:
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x1800EDA40 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 *     ?AddRef@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800EDA50 (-AddRef@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ @ 0x1800EE500 (-AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?AddRef@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800EE550 (-AddRef@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800EED30 (-AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F0BA0 (-AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
