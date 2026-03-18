/*
 * XREFs of RtlpHeapHandleError @ 0x14058E3F8
 * Callers:
 *     RtlpCreateUCREntry @ 0x140584C34 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x140584D74 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405855C8 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058603C (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x14058E440 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x14058E824 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14058EC90 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1407603A0 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C117A8 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C117B0, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C117A8, qword_140C117B0, qword_140C117B8, 0LL);
}
