/*
 * XREFs of ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18021EE98
 * Callers:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801B7328 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18021FAA4 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18021FDE4 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18025C60C (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18025CA40 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Path::Segment::GetSize(char a1)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( a1 )
  {
    case 0:
      return 16LL;
    case 1:
      return 8LL;
    case 2:
      return 16LL;
    case 3:
      return 28LL;
    case 4:
      return 24LL;
  }
  if ( a1 != 5 )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  return 32LL;
}
