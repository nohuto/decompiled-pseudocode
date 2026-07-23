/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x18010A37C
 * Callers:
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x180044828 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180071908 (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18007ABA8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 *     GetUCBytes @ 0x180107F74 (GetUCBytes.c)
 */

NTSTATUS __fastcall RtlpLogHeapExtendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, HANDLE TraceHandle)
{
  __int64 UCBytes; // rax
  _BYTE Fields[6]; // [rsp+20h] [rbp-31h] BYREF
  __int16 v9; // [rsp+26h] [rbp-2Bh]
  __int64 v10; // [rsp+40h] [rbp-11h]
  __int64 v11; // [rsp+48h] [rbp-9h]
  __int64 v12; // [rsp+50h] [rbp-1h]
  __int64 v13; // [rsp+58h] [rbp+7h]
  __int64 v14; // [rsp+60h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+74h] [rbp+23h]

  v15 = 0LL;
  v14 = 0LL;
  v16 = 0;
  v10 = a1;
  v11 = a3;
  v12 = a2;
  v13 = a4;
  v17 = RtlpEstimateAllocatedSize(a1);
  UCBytes = GetUCBytes(a1, &v15, &v16);
  v14 = v15 - *(_QWORD *)(a1 + 664) - UCBytes;
  v9 = 4133;
  return NtTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
