/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1402817CC
 * Callers:
 *     MiUnlockFlushMdl @ 0x1402815BC (MiUnlockFlushMdl.c)
 *     MiReferenceControlArea @ 0x140281B54 (MiReferenceControlArea.c)
 *     MiComputeDataFlushRange @ 0x1402A1990 (MiComputeDataFlushRange.c)
 *     MiTrimSharedPage @ 0x1402CDD9C (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x1402D03FC (MiReferencePfBackedSection.c)
 *     MiReferenceExistingControlArea @ 0x14030651C (MiReferenceExistingControlArea.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiReleasePageFileSectionInfo @ 0x140384214 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1405230B8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x140524498 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x140537640 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x14053A8F0 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053B960 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053BDD0 (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 *     MiSegmentDelete @ 0x14063E304 (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseControlAreaWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate(a1 + 2, 1LL);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
