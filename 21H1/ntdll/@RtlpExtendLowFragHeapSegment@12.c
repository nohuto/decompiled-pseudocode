/*
 * XREFs of @RtlpExtendLowFragHeapSegment@12 @ 0x4B2AE2E8
 * Callers:
 *     @RtlpAffinitizeSegmentInfoForBucket@8 @ 0x4B2AE1C2 (@RtlpAffinitizeSegmentInfoForBucket@8.c)
 *     @RtlpInitializeSegmentInfoForBucket@8 @ 0x4B2AE2AF (@RtlpInitializeSegmentInfoForBucket@8.c)
 * Callees:
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapExtendEvent@20 @ 0x4B36F013 (_RtlpLogHeapExtendEvent@20.c)
 */

int __fastcall RtlpExtendLowFragHeapSegment(_DWORD *a1, int a2, _DWORD *a3)
{
  int v4; // ecx
  _DWORD *v5; // ebx
  int result; // eax
  int v7; // eax
  int v8; // ecx
  int HeapProtection; // eax
  int v10; // edi
  int v11; // eax
  int v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h] BYREF

  v4 = a1[4];
  v5 = a1 + 5;
  v12 = v4 + a2;
  if ( (unsigned int)(v4 + a2) <= a1[5] )
  {
LABEL_2:
    *a3 = v4;
    a1[4] = v12;
    return 0;
  }
  v7 = v4 + a2 - *v5;
  v8 = a1[3];
  v13 = v7;
  HeapProtection = RtlpGetHeapProtection(v8, 1);
  result = NtAllocateVirtualMemory(-1, a1 + 5, 0, &v13, 4096, HeapProtection);
  if ( result >= 0 )
  {
    *(_DWORD *)(a1[3] + 504) += v13;
    v10 = 2147353472;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (int)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(v13, 8 * *(_DWORD *)(a1[3] + 116), *(unsigned __int8 *)v10);
      RtlpLogHeapCommit(v13, 9);
    }
    *v5 += v13;
    v4 = a1[4];
    goto LABEL_2;
  }
  *a3 = 0;
  return result;
}
