/*
 * XREFs of ?HasRevokablePlanes@COverlayContext@@QEBA_NPEAK@Z @ 0x1800E5E74
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180059110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x18007C6E8 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1800E61AC (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::HasRevokablePlanes(COverlayContext *this, unsigned int *a2)
{
  const struct COverlayContext::OverlayPlaneInfo *v2; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v4; // rbp
  char v6; // di

  v2 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 914);
  v4 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 915);
  v6 = 0;
  while ( v2 != v4 )
  {
    if ( COverlayContext::IsRevokable(this, v2) )
    {
      v6 = 1;
      *a2 = CCommonRegistryData::OverlayDisqualifyInterval;
      return v6;
    }
    v2 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v2 + 224);
  }
  return v6;
}
