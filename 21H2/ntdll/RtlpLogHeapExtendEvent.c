/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x18010A21C
 * Callers:
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x1800447E8 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180072938 (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18007BBD8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 *     GetUCBytes @ 0x180107E14 (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapExtendEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+17h] BYREF
  int v4; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+23h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
