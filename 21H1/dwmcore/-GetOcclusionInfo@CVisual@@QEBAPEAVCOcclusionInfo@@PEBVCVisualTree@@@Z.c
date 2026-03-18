/*
 * XREFs of ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800A66D8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18006CF60 (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801883F8 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@_N@Z @ 0x18019D4EC (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

struct COcclusionInfo *__fastcall CVisual::GetOcclusionInfo(CVisual *this, const struct CVisualTree *a2)
{
  __int64 v2; // rbx
  struct CTreeData *TreeData; // rax
  struct CTreeData *v4; // rdi
  __int64 v5; // rax

  v2 = 0LL;
  TreeData = CVisual::FindTreeData(this, a2);
  v4 = TreeData;
  if ( TreeData )
  {
    v5 = *((_QWORD *)TreeData + 4);
    if ( !v5 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 3) + 352LL))(*((_QWORD *)v4 + 3));
      *((_QWORD *)v4 + 4) = v5;
    }
    return (struct COcclusionInfo *)v5;
  }
  return (struct COcclusionInfo *)v2;
}
