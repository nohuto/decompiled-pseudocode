/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140361FD4
 * Callers:
 *     MiReferencePfBackedSection @ 0x140243798 (MiReferencePfBackedSection.c)
 *     MiReferenceExistingControlArea @ 0x140262384 (MiReferenceExistingControlArea.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiTrimSharedPage @ 0x1402F9758 (MiTrimSharedPage.c)
 *     MiComputeDataFlushRange @ 0x140320010 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x140362008 (MiUnlockFlushMdl.c)
 *     MiReleasePageFileSectionInfo @ 0x140387BD4 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x140528DF8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14052A1D8 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x14053D3A0 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405416C0 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x1406FF4F0 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
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
      result = KeSignalGate((__int64)(a1 + 2), 1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
