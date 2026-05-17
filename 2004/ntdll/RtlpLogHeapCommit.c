/*
 * XREFs of RtlpLogHeapCommit @ 0x180109BD8
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x180006258 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x1800447D8 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180071808 (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4147;
  v9[5] = a2;
  v9[6] = a3;
  LODWORD(v9[7]) = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
