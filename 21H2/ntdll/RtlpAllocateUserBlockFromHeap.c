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
 *     ZwProtectVirtualMemory @ 0x18009E040 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x18010A5A0 (RtlpLogHeapSubSegmentAlloc.c)
 */

__int64 __fastcall RtlpAllocateUserBlockFromHeap(__int64 a1, char a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  __int64 v10; // rdi
  __int64 Heap; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  char v20; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1LL << a2;
  v8 = *(_QWORD *)(a1 + 352);
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v10 = v5 + 0x2000;
  if ( !a4 )
    v10 = v5;
  RtlEnterCriticalSection(v8);
  Heap = RtlAllocateHeap(a1, 8388609LL, v10);
  v12 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      v18[0] = (Heap + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v17 = v18[0] - Heap + 4096;
      v12 = RtlReAllocateHeap(a1, 8388609LL, Heap, v17);
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v19 = 4096LL;
      ZwProtectVirtualMemory(-1LL, v18, &v19, 1LL, &v20);
      v10 = v17 - 4096;
      *(_BYTE *)(v12 + 17) = 1;
      *(_WORD *)(v12 + 18) = v10 - v5;
    }
    else
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      *(_WORD *)(v12 + 18) = 0;
      *(_BYTE *)(v12 + 17) = 0;
    }
    *(_BYTE *)(v12 + 16) = a2;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13) )
      v15 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v15 = 2147353472LL;
    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(a1, v12, v10, a3);
  }
  else
  {
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  return v12;
}
