/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x18001F3EC
 * Callers:
 *     RtlpAllocateUserBlock @ 0x180020A20 (RtlpAllocateUserBlock.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     ZwProtectVirtualMemory @ 0x18009DAB0 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x18010A700 (RtlpLogHeapSubSegmentAlloc.c)
 */

_BYTE *__fastcall RtlpAllocateUserBlockFromHeap(PVOID HeapHandle, char a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  _RTL_CRITICAL_SECTION *v8; // rcx
  SIZE_T v10; // rdi
  _BYTE *Heap; // rax
  _BYTE *v12; // rbx
  __int64 v13; // rcx
  char *v15; // rdi
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  ULONG OldProtect; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1LL << a2;
  v8 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v10 = v5 + 0x2000;
  if ( !a4 )
    v10 = v5;
  RtlEnterCriticalSection(v8);
  Heap = RtlAllocateHeap(HeapHandle, 0x800001u, v10);
  v12 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      BaseAddress = (PVOID)((unsigned __int64)&Heap[v5 + 4095] & 0xFFFFFFFFFFFFF000uLL);
      v15 = (char *)((_BYTE *)BaseAddress - Heap + 4096);
      v12 = RtlReAllocateHeap(HeapHandle, 0x800001u, Heap, (SIZE_T)v15);
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      RegionSize = 4096LL;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u, &OldProtect);
      v10 = (SIZE_T)(v15 - 4096);
      v12[17] = 1;
      *((_WORD *)v12 + 9) = v10 - v5;
    }
    else
    {
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      *((_WORD *)v12 + 9) = 0;
      v12[17] = 0;
    }
    v12[16] = a2;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(HeapHandle, v12, v10, a3);
  }
  else
  {
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  }
  return v12;
}
