/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x14029F5F4
 * Callers:
 *     MiComputeDataFlushRange @ 0x14022C420 (MiComputeDataFlushRange.c)
 *     MiUnlockFlushMdl @ 0x14029F3E4 (MiUnlockFlushMdl.c)
 *     MiReferenceControlArea @ 0x14029FAA4 (MiReferenceControlArea.c)
 *     MiTrimSharedPage @ 0x14031F424 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x14031F7A0 (MiReferencePfBackedSection.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiReferenceExistingControlArea @ 0x140354104 (MiReferenceExistingControlArea.c)
 *     MiReleasePageFileSectionInfo @ 0x14038732C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1405270D8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1405284B8 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x14053B660 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053F980 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053FDF0 (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x140709EC4 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
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
