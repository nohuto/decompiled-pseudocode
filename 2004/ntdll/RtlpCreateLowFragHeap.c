/*
 * XREFs of RtlpCreateLowFragHeap @ 0x1800447D8
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180044A6C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18000A020 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlQueryResourcePolicy @ 0x1800446F0 (RtlQueryResourcePolicy.c)
 *     RtlpInitializeLowFragHeap @ 0x1800449BC (RtlpInitializeLowFragHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180109BD8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180109E6C (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  int v4; // ecx
  int v5; // esi
  __int64 v6; // rcx
  int HeapProtection; // eax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0, 0, (__int64)&v16, 4LL) >= 0 && v16 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v6 = 0LL;
    v5 = v2 & 1;
  }
  else
  {
    v4 = RtlpAffinityState[0];
    v5 = v2 & 1;
    if ( (v2 & 1) != 0 )
      v4 = 1;
    v6 = 48 * ((unsigned int)(v4 - 1) + 69LL + 4LL * (unsigned int)(129 * v4));
  }
  v17 = 0LL;
  v18 = v6;
  HeapProtection = RtlpGetHeapProtection(a1, 1, v3);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v18, 0x2000, HeapProtection) < 0 )
    return 0LL;
  v9 = RtlpAffinityState[0];
  if ( v5 )
    v9 = 1;
  v10 = 48LL * (unsigned int)(v9 - 1);
  v19 = (v10 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v11 = RtlpGetHeapProtection(a1, 1, v8);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v19, 4096, v11) < 0 )
  {
    v18 = 0LL;
    RtlpSecMemFreeVirtualMemory(v12, &v17, &v18, 0x8000LL);
    return 0LL;
  }
  v13 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v14 = 2147353472LL;
  if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v17, v19, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v13);
    RtlpLogHeapCommit(a1, v17, v19, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, v17);
  *(_QWORD *)(*(_QWORD *)(v17 + 24) + 568LL) += v18;
  *(_QWORD *)(*(_QWORD *)(v17 + 24) + 576LL) += v19;
  *(_QWORD *)(v17 + 48) = v17 + v18;
  *(_QWORD *)(v17 + 40) = v17 + v19;
  *(_QWORD *)(v17 + 32) = v10 + v17 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *(_DWORD *)(v17 + 672) = v2;
  return v17;
}
