/*
 * XREFs of RtlpGetHeapProtection @ 0x18000EE34
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180004484 (RtlpFreeUserBlockToHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpCreateLowFragHeap @ 0x180044828 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180071908 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18007A8F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009C898 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpGetContainingRange @ 0x1800F4094 (RtlpGetContainingRange.c)
 * Callees:
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (a1[28] & 0x40000) != 0 ? 64 : 4;
  if ( a2 )
    return RtlpHpHeapValidateProtection(a1);
  return result;
}
