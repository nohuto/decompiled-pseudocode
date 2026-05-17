/*
 * XREFs of RtlpExtendLowFragHeapSegment @ 0x180071808
 * Callers:
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071654 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpInitializeSegmentInfoForBucket @ 0x1800717B4 (RtlpInitializeSegmentInfoForBucket.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180109BD8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180109E6C (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendLowFragHeapSegment(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rsi
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rcx
  int HeapProtection; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[4];
  v4 = a1 + 5;
  v7 = v3 + a2;
  if ( (unsigned __int64)(v3 + a2) <= a1[5] )
  {
LABEL_2:
    *a3 = v3;
    result = 0LL;
    a1[4] = v7;
    return result;
  }
  v9 = a1[3];
  v13 = (v7 - *v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection(v9, 1, (__int64)a3);
  result = ZwAllocateVirtualMemory(-1LL, v4, 0LL, &v13, 4096, HeapProtection);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1[3] + 576LL) += v13;
    v11 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(a1[3], *v4, v13, 16 * *(_QWORD *)(a1[3] + 192LL), *(unsigned __int8 *)v11);
      RtlpLogHeapCommit(a1[3], *v4, v13, 9LL);
    }
    *v4 += v13;
    v3 = a1[4];
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
