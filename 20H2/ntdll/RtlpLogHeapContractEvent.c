/*
 * XREFs of RtlpLogHeapContractEvent @ 0x18010A198
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x1800208E8 (RtlpDecommitBlock.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18007ABA8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 *     GetUCBytes @ 0x180107F74 (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapContractEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+7h] BYREF
  int v4; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
