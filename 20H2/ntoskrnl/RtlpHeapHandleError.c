/*
 * XREFs of RtlpHeapHandleError @ 0x140591E9C
 * Callers:
 *     RtlpCreateUCREntry @ 0x140588594 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405886D4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x140588F28 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058999C (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x140591EE4 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405922C8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140592734 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x14076E9B0 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C117C8 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C117D0, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C117C8, qword_140C117D0, qword_140C117D8, 0LL);
}
