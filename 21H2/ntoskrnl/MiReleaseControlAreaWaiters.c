/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1402879F8
 * Callers:
 *     MiReferenceExistingControlArea @ 0x14023F590 (MiReferenceExistingControlArea.c)
 *     MiTrimSharedPage @ 0x14023F658 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x14023FA50 (MiReferencePfBackedSection.c)
 *     MiComputeDataFlushRange @ 0x140286AB0 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140287C84 (MiReferenceControlArea.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiDeleteCachedSegment @ 0x14058A4E8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14058B784 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x140597ED0 (MiFlushComplete.c)
 *     MiLocateSharedPageViews @ 0x14059854C (MiLocateSharedPageViews.c)
 *     MiReleasePageFileSectionInfo @ 0x14059D028 (MiReleasePageFileSectionInfo.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14059F23C (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseControlAreaWaiters(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (__int64 *)*a1;
      result = KeSignalGate((_DWORD *)a1 + 4, 1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
