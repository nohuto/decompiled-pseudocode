/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140357284
 * Callers:
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     MiReferenceExistingControlArea @ 0x1402743E4 (MiReferenceExistingControlArea.c)
 *     MiReferencePfBackedSection @ 0x1402C5218 (MiReferencePfBackedSection.c)
 *     MiTrimSharedPage @ 0x1402EEA08 (MiTrimSharedPage.c)
 *     MiComputeDataFlushRange @ 0x1403152C0 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140356824 (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x1403572B8 (MiUnlockFlushMdl.c)
 *     MiReleasePageFileSectionInfo @ 0x140387A84 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x140528BB8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x140529F98 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x14053D160 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140541480 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405418F0 (MiPurgeBadFileOnlyPages.c)
 *     MiCreateNewSection @ 0x1406D2BC0 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x1406E8110 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseControlAreaWaiters(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v4 = (_QWORD *)*a1;
      result = KeSignalGate((__int64)(a1 + 2), 1LL, a3, a4);
      a1 = v4;
    }
    while ( v4 );
  }
  return result;
}
