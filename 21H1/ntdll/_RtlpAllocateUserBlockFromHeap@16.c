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

int __fastcall RtlpAllocateUserBlockFromHeap(int a1, char a2, int a3, char a4)
{
  int v5; // edi
  int v6; // esi
  int Heap; // eax
  int v8; // esi
  int v9; // ecx
  __int16 v10; // ax
  _DWORD *SharedData; // eax
  int v12; // eax
  char v14[4]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v15; // [esp+10h] [ebp-10h] BYREF
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h]
  char v18; // [esp+1Fh] [ebp-1h]

  v18 = a2;
  v5 = 1 << a2;
  if ( (unsigned int)(1 << a2) > 0x78000 )
    v5 = 491520;
  v6 = v5;
  v17 = v5;
  if ( a4 )
  {
    v6 = v5 + 0x2000;
    v17 = v5 + 0x2000;
  }
  RtlEnterCriticalSection(*(_DWORD *)(a1 + 200));
  Heap = RtlAllocateHeap(a1, 8388609, v6);
  v8 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      v15 = (v5 + Heap + 4095) & 0xFFFFF000;
      v17 = v15 - Heap;
      v8 = RtlReAllocateHeap(a1, 8388609, Heap, v15 - Heap + 4096);
      RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
      v16 = 4096;
      ZwProtectVirtualMemory(-1, &v15, &v16, 1, v14);
      v9 = v17;
      v10 = v17 - v5;
      *(_BYTE *)(v8 + 9) = 1;
    }
    else
    {
      RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
      v9 = v17;
      v10 = 0;
      *(_BYTE *)(v8 + 9) = 0;
    }
    *(_WORD *)(v8 + 10) = v10;
    *(_BYTE *)(v8 + 8) = v18;
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
    RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
  }
  return v8;
}
