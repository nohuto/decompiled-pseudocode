/*
 * XREFs of ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x1800EEA6C
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180068C54 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18000E5C0 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::ReleaseObsoletePlaneAssignments(COverlayContext *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  const struct CCompositionSurfaceInfo *v4; // r14

  v1 = *((_QWORD *)this + 913);
  v3 = *((_QWORD *)this + 914);
  while ( v1 != v3 )
  {
    v4 = *(const struct CCompositionSurfaceInfo **)(v1 + 16);
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         *(const struct CVisual **)(v1 + 8),
                         v4,
                         *(_QWORD *)(v1 + 24)) == -1 )
    {
      (*(void (__fastcall **)(const struct CCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)v4 + 264LL))(
        v4,
        *(_QWORD *)(v1 + 24));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 16) + 400LL))(*(_QWORD *)(v1 + 16), 2LL);
      *((_BYTE *)this + 11310) = 1;
    }
    v1 += 224LL;
  }
}
