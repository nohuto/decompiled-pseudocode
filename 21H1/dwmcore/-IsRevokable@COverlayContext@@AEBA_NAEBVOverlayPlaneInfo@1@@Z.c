/*
 * XREFs of ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1800E52E8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NPEAK@Z @ 0x1800E4FA0 (-HasRevokablePlanes@COverlayContext@@QEBA_NPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801809EC (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsRevokable(COverlayContext *this, const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 136LL))(*((_QWORD *)a2 + 2))
    && (!COverlayContext::IsFullscreen(this, a2) || !*((_BYTE *)a2 + 179)) )
  {
    return 1;
  }
  return v4;
}
