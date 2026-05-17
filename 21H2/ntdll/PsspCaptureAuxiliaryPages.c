/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x18011508C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113CF0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009DAA0 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009DB40 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB80 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x18009DE20 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x18009DF80 (NtCreateSection.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

__int64 __fastcall PsspCaptureAuxiliaryPages(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v5; // ebx
  __int64 result; // rax
  int v8; // edi
  int Section; // r14d
  _QWORD *Heap; // [rsp+50h] [rbp-30h]
  HANDLE Handle; // [rsp+68h] [rbp-18h]

  v5 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    result = ZwAllocateVirtualMemory();
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 64LL);
    if ( !Heap )
      return 3221225626LL;
  }
  Section = NtCreateSection();
  if ( Section < 0 )
    goto LABEL_8;
  Section = ZwMapViewOfSection();
  if ( Section >= 0 )
  {
    memset(Heap, 0, 0x40uLL);
    if ( *a4 == 2147352576LL )
    {
      memmove(0LL, (const void *)0x7FFE0000, 0x720uLL);
    }
    else if ( (int)ZwReadVirtualMemory() < 0 )
    {
LABEL_19:
      NtUnmapViewOfSection();
      *(_DWORD *)(a1 + 888) = v5;
      *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
      *(_QWORD *)(a1 + 896) = Handle;
      *(_QWORD *)(a1 + 904) = Heap;
      *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
      return 0LL;
    }
    if ( (int)ZwQueryVirtualMemory() >= 0 )
    {
      v5 = 1;
      *Heap = *a4;
      Heap[7] = MEMORY[0x7FFE0014];
    }
    goto LABEL_19;
  }
  NtClose(Handle);
LABEL_8:
  if ( v8 )
    ZwFreeVirtualMemory();
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)Section;
}
