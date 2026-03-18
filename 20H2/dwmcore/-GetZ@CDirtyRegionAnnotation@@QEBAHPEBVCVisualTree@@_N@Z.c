/*
 * XREFs of ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@_N@Z @ 0x180198CBC
 * Callers:
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801883EC (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 * Callees:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800B59F8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirtyRegionAnnotation::GetZ(CVisual **this, const struct CVisualTree *a2)
{
  unsigned int *OcclusionInfo; // rcx
  __int64 result; // rax

  OcclusionInfo = (unsigned int *)CVisual::GetOcclusionInfo(this[2], a2);
  result = 0LL;
  if ( OcclusionInfo )
  {
    if ( *((_BYTE *)this + 40) )
      return OcclusionInfo[3];
    else
      return (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
  }
  return result;
}
