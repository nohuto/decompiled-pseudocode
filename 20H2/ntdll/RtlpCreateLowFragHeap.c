/*
 * XREFs of RtlpCreateLowFragHeap @ 0x180044828
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180044ABC (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18000A020 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlQueryResourcePolicy @ 0x180044740 (RtlQueryResourcePolicy.c)
 *     RtlpInitializeLowFragHeap @ 0x180044A0C (RtlpInitializeLowFragHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x18010A0E8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18010A37C (RtlpLogHeapExtendEvent.c)
 */

PVOID __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  ULONG_PTR v5; // rcx
  ULONG Protect; // eax
  int v7; // eax
  __int64 v8; // r15
  ULONG HeapProtection; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v14; // [rsp+70h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+50h] BYREF
  ULONG_PTR v17; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0, 0, (__int64)&v14, 4LL) >= 0 && v14 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v5 = 0LL;
    v4 = v2 & 1;
  }
  else
  {
    v3 = RtlpAffinityState[0];
    v4 = v2 & 1;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v5 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  BaseAddress = 0LL;
  RegionSize = v5;
  Protect = RtlpGetHeapProtection((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v7 = RtlpAffinityState[0];
  if ( v4 )
    v7 = 1;
  v8 = 48LL * (unsigned int)(v7 - 1);
  v17 = (v8 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v17, 0x1000u, HeapProtection) < 0 )
  {
    RegionSize = 0LL;
    RtlpSecMemFreeVirtualMemory(v10, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, (int)BaseAddress, v17, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v11);
    RtlpLogHeapCommit(a1, BaseAddress, v17, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, BaseAddress);
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 568LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 576LL) += v17;
  *((_QWORD *)BaseAddress + 6) = (char *)BaseAddress + RegionSize;
  *((_QWORD *)BaseAddress + 5) = (char *)BaseAddress + v17;
  *((_QWORD *)BaseAddress + 4) = (char *)BaseAddress + v8 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *((_DWORD *)BaseAddress + 168) = v2;
  return BaseAddress;
}
