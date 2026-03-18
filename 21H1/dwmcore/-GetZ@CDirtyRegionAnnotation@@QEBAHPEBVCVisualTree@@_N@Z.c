/*
 * XREFs of ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@_N@Z @ 0x18019D4EC
 * Callers:
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18018CDDC (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 * Callees:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800A66D8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
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
