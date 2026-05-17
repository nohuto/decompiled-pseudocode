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

_DWORD *__thiscall RtlpCreateLowFragHeap(_DWORD *this)
{
  char v2; // al
  int v3; // ecx
  int HeapProtection; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  _DWORD *v11; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-10h]
  int LowFragHeapSize; // [esp+14h] [ebp-Ch] BYREF
  int v14; // [esp+18h] [ebp-8h] BYREF
  int v15; // [esp+1Ch] [ebp-4h] BYREF

  v12 = 0;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0, 0);
  if ( RtlpQueryPhysicalMemoryPolicy(&v15) >= 0 && v15 <= 10 )
  {
    v2 = 3;
    v12 = 3;
  }
  else
  {
    v2 = v12;
  }
  LowFragHeapSize = RtlpGetLowFragHeapSize(v2);
  v11 = 0;
  HeapProtection = RtlpGetHeapProtection(v3, 1);
  if ( (int)NtAllocateVirtualMemory(-1, &v11, 0, &LowFragHeapSize, 0x2000, HeapProtection) < 0 )
    return 0;
  if ( (v12 & 1) != 0 )
    v5 = 1;
  else
    v5 = RtlpAffinityState;
  v6 = 6 * v5;
  v14 = 24 * v5 + 2000;
  v7 = RtlpGetHeapProtection(this, 1);
  if ( (int)NtAllocateVirtualMemory(-1, &v11, 0, &v14, 4096, v7) < 0 )
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
    RtlpLogHeapExtendEvent(v14, 8 * this[29], *(unsigned __int8 *)v8);
    RtlpLogHeapCommit(v14, 9);
  }
  RtlpInitializeLowFragHeap(v12);
  *(_DWORD *)(v11[3] + 500) += LowFragHeapSize;
  *(_DWORD *)(v11[3] + 504) += v14;
  v11[6] = (char *)v11 + LowFragHeapSize;
  v11[5] = (char *)v11 + v14;
  v11[4] = &v11[v6 + 500];
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  v11[110] = v12;
  return v11;
}
