/*
 * XREFs of RtlpHeapHandleError @ 0x1801083E0
 * Callers:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlpPopulateListIndex @ 0x18000A600 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x18000E914 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x18000EB94 (RtlpFindUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001E940 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x180108660 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x18010B148 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_18016C508 )
    return RtlpReportHeapFailure();
  return result;
}
