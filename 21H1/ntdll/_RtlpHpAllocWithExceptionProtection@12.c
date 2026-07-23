/*
 * XREFs of _RtlpHpAllocWithExceptionProtection@12 @ 0x4B34D363
 * Callers:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 * Callees:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHpTagAllocateHeap@12 @ 0x4B36FCF9 (_RtlpHpTagAllocateHeap@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

char *__userpurge RtlpHpAllocWithExceptionProtection@<eax>(
        unsigned int a1@<edx>,
        _DWORD *a2@<ecx>,
        int a3@<edi>,
        int a4)
{
  int v4; // ebp

  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (char *)RtlpHpTagAllocateHeap(a4);
  else
    return RtlpAllocateHeapInternal(a2, a1, v4, a3, a4, 0);
}
