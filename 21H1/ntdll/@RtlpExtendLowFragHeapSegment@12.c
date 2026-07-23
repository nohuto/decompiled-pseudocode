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

NTSTATUS __fastcall RtlpExtendLowFragHeapSegment(_DWORD *a1, int a2, _DWORD *a3)
{
  int v4; // ecx
  _DWORD *v5; // ebx
  NTSTATUS result; // eax
  int v7; // eax
  void *v8; // ecx
  ULONG HeapProtection; // eax
  int v10; // edi
  int v11; // eax
  ULONG_PTR v12; // [esp-10h] [ebp-24h]
  ULONG v13; // [esp+0h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+10h] [ebp-4h] BYREF

  v4 = a1[4];
  v5 = a1 + 5;
  v14 = v4 + a2;
  if ( (unsigned int)(v4 + a2) <= a1[5] )
  {
LABEL_2:
    *a3 = v4;
    a1[4] = v14;
    return 0;
  }
  v7 = v4 + a2 - *v5;
  v8 = (void *)a1[3];
  v15 = v7;
  HeapProtection = RtlpGetHeapProtection(v8);
  HIDWORD(v12) = &v15;
  LODWORD(v12) = 0;
  result = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)a1 + 5, v12, (PSIZE_T)0x1000, HeapProtection, v13);
  if ( result >= 0 )
  {
    *(_DWORD *)(a1[3] + 504) += v15;
    v10 = 2147353472;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (int)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(v15, 8 * *(_DWORD *)(a1[3] + 116), (HANDLE)*(unsigned __int8 *)v10);
      RtlpLogHeapCommit(v15, 9);
    }
    *v5 += v15;
    v4 = a1[4];
    goto LABEL_2;
  }
  *a3 = 0;
  return result;
}
