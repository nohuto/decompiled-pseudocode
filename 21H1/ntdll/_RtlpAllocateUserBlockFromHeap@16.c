/*
 * XREFs of _RtlpAllocateUserBlockFromHeap@16 @ 0x4B2C01B1
 * Callers:
 *     @RtlpAllocateUserBlock@16 @ 0x4B2C3610 (@RtlpAllocateUserBlock@16.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _RtlpLogHeapSubSegmentAlloc@16 @ 0x4B36F2C8 (_RtlpLogHeapSubSegmentAlloc@16.c)
 */

_BYTE *__fastcall RtlpAllocateUserBlockFromHeap(PRTL_CRITICAL_SECTION *HeapHandle, char a2, int a3, char a4)
{
  int v5; // edi
  int v6; // esi
  _BYTE *Heap; // eax
  _BYTE *v8; // esi
  int v9; // ecx
  __int16 v10; // ax
  _DWORD *SharedData; // eax
  int v12; // eax
  SIZE_T v14; // [esp-4h] [ebp-24h]
  SIZE_T v15; // [esp-4h] [ebp-24h]
  ULONG OldProtect; // [esp+Ch] [ebp-14h] BYREF
  PVOID BaseAddress; // [esp+10h] [ebp-10h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-Ch] BYREF
  char v19; // [esp+1Fh] [ebp-1h]

  v19 = a2;
  v5 = 1 << a2;
  if ( (unsigned int)(1 << a2) > 0x78000 )
    v5 = 491520;
  v6 = v5;
  HIDWORD(RegionSize) = v5;
  if ( a4 )
  {
    v6 = v5 + 0x2000;
    HIDWORD(RegionSize) = v5 + 0x2000;
  }
  RtlEnterCriticalSection(HeapHandle[50]);
  LODWORD(v14) = v6;
  Heap = RtlAllocateHeap(HeapHandle, 0x800001u, v14);
  v8 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      BaseAddress = (PVOID)((unsigned int)&Heap[v5 + 4095] & 0xFFFFF000);
      HIDWORD(RegionSize) = (_BYTE *)BaseAddress - Heap;
      LODWORD(v15) = (_BYTE *)BaseAddress - Heap + 4096;
      v8 = RtlReAllocateHeap(HeapHandle, 0x800001u, Heap, v15);
      RtlLeaveCriticalSection(HeapHandle[50]);
      LODWORD(RegionSize) = 4096;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u, &OldProtect);
      v9 = HIDWORD(RegionSize);
      v10 = WORD2(RegionSize) - v5;
      v8[9] = 1;
    }
    else
    {
      RtlLeaveCriticalSection(HeapHandle[50]);
      v9 = HIDWORD(RegionSize);
      v10 = 0;
      v8[9] = 0;
    }
    *((_WORD *)v8 + 5) = v10;
    v8[8] = v19;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v12 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(v9, a3);
  }
  else
  {
    RtlLeaveCriticalSection(HeapHandle[50]);
  }
  return v8;
}
