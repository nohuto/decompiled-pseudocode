/*
 * XREFs of RtlpHeapHandleError @ 0x14058DD08
 * Callers:
 *     RtlpCreateUCREntry @ 0x140584504 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x140584644 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x140584E98 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058590C (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x14058DD50 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x14058E134 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14058E5A0 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x14075E030 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C11798 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C117A0, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C11798, qword_140C117A0, qword_140C117A8, 0LL);
}
