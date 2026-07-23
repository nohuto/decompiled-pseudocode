/*
 * XREFs of @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38
 * Callers:
 *     _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA (_RtlpActivateLowFragmentationHeap@4.c)
 * Callees:
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     @RtlpInitializeLowFragHeap@12 @ 0x4B2AFD75 (@RtlpInitializeLowFragHeap@12.c)
 *     @RtlpGetLowFragHeapSize@8 @ 0x4B2AFE00 (@RtlpGetLowFragHeapSize@8.c)
 *     _RtlpQueryPhysicalMemoryPolicy@4 @ 0x4B2AFE9D (_RtlpQueryPhysicalMemoryPolicy@4.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlpInitializeLfhRandomDataArray@0 @ 0x4B2B2266 (_RtlpInitializeLfhRandomDataArray@0.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapExtendEvent@20 @ 0x4B36F013 (_RtlpLogHeapExtendEvent@20.c)
 */

PVOID __thiscall RtlpCreateLowFragHeap(PVOID BaseAddress)
{
  char v2; // al
  PVOID v3; // ecx
  ULONG HeapProtection; // eax
  int v5; // eax
  int v6; // ebx
  ULONG v7; // eax
  int v8; // esi
  int v9; // eax
  ULONG_PTR v11; // [esp-10h] [ebp-30h]
  ULONG_PTR v12; // [esp-10h] [ebp-30h]
  ULONG v13; // [esp+0h] [ebp-20h]
  ULONG v14; // [esp+0h] [ebp-20h]
  PVOID BaseAddressa; // [esp+Ch] [ebp-14h] BYREF
  int v16; // [esp+10h] [ebp-10h]
  int LowFragHeapSize; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-8h] BYREF
  int v19; // [esp+1Ch] [ebp-4h] BYREF

  v16 = 0;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0, 0);
  if ( RtlpQueryPhysicalMemoryPolicy(&v19) >= 0 && v19 <= 10 )
  {
    v2 = 3;
    v16 = 3;
  }
  else
  {
    v2 = v16;
  }
  LowFragHeapSize = RtlpGetLowFragHeapSize(v2);
  BaseAddressa = 0;
  HeapProtection = RtlpGetHeapProtection(v3);
  HIDWORD(v11) = &LowFragHeapSize;
  LODWORD(v11) = 0;
  if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, v11, (PSIZE_T)0x2000, HeapProtection, v13) < 0 )
    return 0;
  if ( (v16 & 1) != 0 )
    v5 = 1;
  else
    v5 = RtlpAffinityState;
  v6 = 24 * v5;
  v18 = 24 * v5 + 2000;
  v7 = RtlpGetHeapProtection(BaseAddress);
  HIDWORD(v12) = &v18;
  LODWORD(v12) = 0;
  if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, v12, (PSIZE_T)0x1000, v7, v14) < 0 )
  {
    LowFragHeapSize = 0;
    RtlpSecMemFreeVirtualMemory(&LowFragHeapSize, 0x8000);
    return 0;
  }
  v8 = 2147353472;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v9 = 2147353472;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (int)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(v18, 8 * *((_DWORD *)BaseAddress + 29), (HANDLE)*(unsigned __int8 *)v8);
    RtlpLogHeapCommit(v18, 9);
  }
  RtlpInitializeLowFragHeap(v16);
  *(_DWORD *)(*((_DWORD *)BaseAddressa + 3) + 500) += LowFragHeapSize;
  *(_DWORD *)(*((_DWORD *)BaseAddressa + 3) + 504) += v18;
  *((_DWORD *)BaseAddressa + 6) = (char *)BaseAddressa + LowFragHeapSize;
  *((_DWORD *)BaseAddressa + 5) = (char *)BaseAddressa + v18;
  *((_DWORD *)BaseAddressa + 4) = (char *)BaseAddressa + v6 + 2000;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *((_DWORD *)BaseAddressa + 110) = v16;
  return BaseAddressa;
}
